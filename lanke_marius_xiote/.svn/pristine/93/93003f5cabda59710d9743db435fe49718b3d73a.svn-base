note
	description: "Different controllers for different behaviours/ states."
	author: "Xiaote Zhu"

class
	MOVING_TO_GOAL_CONTROLLER

inherit
	CANCELLABLE_CONTROL_LOOP

create
	make

feature {NONE} -- Initialization

	make (s_sig: separate STOP_SIGNALER)
			-- Create current and assign given attributes.
		do
			stop_signaler := s_sig

			create pid_controller.make(0.5, 0.0, 0.0)
			create tm
			create rsc.make
			create ec
		end

feature {MOVING_TO_GOAL_BEHAVIOR} -- Control

	go (m_sig: separate MOVING_TO_GOAL_SIGNALER; o_sig: separate ODOMETRY_SIGNALER; s_sig: separate STOP_SIGNALER;
		drive: separate DIFFERENTIAL_DRIVE; r_sens: separate THYMIO_RANGE_GROUP)
			-- Move robot if goal not reached yet.
		require
			(not m_sig.is_goal_reached and
			not m_sig.is_goal_unreachable and
			not m_sig.is_wall_following and
			not m_sig.is_transiting) or s_sig.is_stop_requested
		local
			heading_error: REAL_64
			vtheta: REAL_64
			vx: REAL_64
		do
			if s_sig.is_stop_requested then
				drive.stop

			else
				heading_error := ec.get_heading_error (o_sig.x, o_sig.y, o_sig.theta, m_sig.goal_point.x, m_sig.goal_point.y)	-- Find angular deviation
				vtheta := pid_controller.get_control_output (heading_error, o_sig.timestamp)						-- Calculate control input
				vx := 0.04 -- TODO: CONSTANT SPEED

				m_sig.clear_all_pendings
				m_sig.set_is_go_pending (True)
				drive.set_velocity (vx, vtheta)																		-- Set the calculated control input

				debug
					io.put_string ("Current state: GO%N")
				end
			end
		end

	follow_wall (m_sig: separate MOVING_TO_GOAL_SIGNALER; o_sig: separate ODOMETRY_SIGNALER; s_sig: separate STOP_SIGNALER;
						drive: separate DIFFERENTIAL_DRIVE; r_sens: separate THYMIO_RANGE_GROUP)
				-- Turn and follow the boundary of the obstacle being detected.
		require
			(not m_sig.is_goal_reached and
			not m_sig.is_goal_unreachable and
			(r_sens.is_obstacle or m_sig.is_wall_following) and
			not m_sig.is_transiting) or s_sig.is_stop_requested
		local
			vtheta, vx, desired_wall_distance: REAL_64
		do
			desired_wall_distance := 0.10				               												-- Set minimum distance to obstacle																			--

			if s_sig.is_stop_requested then
				drive.stop																							-- Stop behavior when needed
			else
				if not m_sig.is_wall_following_start_set then
					-- Set wall_following_start_point and wall_following_start_theta
					-- when enter into wall following state the first time.
					set_wall_following_start_point (m_sig, o_sig, r_sens, desired_wall_distance)
					m_sig.set_wall_following_start_theta (o_sig.theta)
					m_sig.set_is_wall_following_start_set (True)
				end

				if r_sens.is_obstacle_vanished then																	-- Handle situation when the robot
					if (r_sens.time_steps_obstacle_vanished - 6.5) > 0 then											-- turns a corner
						vtheta := r_sens.follow_wall_orientation (desired_wall_distance)
					else
						vtheta := 0
					end
				end

				vx := 0.04																							-- Set velocity

				m_sig.clear_all_pendings
				m_sig.set_is_wall_following (True)
				drive.set_velocity (vx, vtheta)																		-- Set control input

				debug
					io.put_string ("Current state: FOLLOW WALL%N")
				end
			end
		end

	look_for_vleave (m_sig: separate MOVING_TO_GOAL_SIGNALER; o_sig: separate ODOMETRY_SIGNALER; s_sig: separate STOP_SIGNALER;
						r_sens: separate THYMIO_RANGE_GROUP)
				-- Look for v_leave when in wall_following state
		require
			(m_sig.is_wall_following and
			(m_sig.wall_following_start_theta - o_sig.theta).abs > 0.5 and
			r_sens.is_obstacle and
			not m_sig.is_goal_unreachable and
			not m_sig.is_goal_reached and
			not s_sig.is_stop_requested)
		local
			goal_point, robot_point, sensor_max_range_rel_point, sensor_max_range_abs_point: POINT_MSG
			vleave_point: separate POINT_MSG
			cur_distance, vleave_d_min, sensor_max_range_d_min: REAL_64
			i: INTEGER
		do
			vleave_d_min := 2^2000																					-- Initialize minimum exit to goal to inf
			create goal_point.make_from_separate (m_sig.goal_point)													-- local object for goal location
			create robot_point.make_with_values (o_sig.x, o_sig.y, 0.0)												-- local object for robot position
			create vleave_point.make_empty																			-- local object for optimal point to leave obstacle

			cur_distance := tm.euclidean_distance (goal_point, robot_point)											-- Set current distance to goal

			if cur_distance < m_sig.d_min then																		-- Update current minimum distance to goal if true
				-- Update d_min.
				m_sig.set_d_min (cur_distance)
			end

			from
				i := r_sens.sensors.lower
			until
				i > r_sens.sensors.upper - 2
			loop
				-- Find the sensor whose max range is reachable and
				-- whose max range's distance to goal is less than d_min.
				if r_sens.is_enough_space_for_moving_to_the_max_range (i) then
					 sensor_max_range_rel_point := rsc.get_relative_coordinates_with_sensor (r_sens.sensors[i].max_range, i)
					 sensor_max_range_abs_point := rsc.convert_relative_coordinates_to_absolute_coordinates (robot_point,
					 									sensor_max_range_rel_point, o_sig.theta)
					 sensor_max_range_d_min := tm.euclidean_distance (goal_point, sensor_max_range_abs_point)

					 if sensor_max_range_d_min < vleave_d_min and sensor_max_range_d_min < m_sig.d_min then

					 	vleave_d_min := sensor_max_range_d_min
					 	vleave_point := sensor_max_range_abs_point
					 end
				end
				i := i + 1
			end

			if not vleave_d_min.is_positive_infinity then
				-- Set vleave_point when one is found.
				m_sig.set_v_leave (vleave_point)
				m_sig.set_is_v_leave_found (True)
			end

			debug
				io.put_string ("Current state: LOOK FOR VLEAVE%N")
			end
		end

	transit_to_vleave (m_sig: separate MOVING_TO_GOAL_SIGNALER; o_sig: separate ODOMETRY_SIGNALER; s_sig: separate STOP_SIGNALER;
						drive: separate DIFFERENTIAL_DRIVE; r_sens: separate THYMIO_RANGE_GROUP)
				-- Transit to v_leave if found
		require
			(m_sig.is_v_leave_found and
			not m_sig.is_goal_unreachable and
			not m_sig.is_goal_reached) or s_sig.is_stop_requested
		local
			heading_error, vtheta, vx: REAL_64
			vleave, robot_point: POINT_MSG
		do
			create vleave.make_from_separate (m_sig.v_leave)
			create robot_point.make_with_values (o_sig.x, o_sig.y, o_sig.z)

			if s_sig.is_stop_requested then
				drive.stop

			elseif tm.euclidean_distance (vleave, robot_point) < 0.02 then
				-- Exit transition state when vleave point reached.
				m_sig.clear_all_pendings
				m_sig.set_is_v_leave_found (False)

			else
				heading_error := ec.get_heading_error (o_sig.x, o_sig.y, o_sig.theta, vleave.x, vleave.y)        	-- Set control input
				vtheta := pid_controller.get_control_output (heading_error, o_sig.timestamp)						--
				vx := 0.04																							--
																													--
				m_sig.clear_all_pendings
				m_sig.set_is_transiting (True)
				drive.set_velocity (vx, vtheta)
			end

			debug
				io.put_string ("Current state: TRANSIT%N")
			end
		end

	change_features (m_sig: separate MOVING_TO_GOAL_SIGNALER; s_sig: separate STOP_SIGNALER; top_leds: separate THYMIO_TOP_LEDS)
			-- Change features including light color based on current state.
		do
			if m_sig.is_go_pending then
				top_leds.set_to_yellow
			elseif m_sig.is_wall_following then
				top_leds.set_to_red
			elseif m_sig.is_transiting then
				top_leds.set_to_blue
			elseif m_sig.is_goal_reached then
				top_leds.set_to_green
			elseif m_sig.is_goal_unreachable then
				top_leds.set_to_magenta
			end
		end

	stop_when_goal_reached (m_sig: separate MOVING_TO_GOAL_SIGNALER; o_sig: separate ODOMETRY_SIGNALER; s_sig: separate STOP_SIGNALER;
							drive: separate DIFFERENTIAL_DRIVE)
			-- Stop if goal reached.
		require
			o_sig.is_moving or s_sig.is_stop_requested
		local
			robot_point, goal_point: POINT_MSG
		do
			create robot_point.make_with_values (o_sig.x, o_sig.y, 0.0)
			create goal_point.make_from_separate (m_sig.goal_point)

			if tm.euclidean_distance (goal_point, robot_point) < 0.05 then										-- Check if distance to goal is less than tolerance
				m_sig.clear_all_pendings
				m_sig.set_is_goal_reached (True)
				s_sig.set_stop_requested (True)
				drive.stop																						-- Stop moving

				debug
					io.put_string ("Current state: STOP - GOAL REACHED%N")
				end
			end
		end

	stop_when_goal_unreachable (m_sig: separate MOVING_TO_GOAL_SIGNALER; o_sig: separate ODOMETRY_SIGNALER; s_sig: separate STOP_SIGNALER;
								drive: separate DIFFERENTIAL_DRIVE)
			-- Stop if goal unreachable.
		require
			o_sig.is_moving or s_sig.is_stop_requested
		local
			wall_following_start_point, robot_point: POINT_MSG
		do
			create robot_point.make_with_values (o_sig.x, o_sig.y, 0.0)
			create wall_following_start_point.make_from_separate (m_sig.wall_following_start_point)

			if ((m_sig.wall_following_start_theta - o_sig.theta).abs > 3.14 and									-- Check if robot has looped a cycle
				tm.euclidean_distance (robot_point, wall_following_start_point) < 0.15) then					-- Check if robot is close enough to
																												-- initial obstacle point
				m_sig.clear_all_pendings
				s_sig.set_stop_requested (True)
				m_sig.set_is_goal_unreachable (True)
				drive.stop

				debug
					io.put_string ("Current state: GOAL UNREACHABLE%N")
				end
			end
		end


feature

	tm: TRIGONOMETRY_MATH
	ec: ERROR_CALCULATIONS
	rsc: RELATIVE_SPACE_CALCULATIONS
	pid_controller: PID_CONTROLLER

feature {NONE}

	set_wall_following_start_point (m_sig: separate MOVING_TO_GOAL_SIGNALER; o_sig: separate ODOMETRY_SIGNALER;
										r_sens: separate THYMIO_RANGE_GROUP; desired_wall_distance: REAL_64)
			-- Set the start point of the wall following state
		local
			closest_sensor_index : INTEGER
			robot_point, abs_start_point, relative_start_point : POINT_MSG
		do
			create robot_point.make_with_values (o_sig.x, o_sig.y, 0)
			closest_sensor_index := r_sens.get_closest_sensor_index
			create relative_start_point.make_with_values (														-- Calculate first wall point in
						(rsc.sensor_distances[closest_sensor_index] +											-- global coordinates
						r_sens.sensors[closest_sensor_index].range - desired_wall_distance)						-- using sensor return values
						/ tm.cosine (rsc.sensor_angles[closest_sensor_index]), 0.0, 0.0)						-- and coordinate transformation
			abs_start_point := rsc.convert_relative_coordinates_to_absolute_coordinates (robot_point,			-- functions
													relative_start_point, o_sig.theta)
			m_sig.set_wall_following_start_point (abs_start_point)
		end

end -- class MOVING_TO_GOAL_CONTROLLER
