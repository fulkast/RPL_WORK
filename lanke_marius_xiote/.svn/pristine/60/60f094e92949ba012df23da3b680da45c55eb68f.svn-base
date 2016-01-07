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

	make_with_attributes (robot: separate THYMIO_ROBOT; planner: PATH_PLANNER; par: PARAMETERS)
			-- Create current with given attributes.
		do
			create stop_sig.make
			create moving_to_goal_sig.make (par.goal_x, par.goal_y)
			state_sig := robot.robot_state

			odometry_sig := robot.odometry_signaler
			diff_drive := robot.diff_drive
			range_sens := robot.range_sensors

			path_planner := planner
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

	state_sig: separate STATE_SIGNALER
			-- Robot current state.

	moving_to_goal_sig: separate MOVING_TO_GOAL_SIGNALER
			-- Current state of the behavior.

	diff_drive: separate DIFFERENTIAL_DRIVE
			-- Object to control robot's speed.

	range_sens: separate THYMIO_RANGE_GROUP
			-- 5 Range sensors in front of the robot.

	path_planner: separate PATH_PLANNER

	params: PARAMETERS

	sep_start (a, b, c, d, e, f, g: separate MOVING_TO_GOAL_CONTROLLER)
			-- Start controllers asynchronously.
		do
			a.repeat_until_stop_requested (			-- Perform step 1. going to goal
				agent a.go (state_sig, moving_to_goal_sig, odometry_sig, stop_sig, diff_drive, range_sens, path_planner))
			b.repeat_until_stop_requested (			-- Perform step 2. following obstacle
				agent b.follow_wall (state_sig, moving_to_goal_sig, odometry_sig, stop_sig, diff_drive, range_sens))
			c.repeat_until_stop_requested (			-- Look for transition to step 3.
				agent c.look_for_vleave (state_sig, moving_to_goal_sig, odometry_sig, stop_sig, range_sens))
			d.repeat_until_stop_requested (			-- Perform step 3. go towards intermediate point (closer to goal than current minimum)
				agent d.transit_to_vleave (state_sig, moving_to_goal_sig, odometry_sig, stop_sig, diff_drive, range_sens))
			e.repeat_until_stop_requested (			-- Terminate task at goal
				agent e.stop_when_goal_reached (state_sig, moving_to_goal_sig, odometry_sig, stop_sig, diff_drive))
			f.repeat_until_stop_requested (			-- Terminate when task cannot be achieved
				agent f.stop_when_goal_unreachable (state_sig, moving_to_goal_sig, odometry_sig, stop_sig, diff_drive))
		end

	sep_stop (s_sig: separate STOP_SIGNALER; val: BOOLEAN)
			-- Signal behavior for a stop.
		do
			s_sig.set_stop_requested (val)
		end

end -- class
