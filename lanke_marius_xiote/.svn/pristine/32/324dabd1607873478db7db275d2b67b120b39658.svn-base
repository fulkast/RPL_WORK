note
	description: "Different controllers for different moving_to_goal states."
	author: "Xiaote Zhu"

class
	MOVING_TO_GOAL_CONTROLLER

inherit
	CANCELLABLE_CONTROL_LOOP
	RELATIVE_SPACE_CALCULATIONS

create
	make

feature {NONE} -- Initialization

	make (s_sig: separate STOP_SIGNALER; par:  separate BEHAVIOR_PARAMETERS)
			-- Create current and assign given attributes.
		local
			algorithm_name : STRING
			robot_file_name : STRING
		do
			stop_signaler := s_sig
			algorithm_name := create {STRING}.make_from_separate (par.algorithm_file_name)
			robot_file_name := create {STRING}.make_from_separate (par.robot_file_name)
			create algorithm_params.make
			create algorithm_parser
			create controller_params.make
			create controller_parser
			create robot_params.make
			create robot_parser

			algorithm_params := algorithm_parser.parse_file (algorithm_name, algorithm_params)
			controller_params := controller_parser.parse_file (algorithm_params.controller_file_name, controller_params)
			robot_params:= robot_parser.parse_file (robot_file_name, robot_params)

			create pid_controller.make(controller_params.k_p, controller_params.k_i, controller_params.k_d)
			create cur_goal_point.make_empty
		end

feature {MOVING_TO_GOAL_BEHAVIOR} -- Control	

	go (state_sig: separate STATE_SIGNALER; m_sig: separate MOVING_TO_GOAL_SIGNALER;
		o_sig: separate ODOMETRY_SIGNALER; s_sig: separate STOP_SIGNALER;
		drive: separate DIFFERENTIAL_DRIVE; path_planner: separate PATH_PLANNER)
			-- Move robot if goal not reached yet.
		require
			state_sig.is_go or s_sig.is_stop_requested
		local
			vtheta, heading_error: REAL_64
			robot_point: POINT_MSG
			point_pub: POINT_MSG_PUBLISHER
		do
			create robot_point.make_with_values (o_sig.x, o_sig.y, o_sig.z)

			separate o_sig as odom do
			odom.update_odometry (create{ODOMETRY_MSG}.make_with_values
			(create{HEADER_MSG}.make_now ("/odometry_link"),
			"/base_link",
			create{POSE_WITH_COVARIANCE_MSG}.make_with_values
			(create{POSE_MSG}.make_with_values
			(create{POINT_MSG}.make_with_values (1, 1, 1),
			create{QUATERNION_MSG}.make_empty), create{ARRAY[REAL_64]}.make_filled (0.0, 1, 36)),
			create{TWIST_WITH_COVARIANCE_MSG}.make_empty))
			io.putstring (odom.x.out + " We at this x %N")
			end

			if s_sig.is_stop_requested then
				drive.stop

			else
				if not m_sig.is_path_planned then
					-- Don't execute when path alread parsed.
					path_planner.set_start_node_with_odometry (o_sig.x, o_sig.y, o_sig.z)
					path_planner.search_path
					m_sig.set_is_path_planned (True)
				end

				if m_sig.need_to_reset_cur_goal then
					-- Move cursor to clostest position in array.
					path_planner.jump_to_next_closest_goal (robot_point)
					m_sig.set_need_to_reset_cur_goal (False)
				end

				create cur_goal_point.make_from_separate (path_planner.get_cur_goal)

				if euclidean_distance (cur_goal_point, robot_point) < algorithm_params.move_to_next_goal_threshold then
					-- If cur_goal_point is within threshold, move cursor to next position planned path.
					path_planner.move_to_next_goal
					create cur_goal_point.make_from_separate (path_planner.get_cur_goal)
					pid_controller.reset
				end

				debug ("PUB_CUR_GOAL_POINT")
					-- Publish cur_goal_point.
					create point_pub.make_with_attributes ("cur_goal")
					point_pub.update_msg (cur_goal_point)
					point_pub.publish
				end

				-- Calculate angular velocity.
				heading_error := get_heading_error (o_sig.x, o_sig.y, o_sig.theta, cur_goal_point.x, cur_goal_point.y)
				vtheta := pid_controller.get_control_output (heading_error, o_sig.timestamp)

				state_sig.set_is_go
				drive.set_velocity (controller_params.vx, vtheta)
			end

			debug ("STATE")
				io.put_string ("Current state: GO%N")
			end
		end

	follow_wall (state_sig: separate STATE_SIGNALER; m_sig: separate MOVING_TO_GOAL_SIGNALER;
					o_sig: separate ODOMETRY_SIGNALER; s_sig: separate STOP_SIGNALER;
					drive: separate DIFFERENTIAL_DRIVE; r_sens: separate THYMIO_RANGE_GROUP;
					r_sens_wrapper: separate THYMIO_RANGE_GROUP_WRAPPER)
				-- Turn and follow the boundary of the obstacle being detected.
		require
			(state_sig.is_go and
				r_sens.is_obstacle) or
				state_sig.is_wall_following or s_sig.is_stop_requested
		local
			vtheta: REAL_64
		do
			m_sig.set_timestamp_obstacle_last_seen (r_sens.is_obstacle, o_sig.timestamp)     																														--

			if s_sig.is_stop_requested then
				drive.stop
			else
				if not m_sig.is_wall_following_start_set then
					-- Set wall_following_start_point and wall_following_start_theta
					-- when enter into wall following state the first time.
					set_wall_following_start_point (m_sig, o_sig, r_sens, r_sens_wrapper, algorithm_params.desired_wall_distance)
					m_sig.set_wall_following_start_theta (o_sig.theta)
					m_sig.set_is_wall_following_start_set (True)
				end

				vtheta := r_sens_wrapper.follow_wall_orientation (r_sens, algorithm_params.desired_wall_distance, o_sig.timestamp, m_sig.timestamp_obstacle_last_seen, algorithm_params.vx)

				state_sig.set_is_wall_following
				drive.set_velocity (algorithm_params.vx, vtheta)

				debug ("STATE")
					io.put_string ("Current state: FOLLOW WALL%N")
				end
			end
		end

	look_for_vleave (state_sig: separate STATE_SIGNALER; m_sig: separate MOVING_TO_GOAL_SIGNALER;
						o_sig: separate ODOMETRY_SIGNALER; s_sig: separate STOP_SIGNALER;
						r_sens: separate THYMIO_RANGE_GROUP; r_sens_wrapper: separate THYMIO_RANGE_GROUP_WRAPPER)
				-- Look for v_leave when in wall_following state
		require
			state_sig.is_wall_following and
			(m_sig.wall_following_start_theta - o_sig.theta).abs > algorithm_params.angle_looped_around_threshold and
			not s_sig.is_stop_requested
		local
			goal_point, robot_point, sensor_max_range_rel_point, sensor_max_range_abs_point: POINT_MSG
			vleave_point: separate POINT_MSG
			cur_distance, vleave_d_min, sensor_max_range_d_min: REAL_64
			i: INTEGER
			point_pub : POINT_MSG_PUBLISHER
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
				i > robot_params.number_of_front_sensors
			loop
				-- Find the sensor whose max range is reachable and
				-- whose max range's distance to goal is less than d_min.
				if r_sens.is_enough_space_for_moving_to_the_max_range (i) then
					 create sensor_max_range_rel_point.make_from_separate (r_sens_wrapper.get_relative_coordinates_with_sensor (r_sens.sensors[i].max_range, i))
					 sensor_max_range_abs_point := convert_relative_coordinates_to_absolute_coordinates (robot_point,
					 															sensor_max_range_rel_point,
					 															o_sig.theta)
					 sensor_max_range_d_min := euclidean_distance (goal_point,
					 												sensor_max_range_abs_point)

					 if (sensor_max_range_d_min < vleave_d_min) and
					 	(sensor_max_range_d_min < m_sig.d_min) then

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

				debug ("PUB_LOOK_FOR_V_LEAVE")
					create point_pub.make_with_attributes ("Vleave_Point")
					point_pub.set_color (create{COLOR_RGBA_MSG}.make_black)
					point_pub.set_duration (10000)

					point_pub.update_msg (create{POINT_MSG}.make_from_separate (vleave_point))
					point_pub.publish
				end
			end

			debug ("STATE")
				io.put_string ("Current state: LOOK FOR VLEAVE%N")
			end
		end

	transit_to_vleave (state_sig: separate STATE_SIGNALER; m_sig: separate MOVING_TO_GOAL_SIGNALER;
						o_sig: separate ODOMETRY_SIGNALER; s_sig: separate STOP_SIGNALER;
						drive: separate DIFFERENTIAL_DRIVE)
			-- Transit to v_leave if found
		require
			(m_sig.is_v_leave_found or state_sig.is_transiting) or s_sig.is_stop_requested
		local
			heading_error, vtheta: REAL_64
			vleave, robot_point: POINT_MSG
			vleave_pub : POINT_MSG_PUBLISHER
		do
			create vleave.make_from_separate (m_sig.v_leave)
			create robot_point.make_with_values (o_sig.x, o_sig.y, o_sig.z)

			if s_sig.is_stop_requested then
				drive.stop

				debug ("PUBLISH_V_LEAVE")
					create vleave_pub.make_with_attributes ("vleave_current")
					vleave_pub.set_color (create {COLOR_RGBA_MSG}.make_black)
					vleave_pub.set_duration (1000)
					vleave_pub.update_msg (create {POINT_MSG}.make_from_separate (vleave))
					vleave_pub.publish
				end

			elseif euclidean_distance (vleave, robot_point) < algorithm_params.vleave_reached_distance_threshold then
				-- Exit transition state when vleave point reached.
				state_sig.set_is_go
				m_sig.set_is_v_leave_found (False)
				m_sig.set_need_to_reset_cur_goal (True)

			else
				heading_error := get_heading_error (o_sig.x, o_sig.y, o_sig.theta, vleave.x, vleave.y)
				vtheta := pid_controller.get_control_output (heading_error, o_sig.timestamp)

				state_sig.set_is_transiting
				drive.set_velocity (controller_params.vx, vtheta)
			end

			debug ("STATE")
				io.put_string ("Current state: TRANSIT%N")
			end
		end

	stop_when_goal_reached (state_sig: separate STATE_SIGNALER; m_sig: separate MOVING_TO_GOAL_SIGNALER;
							 o_sig: separate ODOMETRY_SIGNALER; s_sig: separate STOP_SIGNALER;
						   	 drive: separate DIFFERENTIAL_DRIVE)
			-- Stop if goal reached.
		require
			o_sig.is_moving
		local
			robot_point, goal_point: POINT_MSG
		do
			create robot_point.make_with_values (o_sig.x, o_sig.y, 0.0)
			create goal_point.make_from_separate (m_sig.goal_point)

			if euclidean_distance (goal_point, robot_point) < algorithm_params.goal_reached_distance_threshold then
				-- Check if distance to goal is less than tolerance
				state_sig.set_is_goal_reached
				s_sig.set_stop_requested (True)
				drive.stop

				debug ("STATE")
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

			if ((m_sig.wall_following_start_theta - o_sig.theta).abs > algorithm_params.angle_looped_around_threshold_unreachable and
				-- Check if robot has looped a cycle.
				euclidean_distance (robot_point, wall_following_start_point) < algorithm_params.goal_unreachable_distance_threshold) then
				-- Check if robot is close enough to initial obstacle point.
				state_sig.set_is_goal_unreachable
				s_sig.set_stop_requested (True)
				drive.stop

				debug ("STATE")
					io.put_string ("Current state: GOAL UNREACHABLE%N")
				end
			end
		end

feature {NONE}

	set_wall_following_start_point (m_sig: separate MOVING_TO_GOAL_SIGNALER; o_sig: separate ODOMETRY_SIGNALER; r_sens: separate THYMIO_RANGE_GROUP;
										r_sens_wrapper: separate THYMIO_RANGE_GROUP_WRAPPER; desired_wall_distance: REAL_64)
			-- Set the start point of the wall following state
		local
			closest_sensor_index : INTEGER
			robot_point, abs_start_point, relative_start_point : POINT_MSG
		do
			create robot_point.make_with_values (o_sig.x, o_sig.y, 0)
			closest_sensor_index := r_sens.get_closest_sensor_index
			create relative_start_point.make_with_values (
						(r_sens_wrapper.sensor_distances[closest_sensor_index] +
						r_sens.sensors[closest_sensor_index].range - desired_wall_distance)
						/ cosine (r_sens_wrapper.sensor_angles[closest_sensor_index]), 0.0, 0.0)
			abs_start_point := convert_relative_coordinates_to_absolute_coordinates (robot_point,
													relative_start_point, o_sig.theta)
			-- Calculate first wall point in global coordinates using sensor return values
			-- and coordinate transformation functions
			m_sig.set_wall_following_start_point (abs_start_point)
		end

	get_heading_error (cur_x, cur_y, cur_theta, goal_x, goal_y: REAL_64): REAL_64
		-- Calculating heading error
		local
			x_diff, y_diff: REAL_64
			x_heading, y_heading: REAL_64
			diff_norm, theta_out, direction : REAL_64
		do
			x_diff := goal_x - cur_x
			y_diff := goal_y - cur_y
			diff_norm := sqrt(x_diff*x_diff+y_diff*y_diff)
			x_diff := x_diff/diff_norm
			y_diff := y_diff/diff_norm

			x_heading := cosine(cur_theta)
			y_heading := sine(cur_theta)
			direction := -y_diff*x_heading+x_diff*y_heading

			theta_out := (x_diff*x_heading+y_diff*y_heading)
			Result := arc_cosine(theta_out)*-direction/(direction.abs)
		end

feature

	pid_controller: PID_CONTROLLER
	controller_params: CONTROLLER_PARAMETERS
	controller_parser: PARSER[CONTROLLER_PARAMETERS]
	robot_params:ROBOT_PARAMETERS
	robot_parser: PARSER[ROBOT_PARAMETERS]
	algorithm_params: TANGENT_BUG_PARAMETERS
	algorithm_parser: PARSER[TANGENT_BUG_PARAMETERS]
	cur_goal_point: POINT_MSG

end -- class
