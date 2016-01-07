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

	go (state_sig: separate STATE_SIGNALER; m_sig: separate MOVING_TO_GOAL_SIGNALER;
		o_sig: separate ODOMETRY_SIGNALER; s_sig: separate STOP_SIGNALER;
		drive: separate DIFFERENTIAL_DRIVE; path_planner: separate PATH_PLANNER;
		cur_goal_pub: separate POINT_MSG_PUBLISHER; algorithm_params: separate TANGENT_BUG_PARAMETERS)
			-- Move robot if goal not reached yet.
		require
			state_sig.is_go or s_sig.is_stop_requested
		local
			vtheta, heading_error: REAL_64
			cur_goal_point, robot_point: POINT_MSG
		do
			create robot_point.make_with_values (o_sig.x + path_planner.get_start.x,
												 o_sig.y + path_planner.get_start.y,
												 o_sig.z + path_planner.get_start.z)

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
				heading_error := get_heading_error (o_sig.x + path_planner.get_start.x,
													o_sig.y + path_planner.get_start.y,
													o_sig.theta,
													cur_goal_point.x,
													cur_goal_point.y)
				vtheta := pid_controller.get_control_output (heading_error, o_sig.timestamp)

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
					r_sens_wrapper: separate RANGE_GROUP_WRAPPER; algorithm_params: separate TANGENT_BUG_PARAMETERS;)
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
				vtheta := r_sens_wrapper.follow_wall_orientation (r_sens, algorithm_params.desired_wall_distance, o_sig.timestamp, m_sig.timestamp_obstacle_last_seen, algorithm_params.follow_wall_vx)

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
						search_vleave_pub: separate POINT_MSG_PUBLISHER; path_planner: separate PATH_PLANNER)
				-- Look for v_leave when in wall_following state
		require
			state_sig.is_wall_following and
			not s_sig.is_stop_requested
		local
			goal_point, robot_point, sensor_max_range_rel_point, sensor_max_range_abs_point: POINT_MSG
			vleave_point: separate POINT_MSG
			cur_distance, vleave_d_min, sensor_max_range_d_min: REAL_64

			i: INTEGER

		do
			vleave_d_min := {REAL_64}.positive_infinity
			create goal_point.make_from_separate (path_planner.get_final_goal)
			create robot_point.make_with_values (o_sig.x + path_planner.get_start.x,
												 o_sig.y + path_planner.get_start.y,
												 o_sig.z + path_planner.get_start.z)
			create vleave_point.make_empty

			cur_distance := euclidean_distance (goal_point, robot_point)

--			if cur_distance < m_sig.d_min then
--				-- Update d_min.
--				m_sig.set_d_min (cur_distance)
--			end

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
					 															o_sig.theta)
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
				search_vleave_pub.set_duration (10000)

				search_vleave_pub.update_msg (vleave_point)
				search_vleave_pub.publish
			end

			debug ("STATE")
				io.put_string ("Current state: LOOK FOR VLEAVE%N")
			end
		end

	transit_to_vleave (state_sig: separate STATE_SIGNALER; m_sig: separate MOVING_TO_GOAL_SIGNALER;
						o_sig: separate ODOMETRY_SIGNALER; s_sig: separate STOP_SIGNALER;
						drive: separate DIFFERENTIAL_DRIVE; vleave_pub: separate POINT_MSG_PUBLISHER;
						path_planner: separate PATH_PLANNER; algorithm_params: separate TANGENT_BUG_PARAMETERS)
			-- Transit to v_leave if found
		require
			(m_sig.is_v_leave_found or state_sig.is_transiting) or s_sig.is_stop_requested
		local
			heading_error, vtheta: REAL_64
			vleave, robot_point: POINT_MSG

		do
			create vleave.make_from_separate (m_sig.v_leave)
			create robot_point.make_with_values (o_sig.x + path_planner.get_start.x,
												 o_sig.y + path_planner.get_start.y,
												 o_sig.z + path_planner.get_start.z)

			if s_sig.is_stop_requested then
				drive.stop

			elseif euclidean_distance (vleave, robot_point) < algorithm_params.vleave_reached_distance_threshold then
				-- Exit transition state when vleave point reached.
				state_sig.set_is_go
				path_planner.move_to_next_goal
				m_sig.set_is_v_leave_found (False)
				m_sig.set_need_to_reset_cur_goal (True)

			else
				heading_error := get_heading_error (o_sig.x + path_planner.get_start.x,
													o_sig.y + path_planner.get_start.y,
													o_sig.theta, vleave.x, vleave.y)

				vtheta := pid_controller_vleave.get_control_output (heading_error, o_sig.timestamp)

				state_sig.set_is_transiting
				drive.set_velocity (algorithm_params.transit_vx, vtheta)
			end

			debug ("PUBLISH_V_LEAVE")
				-- Publishers for debug use
				vleave_pub.set_color (create {COLOR_RGBA_MSG}.make_blue)
				vleave_pub.set_duration (1000)
				vleave_pub.update_msg (vleave)
				vleave_pub.publish
				io.putstring("Vleave x: " + vleave.x.out +  "Vleave y: " + vleave.y.out + "Vleave z: " + vleave.z.out + "%N"
				+ "Current x: " +(o_sig.x + path_planner.get_start.x).out +"Current y: " + (o_sig.y + path_planner.get_start.y).out +"Current theta: " + o_sig.theta.out + "%N"
				+ "Driving at vx: " + algorithm_params.transit_vx.out + "  vtheta: " +vtheta.out + "%N"
				+ "Heading error: " + heading_error.out + "%N"
				+ "PID time step diff: " + (pid_controller.cur_time-pid_controller.prev_time).out + "%N"
				+ "PID integral error: " + pid_controller.acc_error.out  + "%N"
				)
			end

			debug ("STATE")
				io.put_string ("Current state: TRANSIT%N")
			end
		end

	wait_when_intermediate_goal_reached ()
			-- Stop if intermediate goal reached.
		require
		do

		end

	stop_when_goal_reached (state_sig: separate STATE_SIGNALER; o_sig: separate ODOMETRY_SIGNALER;
								s_sig: separate STOP_SIGNALER; drive: separate DIFFERENTIAL_DRIVE;
								algorithm_params: separate TANGENT_BUG_PARAMETERS; path_planner: separate PATH_PLANNER)
			-- Stop if goal reached.
		require
			o_sig.is_moving or s_sig.is_stop_requested
		local
			robot_point, goal_point: POINT_MSG
		do
			create robot_point.make_with_values (o_sig.x + path_planner.get_start.x,
												 o_sig.y + path_planner.get_start.y,
												 o_sig.z + path_planner.get_start.z)
			create goal_point.make_from_separate (path_planner.get_final_goal)

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

feature

	pid_controller: PID_CONTROLLER
		-- Pid controller.

	pid_controller_vleave: PID_CONTROLLER
		-- Pid controller.

--	cont_params: separate CONTROLLER_PARAMETERS
--		-- Controller parameters

end -- class
