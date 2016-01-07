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

	make (s_sig: separate STOP_SIGNALER; controller_params: separate CONTROLLER_PARAMETERS)
			-- Create current and assign given attributes.
		local
			algorithm_name: STRING
			robot_file_name: STRING
		do
			stop_signaler := s_sig
			create pid_controller.make (controller_params.k_p_go,
										controller_params.k_i_go,
										controller_params.k_d_go)
			create pid_controller_vleave.make (controller_params.k_p_vleave,
											   controller_params.k_i_vleave,
											   controller_params.k_d_vleave)

		end

feature {MOVING_TO_GOAL_BEHAVIOR} -- Control

	localize (state_sig: separate STATE_SIGNALER; m_sig: separate MOVING_TO_GOAL_SIGNALER;
				o_sig: separate ODOMETRY_SIGNALER; s_sig: separate STOP_SIGNALER;
				drive: separate DIFFERENTIAL_DRIVE; path_planner: separate PATH_PLANNER;
				algorithm_params: separate TANGENT_BUG_PARAMETERS; robot_loc_state_pub: separate ROS_PUBLISHER [BOOL_MSG];
				loc_state_signaler: separate BOOL_SIGNALER; loc_result_signaler: separate POSE_2D_SIGNALER)
			-- Move rebot for localization process.
		require
			state_sig.is_localizing or s_sig.is_stop_requested
		do
			if s_sig.is_stop_requested then
				drive.stop
			elseif loc_state_signaler.data.data then
				-- Already localized.
				io.putstring ("Thinks it is localized")
				m_sig.set_localized_time_absolute_pose (loc_result_signaler.data)
				m_sig.set_localized_time_relative_pose (create {POSE_2D_MSG}.make_with_values (o_sig.x, o_sig.y, o_sig.theta))
				robot_loc_state_pub.publish (create {BOOL_MSG}.make_with_values(False))
				state_sig.set_is_go
			else
				-- Still localizing.
				robot_loc_state_pub.publish (create {BOOL_MSG}.make_with_values(True))
				drive.set_velocity (0.0, algorithm_params.localize_vtheta)
			end
		end

	go (state_sig: separate STATE_SIGNALER; m_sig: separate MOVING_TO_GOAL_SIGNALER;
		o_sig: separate ODOMETRY_SIGNALER; s_sig: separate STOP_SIGNALER;
		drive: separate DIFFERENTIAL_DRIVE; path_planner: separate PATH_PLANNER;
		cur_goal_pub: separate POINT_MSG_TO_MARKER_MSG; algorithm_params: separate TANGENT_BUG_PARAMETERS)
			-- Move robot if goal not reached yet.
		require
			state_sig.is_go or s_sig.is_stop_requested
		local
			vtheta, heading_error: REAL_64
			cur_goal_point, robot_point: POINT_MSG
			robot_orientation: REAL_64
		do
			create robot_point.make_from_separate (m_sig.convert_robot_frame_coord_to_absolute_coord (o_sig.x, o_sig.y))
			robot_orientation := m_sig.convert_robot_frame_orientation_to_absolute_orientation (o_sig.theta)

			if s_sig.is_stop_requested then
				drive.stop

			else
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

					cur_goal_pub.update_msg (cur_goal_point)
					cur_goal_pub.publish
				end

				-- Calculate angular velocity.
				heading_error := get_heading_error (robot_point.x,
													robot_point.y,
													robot_orientation,
													cur_goal_point.x,
													cur_goal_point.y)
				vtheta := pid_controller.get_control_output (heading_error,
															 o_sig.timestamp)

				state_sig.set_is_go
				drive.set_velocity (algorithm_params.go_vx, vtheta)
			end

			debug ("STATE")
				io.put_string ("Current state: GO%N")
			end
		end

	follow_wall (state_sig: separate STATE_SIGNALER; m_sig: separate MOVING_TO_GOAL_SIGNALER;
					o_sig: separate ODOMETRY_SIGNALER; s_sig: separate STOP_SIGNALER;
					drive: separate DIFFERENTIAL_DRIVE; r_sens: separate RANGE_GROUP;
					r_sens_wrapper: separate RANGE_GROUP_WRAPPER; algorithm_params: separate TANGENT_BUG_PARAMETERS)
				-- Turn and follow the boundary of the obstacle being detected.
		require
			((state_sig.is_go) and
			r_sens.is_obstacle) or
			state_sig.is_wall_following or s_sig.is_stop_requested
		local
			vtheta: REAL_64
		do
			m_sig.set_timestamp_obstacle_last_seen (r_sens.is_obstacle, o_sig.timestamp)

			if s_sig.is_stop_requested then
				drive.stop
			else
				vtheta := r_sens_wrapper.follow_wall_orientation (r_sens,
																  algorithm_params.desired_wall_distance,
																  o_sig.timestamp,
																  m_sig.timestamp_obstacle_last_seen,
																  algorithm_params.follow_wall_vx)

				state_sig.set_is_wall_following
				drive.set_velocity (algorithm_params.follow_wall_vx, vtheta)

				debug ("STATE")
					io.put_string ("Current state: FOLLOW WALL%N")
				end
			end
		end

	look_for_vleave (state_sig: separate STATE_SIGNALER; m_sig: separate MOVING_TO_GOAL_SIGNALER;
						o_sig: separate ODOMETRY_SIGNALER; s_sig: separate STOP_SIGNALER;
						r_sens: separate RANGE_GROUP; r_sens_wrapper: separate RANGE_GROUP_WRAPPER;
						search_vleave_pub: separate POINT_MSG_TO_MARKER_MSG; path_planner: separate PATH_PLANNER;
						algorithm_params: separate TANGENT_BUG_PARAMETERS)
				-- Look for v_leave when in wall_following state
		require
			state_sig.is_wall_following and
			not s_sig.is_stop_requested
		local
			goal_point, robot_point, sensor_max_range_rel_point, sensor_max_range_abs_point: POINT_MSG
			robot_orientation: REAL_64
			vleave_point: separate POINT_MSG
			cur_distance, vleave_d_min, sensor_max_range_d_min: REAL_64

			i: INTEGER

		do
			vleave_d_min := {REAL_64}.positive_infinity
			create goal_point.make_from_separate (path_planner.get_final_goal)
			create robot_point.make_from_separate (m_sig.convert_robot_frame_coord_to_absolute_coord (o_sig.x, o_sig.y))
			robot_orientation := m_sig.convert_robot_frame_orientation_to_absolute_orientation (o_sig.theta)
			create vleave_point.make_empty

			cur_distance := euclidean_distance (goal_point, robot_point)

			from
				i := r_sens.sensors.lower
			until
				i > r_sens_wrapper.number_of_front_sensors
			loop
				-- Find the sensor whose max range is reachable and
				-- whose max range's distance to goal is less than d_min.
				if r_sens.is_enough_space_for_moving_to_the_max_range (i) then
					 create sensor_max_range_rel_point.make_from_separate (r_sens_wrapper.get_relative_coordinates_with_sensor (r_sens.sensors[i].max_range, i))
					 sensor_max_range_abs_point := convert_relative_coordinates_to_absolute_coordinates (robot_point,
					 																					 sensor_max_range_rel_point,
					 																					 robot_orientation)
					 sensor_max_range_d_min := euclidean_distance (goal_point,
					 												sensor_max_range_abs_point)

					 if (sensor_max_range_d_min < vleave_d_min) and
					 	(sensor_max_range_d_min < m_sig.d_min) then
						m_sig.set_d_min (sensor_max_range_d_min)
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

			debug ("PUB_LOOK_FOR_V_LEAVE")
				-- The vleave point when searching

				search_vleave_pub.set_color (create{COLOR_RGBA_MSG}.make_black)
				search_vleave_pub.set_duration (algorithm_params.search_vleave_pub_duration)

				search_vleave_pub.update_msg (vleave_point)
				search_vleave_pub.publish
			end

			debug ("STATE")
				io.put_string ("Current state: LOOK FOR VLEAVE%N")
			end
		end

	transit_to_vleave (state_sig: separate STATE_SIGNALER; m_sig: separate MOVING_TO_GOAL_SIGNALER;
						o_sig: separate ODOMETRY_SIGNALER; s_sig: separate STOP_SIGNALER;
						drive: separate DIFFERENTIAL_DRIVE; vleave_pub: separate POINT_MSG_TO_MARKER_MSG;
						path_planner: separate PATH_PLANNER; algorithm_params: separate TANGENT_BUG_PARAMETERS)
			-- Transit to v_leave if found
		require
			(m_sig.is_v_leave_found or state_sig.is_transiting) or s_sig.is_stop_requested
		local
			heading_error, vtheta: REAL_64
			vleave, robot_point: POINT_MSG
			robot_orientation: REAL_64
		do
			create vleave.make_from_separate (m_sig.v_leave)
			create robot_point.make_from_separate (m_sig.convert_robot_frame_coord_to_absolute_coord (o_sig.x, o_sig.y))
			robot_orientation := m_sig.convert_robot_frame_orientation_to_absolute_orientation (o_sig.theta)

			if s_sig.is_stop_requested then
				drive.stop

			elseif euclidean_distance (vleave, robot_point) < algorithm_params.vleave_reached_distance_threshold then
				-- Exit transition state when vleave point reached.
				state_sig.set_is_go
				path_planner.move_to_next_goal
				m_sig.set_is_v_leave_found (False)
				m_sig.set_need_to_reset_cur_goal (True)

			else
				heading_error := get_heading_error (robot_point.x,
													robot_point.y,
													robot_orientation, vleave.x, vleave.y)
				vtheta := pid_controller_vleave.get_control_output (heading_error,
																    o_sig.timestamp)

				state_sig.set_is_transiting
				drive.set_velocity (algorithm_params.transit_vx, vtheta)
			end

			debug ("PUBLISH_V_LEAVE")
				-- Publishers for debug use
				vleave_pub.set_color (create {COLOR_RGBA_MSG}.make_blue)
				vleave_pub.set_duration (algorithm_params.vleave_pub_duration)
				vleave_pub.update_msg (vleave)
				vleave_pub.publish
			end

			debug ("STATE")
				io.put_string ("Current state: TRANSIT%N")
			end
		end

	wait_when_intermediate_goal_reached (state_sig: separate STATE_SIGNALER; m_sig: separate MOVING_TO_GOAL_SIGNALER;
											o_sig: separate ODOMETRY_SIGNALER; s_sig: separate STOP_SIGNALER;
											drive: separate DIFFERENTIAL_DRIVE; algorithm_params: separate TANGENT_BUG_PARAMETERS;
											path_planner: separate PATH_PLANNER; robot_state_pub: separate ROS_PUBLISHER [BOOL_MSG])
			-- Stop if intermediate goal reached.
		require
			(not state_sig.is_waiting and not state_sig.is_goal_reached) or s_sig.is_stop_requested
		local
			robot_point, wait_point: POINT_MSG
			robot_orientation: REAL_64
		do
			create robot_point.make_from_separate (m_sig.convert_robot_frame_coord_to_absolute_coord (o_sig.x, o_sig.y))
			create wait_point.make_from_separate (path_planner.get_cur_wait_point)

			if s_sig.is_stop_requested then
				drive.stop

			elseif euclidean_distance (wait_point, robot_point) < algorithm_params.wait_point_distance_threshold then
				-- Check if distance to wait point is less than tolerance
				state_sig.set_is_waiting

				drive.stop
				path_planner.move_to_next_wait_point
				robot_state_pub.publish (create {BOOL_MSG}.make_with_values(True))

				debug ("STATE")
					io.put_string ("Current state: WAIT%N")
				end
			end
		end

	continue_after_task_finished (state_sig: separate STATE_SIGNALER; s_sig:separate STOP_SIGNALER
									objrec_state_signaler: separate BOOL_SIGNALER; robot_state_pub: separate ROS_PUBLISHER [BOOL_MSG])
			-- Continue if task is finished at the wait point.
		require
			state_sig.is_waiting or s_sig.is_stop_requested
		do
			if objrec_state_signaler.data.data then
				-- When task finished, switch to go state.
				state_sig.set_is_go
				robot_state_pub.publish (create {BOOL_MSG}.make_with_values(False))
			end
		end

	stop_when_goal_reached (state_sig: separate STATE_SIGNALER; m_sig: separate MOVING_TO_GOAL_SIGNALER;
								o_sig: separate ODOMETRY_SIGNALER; s_sig: separate STOP_SIGNALER;
								drive: separate DIFFERENTIAL_DRIVE; algorithm_params: separate TANGENT_BUG_PARAMETERS;
								path_planner: separate PATH_PLANNER; robot_pose_pub: separate ROS_PUBLISHER [POSE_STAMPED_MSG])
			-- Stop if goal reached.
		require
			o_sig.is_moving or s_sig.is_stop_requested
		local
			robot_angle: REAL_64
			robot_point, goal_point: POINT_MSG
			robot_pose_msg: POSE_STAMPED_MSG
			robot_orientation_msg : QUATERNION_MSG
		do
			create robot_point.make_from_separate (m_sig.convert_robot_frame_coord_to_absolute_coord (o_sig.x, o_sig.y))
			create goal_point.make_from_separate (path_planner.get_final_goal)

			robot_angle := m_sig.convert_robot_frame_orientation_to_absolute_orientation (o_sig.theta)
			create robot_orientation_msg.make_with_values (0, 0, sine (robot_angle/2), cosine (robot_angle/2))
			create robot_pose_msg.make_with_values (create {HEADER_MSG}.make_now ({MAP_TOPICS}.odometry_frame), create {POSE_MSG}.make_with_values (robot_point, robot_orientation_msg))
			robot_pose_pub.publish (robot_pose_msg)
			if s_sig.is_stop_requested then
				drive.stop

			elseif euclidean_distance (goal_point, robot_point) < algorithm_params.goal_reached_distance_threshold then
				-- Check if distance to goal is less than tolerance
				state_sig.set_is_goal_reached
				s_sig.set_stop_requested (True)
				drive.stop

				debug ("STATE")
					io.put_string ("Current state: STOP - GOAL REACHED%N")
				end
			end
		end

feature {NONE}

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

			if (arc_cosine(theta_out)*-direction/(direction.abs)).is_nan then
				Result := arc_cosine(1.0)
				-- This handles the case when the error is exactly zero.
			else
				-- This is the case when the error is not zero
				Result := arc_cosine(theta_out)*-direction/(direction.abs)
			end
		end

feature {NONE}

	pid_controller: PID_CONTROLLER
		-- Pid controller.

	pid_controller_vleave: PID_CONTROLLER
		-- Pid controller.

end -- class
