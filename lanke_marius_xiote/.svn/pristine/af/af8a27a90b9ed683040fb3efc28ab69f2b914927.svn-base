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

			create pid_controller.make(goal_x, goal_y)
			create tm
		end

feature {MOVING_TO_GOAL_BEHAVIOR} -- Control

	go (m_sig: separate MOVING_TO_GOAL_SIGNALER; o_sig: separate ODOMETRY_SIGNALER; s_sig: separate STOP_SIGNALER;
		drive: separate DIFFERENTIAL_DRIVE; t_leds: separate THYMIO_TOP_LEDS;r_sens: separate THYMIO_RANGE_GROUP)
			-- Move robot if goal not reached yet.
		require
			(not m_sig.is_goal_reached and
			not r_sens.is_obstacle) or s_sig.is_stop_requested
		local
			vtheta: REAL_64
			vx: REAL_64
		do
			if s_sig.is_stop_requested then
				drive.stop

			else
				t_leds.set_to_yellow

				vtheta := pid_controller.update_heading(o_sig.x, o_sig.y, o_sig.theta, o_sig.timestamp)
				vx := 0.025 - (vtheta.abs / 10)

				m_sig.clear_all_pendings
				m_sig.set_is_go_pending (True)
				drive.set_velocity (vx, vtheta)
				io.put_string ("Current state: GO%N")
			end
		end

	turn_when_obstacle_detected (m_sig: separate MOVING_TO_GOAL_SIGNALER; o_sig: separate ODOMETRY_SIGNALER; s_sig: separate STOP_SIGNALER;
						drive: separate DIFFERENTIAL_DRIVE; t_leds: separate THYMIO_TOP_LEDS; r_sens: separate THYMIO_RANGE_GROUP)
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
				t_leds.set_to_red

				vtheta := r_sens.follow_wall_orientation (5.0)
				vx := 0.02

				m_sig.clear_all_pendings
				m_sig.set_is_turn_pending (TRUE)
				drive.set_velocity (vx, vtheta)
				io.put_string ("Current state: TURN%N")
			end
		end

	stop_when_goal_reached (m_sig: separate MOVING_TO_GOAL_SIGNALER; o_sig: separate ODOMETRY_SIGNALER; s_sig: separate STOP_SIGNALER;
								drive: separate DIFFERENTIAL_DRIVE; t_leds: separate THYMIO_TOP_LEDS)
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

				if tm.euclidean_distance (goal_point, robot_point) < 0.02 then
					drive.stop
					m_sig.clear_all_pendings
					s_sig.set_stop_requested (True)
					m_sig.set_is_goal_reached (True)
					t_leds.set_to_green
					io.put_string ("Current state: REACHED%N")
				end
			end
		end

feature

	tm: TRIGONOMETRY_MATH
	pid_controller: PID_CONTROLLER
	goal_x, goal_y: REAL_64

end
