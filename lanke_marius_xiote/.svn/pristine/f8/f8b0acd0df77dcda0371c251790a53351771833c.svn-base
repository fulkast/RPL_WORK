note
	description: "Different controllers for different moving_to_goal states."
	author: "Xiaote Zhu"

class
	MOVING_TO_GOAL_CONTROLLER

inherit
	CANCELLABLE_CONTROL_LOOP
	TRIGONOMETRY_MATH

create
	make

feature {NONE} -- Initialization

	make (s_sig: separate STOP_SIGNALER; par: PARAMETERS)
			-- Create current and assign given attributes.
		do
			stop_signaler := s_sig
			params := par

			create pid_controller.make(params.k_p, params.k_i, params.k_d)
			create rsc.make
			create ec

		end

feature {MOVING_TO_GOAL_BEHAVIOR} -- Control

	go (state_sig: separate STATE_SIGNALER; m_sig: separate MOVING_TO_GOAL_SIGNALER; o_sig: separate ODOMETRY_SIGNALER; s_sig: separate STOP_SIGNALER;
		drive: separate DIFFERENTIAL_DRIVE; r_sens: separate THYMIO_RANGE_GROUP; path_planner: separate PATH_PLANNER)
			-- Move robot if goal not reached yet.
		require
			state_sig.is_go or s_sig.is_stop_requested
		local
			heading_error: REAL_64
			vtheta: REAL_64
			vx: REAL_64
			robot_point, cur_goal_point: POINT_MSG
		do
			create robot_point.make_with_values (o_sig.x, o_sig.y, o_sig.z)
			create cur_goal_point.make_from_separate (path_planner.get_cur_goal)
			if s_sig.is_stop_requested then
				drive.stop

			if not m_sig.is_path_planned then
				path_planner.set_start_node (o_sig.x, o_sig.y, o_sig.z)
				path_planner.search_path
				m_sig.set_is_path_planned (True)
			end

			if euclidean_distance (cur_goal_point, robot_point) < 0.01 then
				path_planner.move_to_next_goal -- TODO: WHAT IF WE RUN OUT OF PATH BUT HAVEN'T REACHED GOAL YET
				pid_controller.reset
			end

			else
				heading_error := ec.get_heading_error (o_sig.x, o_sig.y, o_sig.theta, cur_goal_point.x, cur_goal_point.y)
				vtheta := pid_controller.get_control_output (heading_error, o_sig.timestamp)
				vx := params.vx

				state_sig.set_is_go
				drive.set_velocity (vx, vtheta)

				debug
					io.put_string ("Current state: GO%N")
				end
			end
		end

	follow_wall (state_sig: separate STATE_SIGNALER; m_sig: separate MOVING_TO_GOAL_SIGNALER; o_sig: separate ODOMETRY_SIGNALER;
					s_sig: separate STOP_SIGNALER; drive: separate DIFFERENTIAL_DRIVE; r_sens: separate THYMIO_RANGE_GROUP)
				-- Turn and follow the boundary of the obstacle being detected.
		require
			(state_sig.is_go and r_sens.is_obstacle) or state_sig.is_wall_following or s_sig.is_stop_requested
		local
			vtheta, vx, desired_wall_distance: REAL_64
		do
			desired_wall_distance := params.desired_wall_distance
			m_sig.set_timestamp_obstacle_last_seen (r_sens.is_obstacle, o_sig.timestamp)     																														--

			if s_sig.is_stop_requested then
				drive.stop
			else
				if not m_sig.is_wall_following_start_set then
					-- Set wall_following_start_point and wall_following_start_theta
					-- when enter into wall following state the first time.
					set_wall_following_start_point (m_sig, o_sig, r_sens, desired_wall_distance)
					m_sig.set_wall_following_start_theta (o_sig.theta)
					m_sig.set_is_wall_following_start_set (True)
				end

				vtheta := r_sens.follow_wall_orientation (desired_wall_distance, o_sig.timestamp, m_sig.timestamp_obstacle_last_seen, params.vx)
				vx := params.vx

				state_sig.set_is_wall_following
				drive.set_velocity (vx, vtheta)

				debug
					io.put_string ("Current state: FOLLOW WALL%N")
				end
			end
		end

	look_for_vleave (state_sig: separate STATE_SIGNALER; m_sig: separate MOVING_TO_GOAL_SIGNALER; o_sig: separate ODOMETRY_SIGNALER;
						s_sig: separate STOP_SIGNALER; r_sens: separate THYMIO_RANGE_GROUP)
				-- Look for v_leave when in wall_following state
		require
			state_sig.is_wall_following and
			(m_sig.wall_following_start_theta - o_sig.theta).abs > params.angle_looped_around_threshold and
			not s_sig.is_stop_requested
		local
			goal_point, robot_point, sensor_max_range_rel_point, sensor_max_range_abs_point: POINT_MSG
			vleave_point: separate POINT_MSG
			cur_distance, vleave_d_min, sensor_max_range_d_min: REAL_64
			i: INTEGER
		do
			vleave_d_min := {REAL_64}.positive_infinity
			create goal_point.make_from_separate (m_sig.goal_point)
			create robot_point.make_with_values (o_sig.x, o_sig.y, 0.0)
			create vleave_point.make_empty

			cur_distance := euclidean_distance (goal_point, robot_point)

			if cur_distance < m_sig.d_min then
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
					 sensor_max_range_d_min := euclidean_distance (goal_point, sensor_max_range_abs_point)

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

	transit_to_vleave (state_sig: separate STATE_SIGNALER; m_sig: separate MOVING_TO_GOAL_SIGNALER; o_sig: separate ODOMETRY_SIGNALER; s_sig: separate STOP_SIGNALER;
						drive: separate DIFFERENTIAL_DRIVE; r_sens: separate THYMIO_RANGE_GROUP)
			-- Transit to v_leave if found
		require
			(m_sig.is_v_leave_found or state_sig.is_transiting) or s_sig.is_stop_requested
		local
			heading_error, vtheta, vx: REAL_64
			vleave, robot_point: POINT_MSG
		do
			create vleave.make_from_separate (m_sig.v_leave)
			create robot_point.make_with_values (o_sig.x, o_sig.y, o_sig.z)

			if s_sig.is_stop_requested then
				drive.stop

			elseif euclidean_distance (vleave, robot_point) < params.vleave_reached_distance_threshold then
				-- Exit transition state when vleave point reached.
				state_sig.set_is_go
				m_sig.set_is_v_leave_found (False)
				m_sig.set_is_path_planned (False)

			else
				heading_error := ec.get_heading_error (o_sig.x, o_sig.y, o_sig.theta, vleave.x, vleave.y)
				vtheta := pid_controller.get_control_output (heading_error, o_sig.timestamp)
				vx := params.vx

				state_sig.set_is_transiting
				drive.set_velocity (vx, vtheta)
			end

			debug
				io.put_string ("Current state: TRANSIT%N")
			end
		end

	stop_when_goal_reached (state_sig: separate STATE_SIGNALER; m_sig: separate MOVING_TO_GOAL_SIGNALER; o_sig: separate ODOMETRY_SIGNALER; s_sig: separate STOP_SIGNALER;
							drive: separate DIFFERENTIAL_DRIVE)
			-- Stop if goal reached.
		require
			o_sig.is_moving
		local
			robot_point, goal_point: POINT_MSG
		do
			create robot_point.make_with_values (o_sig.x, o_sig.y, 0.0)
			create goal_point.make_from_separate (m_sig.goal_point)

			if euclidean_distance (goal_point, robot_point) < params.goal_reached_distance_threshold then
				-- Check if distance to goal is less than tolerance
				state_sig.set_is_goal_reached
				s_sig.set_stop_requested (True)
				drive.stop

				debug
					io.put_string ("Current state: STOP - GOAL REACHED%N")
				end
			end
		end

	stop_when_goal_unreachable (state_sig: separate STATE_SIGNALER; m_sig: separate MOVING_TO_GOAL_SIGNALER; o_sig: separate ODOMETRY_SIGNALER; s_sig: separate STOP_SIGNALER;
								drive: separate DIFFERENTIAL_DRIVE)
			-- Stop if goal unreachable.
		require
			o_sig.is_moving
		local
			wall_following_start_point, robot_point: POINT_MSG
		do
			create robot_point.make_with_values (o_sig.x, o_sig.y, 0.0)
			create wall_following_start_point.make_from_separate (m_sig.wall_following_start_point)

			if ((m_sig.wall_following_start_theta - o_sig.theta).abs > params.angle_looped_around_threshold_unreachable and
				-- Check if robot has looped a cycle.
				euclidean_distance (robot_point, wall_following_start_point) < params.goal_unreachable_distance_threshold) then
				-- Check if robot is close enough to initial obstacle point.
				state_sig.set_is_goal_unreachable
				s_sig.set_stop_requested (True)
				drive.stop

				debug
					io.put_string ("Current state: GOAL UNREACHABLE%N")
				end
			end
		end

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
			create relative_start_point.make_with_values (
						(rsc.sensor_distances[closest_sensor_index] +
						r_sens.sensors[closest_sensor_index].range - desired_wall_distance)
						/ cosine (rsc.sensor_angles[closest_sensor_index]), 0.0, 0.0)
			abs_start_point := rsc.convert_relative_coordinates_to_absolute_coordinates (robot_point,
													relative_start_point, o_sig.theta)
			-- Calculate first wall point in global coordinates using sensor return values
			-- and coordinate transformation functions
			m_sig.set_wall_following_start_point (abs_start_point)
		end

feature

	ec: ERROR_CALCULATIONS
	rsc: RELATIVE_SPACE_CALCULATIONS
	pid_controller: PID_CONTROLLER
	params: PARAMETERS

end -- class
