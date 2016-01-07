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
				heading_error := ec.get_heading_error (o_sig.x, o_sig.y, o_sig.theta, goal_x, goal_y)

				-- USED IN CALIBRATION OF BACKWARDS MOTION
				--vtheta := pid_controller.get_control_output ((3.1415 - heading_error.abs)*-heading_error/heading_error.abs, o_sig.timestamp)
				vtheta := pid_controller.get_control_output (heading_error, o_sig.timestamp)
				vx := 0.04 --0.025 - (vtheta.abs / 10)

				debug
					io.put_string ("odom_x: " + o_sig.x.out
									+ "odom_y: " + o_sig.y.out
									+ "%N")
				end

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
			not m_sig.is_goal_unreachable and
			(r_sens.is_obstacle or m_sig.is_wall_following) and
			not m_sig.is_transiting) or s_sig.is_stop_requested
		local
			wall_following_start_point, relative_wall_following_start_point, goal_point, robot_point: POINT_MSG
			vtheta: REAL_64
			vx: REAL_64
			desired_wall_distance: REAL_64
			closest_sensor_index: INTEGER
		do
			create robot_point.make_with_values (o_sig.x, o_sig.y, 0)
			create wall_following_start_point.make_with_values (m_sig.wall_following_start_point.x, m_sig.wall_following_start_point.y, 0.0)
			create goal_point.make_with_values (goal_x, goal_y, 0.0)
			desired_wall_distance := 0.10

			if(m_sig.previous_time_stamp = 0) then
				m_sig.set_previous_time_stamp (o_sig.timestamp-0.02)		-- To initialize the previous timestamp variable
			end

			m_sig.set_angle_looped_around_obstacle (m_sig.angle_looped_around_obstacle + o_sig.vtheta *(o_sig.timestamp - m_sig.previous_time_stamp))
			m_sig.set_previous_time_stamp (o_sig.timestamp)

			if s_sig.is_stop_requested then
				drive.stop
			else
				if not m_sig.is_wall_following_start_point_set then
					closest_sensor_index := r_sens.get_closest_sensor_index
					create relative_wall_following_start_point.make_with_values (
								(rsc.sensor_distances[closest_sensor_index]+ r_sens.sensors[closest_sensor_index].range -desired_wall_distance)
									/tm.cosine (rsc.sensor_angles[closest_sensor_index]), 0.0, 0.0)
					wall_following_start_point := rsc.convert_relative_coordinates_to_absolute_coordinates (robot_point,
															relative_wall_following_start_point, o_sig.theta)
					m_sig.set_wall_following_start_point (wall_following_start_point)
					debug
						io.put_double (rsc.sensor_distances[closest_sensor_index])
						io.put_string ("wall_following_start_point_relative: " + relative_wall_following_start_point.out)
						io.put_string ("absolute_point: " + wall_following_start_point.out)
					end
					m_sig.set_is_wall_following_start_point_set (True)
				end

				vtheta := r_sens.follow_wall_orientation (desired_wall_distance)

				if r_sens.is_obstacle_vanished then
--					vtheta := vtheta * (r_sens.time_steps_obstacle_vanished-2).power(2.5)
					vtheta := vtheta * 0.5 * (r_sens.time_steps_obstacle_vanished-1.25).power(1)
				end
				vx := 0.04

				m_sig.clear_all_pendings
				m_sig.set_is_wall_following (True)
				drive.set_velocity (vx, vtheta)

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
			m_sig.angle_looped_around_obstacle.abs > 1.5 and
			r_sens.is_obstacle and
			not m_sig.is_goal_unreachable and
			not m_sig.is_goal_reached)
		local
			goal_point, robot_point, sensor_max_range_rel_point, sensor_max_range_abs_point: POINT_MSG
			vleave_point: separate POINT_MSG
			cur_distance: REAL_64
			vleave_d_min, sensor_max_range_d_min: REAL_64
			vleave_sensor_index, i: INTEGER
		do
			vleave_d_min := 2^2000

			create goal_point.make_with_values (goal_x, goal_y, 0.0)
			create robot_point.make_with_values (o_sig.x, o_sig.y, 0.0)
			create vleave_point.make_empty
			cur_distance := tm.euclidean_distance (goal_point, robot_point)

			if cur_distance < m_sig.d_min then
				m_sig.set_d_min (cur_distance)
			end

			from
				i := r_sens.sensors.lower
			until
				i > r_sens.sensors.upper - 2
			loop
				if not r_sens.sensors[i].is_valid_range and (i = 1 or not r_sens.sensors[i - 1].is_valid_range)
					and (i = 5 or not r_sens.sensors[i + 1].is_valid_range) then
					 sensor_max_range_rel_point := rsc.get_relative_coordinates_with_sensor (r_sens.sensors[i].max_range, i)
					 sensor_max_range_abs_point := rsc.convert_relative_coordinates_to_absolute_coordinates (robot_point,
					 									sensor_max_range_rel_point, o_sig.theta)
					 sensor_max_range_d_min := tm.euclidean_distance (goal_point, sensor_max_range_abs_point)
					 debug
					 	io.put_string ("m_sig_d_min: " + m_sig.d_min.out + " sensor_max: " + sensor_max_range_d_min.out)
					 end
					 if sensor_max_range_d_min < vleave_d_min and sensor_max_range_d_min < m_sig.d_min then

					 	vleave_d_min := sensor_max_range_d_min
					 	vleave_sensor_index := i
					 	vleave_point := sensor_max_range_abs_point
					 end
				end
				i := i + 1
			end

			if not vleave_d_min.is_positive_infinity and vleave_sensor_index /= 3 then
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
			heading_error: REAL_64
			vtheta: REAL_64
			vx: REAL_64
			vleave, robot_point: POINT_MSG
		do
			create vleave.make_from_separate (m_sig.v_leave)
			create robot_point.make_with_values (o_sig.x, o_sig.y, o_sig.z)

			if s_sig.is_stop_requested then
				drive.stop
				debug
					io.put_string ("stop_sig: " + s_sig.is_stop_requested.out + "%N")
				end

			elseif tm.euclidean_distance (vleave, robot_point) < 0.02 then
				m_sig.clear_all_pendings
				m_sig.set_is_v_leave_found (False)
				io.put_boolean (m_sig.is_v_leave_found)
				io.put_boolean (m_sig.is_transiting)
				io.put_string ("wierd")

			else
				heading_error := ec.get_heading_error (o_sig.x, o_sig.y, o_sig.theta, vleave.x, vleave.y)

				vtheta := pid_controller.get_control_output (heading_error, o_sig.timestamp)
				vx := 0.04

				m_sig.clear_all_pendings
				m_sig.set_is_transiting (True)
				drive.set_velocity (vx, vtheta)
			end

			debug
				io.put_string ("Current state: TRANSITION%N")
			end
			debug
				io.put_string ("vleave_point.x: " + m_sig.v_leave.x.out
								+ " vleave_point.y: " + m_sig.v_leave.y.out
								+ "%N")
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
			goal_point, robot_point: POINT_MSG
		do
			if s_sig.is_stop_requested then
				drive.stop
			else
				create goal_point.make_with_values (goal_x, goal_y, 0.0)
				create robot_point.make_with_values (o_sig.x, o_sig.y, 0.0)

				if tm.euclidean_distance (goal_point, robot_point) < 0.1 then
					m_sig.clear_all_pendings
					m_sig.set_is_goal_reached (True)
--					s_sig.set_stop_requested (True)
					drive.stop

					debug
						io.put_string ("Current state: STOP - GOAL REACHED%N")
					end
				end
			end
		end

	stop_when_goal_unreachable (m_sig: separate MOVING_TO_GOAL_SIGNALER; o_sig: separate ODOMETRY_SIGNALER; s_sig: separate STOP_SIGNALER;
								drive: separate DIFFERENTIAL_DRIVE)
			-- Stop if goal unreachable.
		require
			o_sig.is_moving or s_sig.is_stop_requested
		local
			wall_following_start_point_, goal_point_, robot_point_: POINT_MSG
		do
			if s_sig.is_stop_requested then
				drive.stop
			else
				create goal_point_.make_with_values (goal_x, goal_y, 0.0)
				create robot_point_.make_with_values (o_sig.x, o_sig.y, 0.0)
				create wall_following_start_point_.make_from_separate (m_sig.wall_following_start_point)

				if (m_sig.angle_looped_around_obstacle.abs > 3.14 and
					tm.euclidean_distance (robot_point_, wall_following_start_point_) < 0.15) then
					m_sig.clear_all_pendings
					s_sig.set_stop_requested (True)
					m_sig.set_is_goal_unreachable (True)
					drive.stop

					debug
						io.put_string ("Current state: GOAL UNREACHABLE%N")
					end
				end
				debug
					io.put_string ("%Nwall_foll_point: " + wall_following_start_point_.out
									+ " robot_point " + robot_point_.out
									+ "%Neuk_dist: " + tm.euclidean_distance (robot_point_, wall_following_start_point_).out
									+ " angle_loo_around: " + m_sig.angle_looped_around_obstacle.out
									+ "%N")
				end
			end
		end

feature

	tm: TRIGONOMETRY_MATH
	ec: ERROR_CALCULATIONS
	rsc: RELATIVE_SPACE_CALCULATIONS
	pid_controller: PID_CONTROLLER
	goal_x, goal_y: REAL_64

end -- class MOVING_TO_GOAL_CONTROLLER
