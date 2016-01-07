note
	description: "Behavior that moves the robot towards a goal position with obstacle avoidance"
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
						par: separate PARAMETERS)
			-- Create current with given attributes.
		do
			create stop_sig.make
			create moving_to_goal_sig.make (params.goal_x, params.goal_y)

			odometry_sig := odom_sig
			diff_drive := d_drive
			range_sens := r_sens
			top_leds := t_leds
			params := par
		end

feature -- Access

	start
			-- Start the behaviour.
		local
			a, b, c, d, e, f, g: separate MOVING_TO_GOAL_CONTROLLER
		do
			create a.make (stop_sig, params)
			create b.make (stop_sig, params)
			create c.make (stop_sig, params)
			create d.make (stop_sig, params)
			create e.make (stop_sig, params)
			create f.make (stop_sig, params)
			create g.make (stop_sig, params)

			sep_stop (stop_sig, False)
			sep_start (a, b, c, d, e, f, g)
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

	params: separate PARAMETERS

	sep_start (a, b, c, d, e, f, g: separate MOVING_TO_GOAL_CONTROLLER)
			-- Start controllers asynchronously.
		do
			a.repeat_until_stop_requested (			-- Perform step 1. going to goal
				agent a.go (moving_to_goal_sig, odometry_sig, stop_sig, diff_drive, range_sens))
			b.repeat_until_stop_requested (			-- Perform step 2. following obstacle
				agent b.follow_wall (moving_to_goal_sig, odometry_sig, stop_sig, diff_drive, range_sens))
			c.repeat_until_stop_requested (			-- Look for transition to step 3.
				agent c.look_for_vleave (moving_to_goal_sig, odometry_sig, stop_sig, range_sens))
			d.repeat_until_stop_requested (			-- Perform step 3. go towards intermediate point (closer to goal than current minimum)
				agent d.transit_to_vleave (moving_to_goal_sig, odometry_sig, stop_sig, diff_drive, range_sens))
			e.repeat_until_stop_requested (			-- Terminate task at goal
				agent e.stop_when_goal_reached (moving_to_goal_sig, odometry_sig, stop_sig, diff_drive))
			f.repeat_until_stop_requested (			-- Terminate when task cannot be achieved
				agent f.stop_when_goal_unreachable (moving_to_goal_sig, odometry_sig, stop_sig, diff_drive))
			g.repeat_until_stop_requested (			-- Handle auxilliary events	
				agent g.change_features (moving_to_goal_sig, stop_sig, top_leds))
		end

	sep_stop (s_sig: separate STOP_SIGNALER; val: BOOLEAN)
			-- Signal behavior for a stop.
		do
			s_sig.set_stop_requested (val)
		end

end
