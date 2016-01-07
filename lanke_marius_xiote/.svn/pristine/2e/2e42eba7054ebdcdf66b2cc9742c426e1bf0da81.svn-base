note
	description: "Class to execute MOVING_TO_GOAL_BEHAVIOR functionality."
	author: "Xiaote Zhu"

class
	MOVING_TO_GOAL_CONTROLLER

inherit
	CANCELLABLE_CONTROL_LOOP

create
	make

feature {NONE} -- Initialization

	make (s_sig: separate STOP_SIGNALER; g_x, g_y: REAL_64)
			-- Create current and assign given attributes.
		do
			stop_signaler := s_sig
			goal_x := g_x
			goal_y := g_y

			create pid_controller.make(0.5, 0.0, 0.0)
			create tm
			create rsc.make
			create ec
			create start_point_wall.make_empty
		end

feature

	start_point_wall: POINT_MSG

feature {NONE}

	start_wall_following_point (m_sig: separate MOVING_TO_GOAL_SIGNALER; o_sig: separate ODOMETRY_SIGNALER): POINT_MSG
		require
			not m_sig.is_wall_first_detected
		local
			start_point: POINT_MSG
		do
			create start_point.make_with_values (o_sig.x, o_sig.y, 0.0)
			start_point_wall := start_point
			Result := start_point_wall
		end

feature {MOVING_TO_GOAL_BEHAVIOR} -- Control

	go (m_sig: separate MOVING_TO_GOAL_SIGNALER; o_sig: separate ODOMETRY_SIGNALER; s_sig: separate STOP_SIGNALER;
		drive: separate DIFFERENTIAL_DRIVE; r_sens: separate THYMIO_RANGE_GROUP)
			-- Move robot if goal not reached yet.
		require
			(not m_sig.is_goal_reached and
			not m_sig.is_wall_following) or s_sig.is_stop_requested
		local
			heading_error: REAL_64
			vtheta: REAL_64
			vx: REAL_64
		do
			if s_sig.is_stop_requested then
				drive.stop

			else
				heading_error := ec.get_heading_error (o_sig.x, o_sig.y, o_sig.theta, goal_x, goal_y)

				vtheta := pid_controller.get_control_output (heading_error, o_sig.timestamp)
				vx := 0.04 --0.025 - (vtheta.abs / 10)

				m_sig.clear_all_pendings
				m_sig.set_is_go_pending (True)
				drive.set_velocity (vx, vtheta)

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
			r_sens.is_obstacle) or s_sig.is_stop_requested
		local
			vtheta: REAL_64
			vx: REAL_64
		do
			if s_sig.is_stop_requested then
				drive.stop
			else
				vtheta := r_sens.follow_wall_orientation (5.0)
				vx := 0.04

				m_sig.clear_all_pendings
				m_sig.set_is_wall_following (True)
				m_sig.set_is_wall_first_detected (True)
				drive.set_velocity (vx, vtheta)

				debug
					io.put_string ("Current state: FOLLOW WALL%N")
					--io.put_string ("Point wall first detected: " + start_wall_following_point (m_sig, o_sig).out + "%NFirst_detected: " + m_sig.is_wall_first_detected.out + "%N")
					io.put_string ("start_point_wall: " + start_point_wall.out + "%N")
				end
			end
		end

	transit_vleave (m_sig: separate MOVING_TO_GOAL_SIGNALER; o_sig: separate ODOMETRY_SIGNALER; s_sig: separate STOP_SIGNALER;
					drive: separate DIFFERENTIAL_DRIVE; r_sens: separate THYMIO_RANGE_GROUP)
				-- Transit to v_leave if found
		require
			(not m_sig.is_goal_reached and not m_sig.is_goal_unreachable and m_sig.is_wall_following)
				or s_sig.is_stop_requested
		local
			goal_point, robot_point, sensor_max_range_rel_point, sensor_max_range_abs_point: POINT_MSG
			vleave_point: separate POINT_MSG
			cur_distance: REAL_64
			vleave_d_min, sensor_max_range_d_min: REAL_64
			vleave_sensor_index, i: INTEGER
		do
			vleave_d_min := 2^64
			create goal_point.make_with_values (goal_x, goal_y, 0.0)
			create robot_point.make_with_values (o_sig.x, o_sig.y, 0.0)
			create vleave_point.make_empty
			cur_distance := tm.euclidean_distance (goal_point, robot_point)

			if cur_distance < m_sig.d_min then
				m_sig.set_d_min (cur_distance)
			end

			--if m_sig.is_transiting and tm.euclidean_distance (m_sig.v_leave, robot_point) < 0.02 then
			--	m_sig.clear_all_pendings

			--else
				from
					i := r_sens.sensors.lower
				until
					i > r_sens.sensors.upper
				loop
					if not r_sens.sensors[i].is_valid_range then
						 sensor_max_range_rel_point := rsc.get_relative_coordinates_with_sensor (r_sens.sensors[i].max_range, i)
						 sensor_max_range_abs_point := rsc.convert_relative_coordinates_to_absolute_coordinates (robot_point, sensor_max_range_rel_point)
						 sensor_max_range_d_min := tm.euclidean_distance (goal_point, sensor_max_range_abs_point)
						 if sensor_max_range_d_min < vleave_d_min and sensor_max_range_d_min < m_sig.d_min then
						 	vleave_d_min := sensor_max_range_d_min
						 	vleave_sensor_index := i
						 	vleave_point := sensor_max_range_abs_point
						 end
					end
					i := i + 1
				end

				if not vleave_d_min.is_positive_infinity then
					m_sig.set_v_leave (vleave_point)
					m_sig.clear_all_pendings
					m_sig.set_is_transiting (True)
					drive.set_velocity (0.02, rsc.sensor_angles[vleave_sensor_index])
				end
			--end
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
			elseif not m_sig.is_goal_unreachable then
				top_leds.set_to_magenta
			end
		end

	stop_when_goal_reached (m_sig: separate MOVING_TO_GOAL_SIGNALER; o_sig: separate ODOMETRY_SIGNALER; s_sig: separate STOP_SIGNALER;
								drive: separate DIFFERENTIAL_DRIVE)
			-- Stop if goal reached or goal is unreachable (TODO).
		require
			(o_sig.is_moving and
			m_sig.is_goal_reached) or s_sig.is_stop_requested
		local
			goal_point, robot_point: POINT_MSG
		do
			if s_sig.is_stop_requested then
				drive.stop
			else
				create goal_point.make_with_values (goal_x, goal_y, 0.0)
				create robot_point.make_with_values (o_sig.x, o_sig.y, 0.0)

				m_sig.clear_all_pendings
				s_sig.set_stop_requested (True)
				drive.stop

				if tm.euclidean_distance (goal_point, robot_point) < 0.02 then
					m_sig.set_is_goal_reached (True)

					debug
						io.put_string ("Current state: STOP - GOAL REACHED%N")
					end
				end
			end
		end

	stop_when_goal_unreachable (m_sig: separate MOVING_TO_GOAL_SIGNALER; o_sig: separate ODOMETRY_SIGNALER; s_sig: separate STOP_SIGNALER;
								drive: separate DIFFERENTIAL_DRIVE)
			-- Stop if goal reached or goal is unreachable (TODO).
		require
			(o_sig.is_moving and
			m_sig.is_wall_first_detected) or s_sig.is_stop_requested
		local
			goal_point, robot_point: POINT_MSG -- start_wall_following_point: POINT_MSG
		do
			if s_sig.is_stop_requested then
				drive.stop
			else
				create goal_point.make_with_values (goal_x, goal_y, 0.0)
				create robot_point.make_with_values (o_sig.x, o_sig.y, 0.0)
			--	create start_wall_following_point.make_with_values (startpoint_wall_following_x, startpoint_wall_following_y, 0.0) --------------- TODO: startpoint_wall_follwing_x and _y

				m_sig.clear_all_pendings
				s_sig.set_stop_requested (True)
				drive.stop

				if tm.euclidean_distance (start_wall_following_point(m_sig, o_sig), robot_point) < 0.1 then
					m_sig.set_is_goal_unreachable (True)

					debug
						io.put_string ("Current state: GOAL UNREACHABLE%N")
					end
				end
			end
		end

feature

	tm: TRIGONOMETRY_MATH
	ec: ERROR_CALCULATIONS
	rsc: RELATIVE_SPACE_CALCULATIONS
	pid_controller: PID_CONTROLLER
	goal_x, goal_y: REAL_64

end
