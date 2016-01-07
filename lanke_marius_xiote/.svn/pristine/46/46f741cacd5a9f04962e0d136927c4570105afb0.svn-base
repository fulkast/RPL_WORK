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
			create ec
		end

feature {MOVING_TO_GOAL_BEHAVIOR} -- Control

	go (m_sig: separate MOVING_TO_GOAL_SIGNALER; o_sig: separate ODOMETRY_SIGNALER; s_sig: separate STOP_SIGNALER;
		drive: separate DIFFERENTIAL_DRIVE; r_sens: separate THYMIO_RANGE_GROUP)
			-- Move robot if goal not reached yet.
		require
			(not m_sig.is_goal_reached and
			not r_sens.is_obstacle) or s_sig.is_stop_requested
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
				vx := 0.025 - (vtheta.abs / 10)

				m_sig.clear_all_pendings
				m_sig.set_is_go_pending (True)
				drive.set_velocity (vx, vtheta)

				debug
					io.put_string ("Current state: GO%N")
				end
			end
		end

	wall_following (m_sig: separate MOVING_TO_GOAL_SIGNALER; o_sig: separate ODOMETRY_SIGNALER; s_sig: separate STOP_SIGNALER;
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
				vx := 0.02

				m_sig.clear_all_pendings
				m_sig.set_is_wall_following (True)
				drive.set_velocity (vx, vtheta)

				debug
					io.put_string ("Current state: WALL FOLLOWING%N")
				end
			end
		end

	change_features (m_sig: separate MOVING_TO_GOAL_SIGNALER; s_sig: separate STOP_SIGNALER; top_leds: separate THYMIO_TOP_LEDS)
			-- Change features including light color based on current state.
		do
			if m_sig.is_go_pending then
				top_leds.set_to_yellow
			elseif m_sig.is_wall_following then
				top_leds.set_to_red
			elseif m_sig.is_goal_reached then
				top_leds.set_to_green
			elseif not m_sig.is_goal_unreachable then
				top_leds.set_to_magenta
			end
		end

	stop (m_sig: separate MOVING_TO_GOAL_SIGNALER; o_sig: separate ODOMETRY_SIGNALER; s_sig: separate STOP_SIGNALER;
								drive: separate DIFFERENTIAL_DRIVE)
			-- Stop if goal reached or goal is unreachable (TODO).
		require
			(o_sig.is_moving and m_sig.is_goal_unreachable) or s_sig.is_stop_requested
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
						io.put_string ("Current state: GOAL REACHED%N")
					end
				-- TODO elseif condition then
				else
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
	pid_controller: PID_CONTROLLER
	goal_x, goal_y: REAL_64

end
