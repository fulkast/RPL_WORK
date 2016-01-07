note
	description: "Behavior that moves the robot towards a goal position"
	author: "Xiaote Zhu"

class
	MOVING_TO_GOAL_BEHAVIOR

inherit
	BEHAVIOUR

create
	make_with_attributes

feature {NONE} -- Initialization

	make_with_attributes (odom_sig: separate ODOMETRY_SIGNALER; d_drive: separate DIFFERENTIAL_DRIVE;
						r_sens: separate THYMIO_RANGE_GROUP; t_leds: separate THYMIO_TOP_LEDS;
						g_x, g_y: REAL_64)
			-- Create current with given attributes.
		do
			create stop_sig.make
			create moving_to_goal_sig.make

			odometry_sig := odom_sig
			diff_drive := d_drive
			range_sens := r_sens
			top_leds := t_leds

			goal_x := g_x
			goal_y := g_y
		end

feature -- Access

	start
			-- Start the behaviour.
		local
			a, b, c, d, e: separate MOVING_TO_GOAL_CONTROLLER
		do
			create a.make (stop_sig, goal_x, goal_y)
			create b.make (stop_sig, goal_x, goal_y)
			create c.make (stop_sig, goal_x, goal_y)
			create d.make (stop_sig, goal_x, goal_y)
			create e.make (stop_sig, goal_x, goal_y)

			sep_stop (stop_sig, False)
			sep_start (a, b, c, d, e)
		end

	stop
			-- Stop the behaviour.
		do
			sep_stop (stop_sig, True)
		end

feature {NONE} -- Implementation

	odometry_sig: separate ODOMETRY_SIGNALER
			-- Current state of the odometry.		

	stop_sig: separate STOP_SIGNALER
			-- Signaler for stopping the behaviour.

	moving_to_goal_sig: separate MOVING_TO_GOAL_SIGNALER
			-- Current state of the behavior.

	diff_drive: separate DIFFERENTIAL_DRIVE
			-- Object to control robot's speed.

	range_sens: separate THYMIO_RANGE_GROUP
			-- 5 Range sensors in front of the robot.

	top_leds: separate THYMIO_TOP_LEDS
			-- RGB LEDs on the top.

	goal_x, goal_y: REAL_64
			-- Goal position.

	sep_start (a, b, c, d, e: separate MOVING_TO_GOAL_CONTROLLER)
			-- Start controllers asynchronously.
		do
			a.repeat_until_stop_requested (
				agent a.go (moving_to_goal_sig, odometry_sig, stop_sig, diff_drive, range_sens))
			b.repeat_until_stop_requested (
				agent b.follow_wall (moving_to_goal_sig, odometry_sig, stop_sig, diff_drive, range_sens))
			c.repeat_until_stop_requested (
				agent c.stop_when_goal_reached (moving_to_goal_sig, odometry_sig, stop_sig, diff_drive))
			d.repeat_until_stop_requested (
				agent d.change_features (moving_to_goal_sig, stop_sig, top_leds))
			e.repeat_until_stop_requested (
				agent e.stop_when_goal_unreachable (moving_to_goal_sig, odometry_sig, stop_sig, diff_drive))

		end

	sep_stop (s_sig: separate STOP_SIGNALER; val: BOOLEAN)
			-- Signal behavior for a stop.
		do
			s_sig.set_stop_requested (val)
		end

end
