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

	make_with_attributes (robot: separate ROBOT; planner: separate PATH_PLANNER; beh_par: separate BEHAVIOR_PARAMETERS)
			-- Create current with given attributes.
		do
			behaviour_param := beh_par
			path_planner := planner
			state_sig := robot.robot_state

			odometry_sig := robot.get_odometry_signaler
			diff_drive := robot.get_diff_drive
			r_sens := robot.get_range_sensors
			r_sens_wrapper := robot.get_range_group_wrapper

			create stop_sig.make
			create moving_to_goal_sig.make (beh_par.goal_x,beh_par.goal_y)
		end

feature -- Access

	start
			-- Start the behaviour.
		local
			a, b, c, d, e, f, g: separate MOVING_TO_GOAL_CONTROLLER
		do
			create a.make (stop_sig, behaviour_param)
			create b.make (stop_sig, behaviour_param)
			create c.make (stop_sig, behaviour_param)
			create d.make (stop_sig, behaviour_param)
			create e.make (stop_sig, behaviour_param)
			create f.make (stop_sig, behaviour_param)
			create g.make (stop_sig, behaviour_param)

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

	r_sens: separate RANGE_GROUP
			-- Horizontal range sensors.

	r_sens_wrapper: separate RANGE_GROUP_WRAPPER
			-- Wrapper on range sensors.

	path_planner: separate PATH_PLANNER
			-- Path planner for optimal path.

	behaviour_param : separate BEHAVIOR_PARAMETERS
			-- Parameters for behaviors.

	sep_start (a, b, c, d, e, f, g: separate MOVING_TO_GOAL_CONTROLLER)
			-- Start controllers asynchronously.
		do
			a.repeat_until_stop_requested (
					-- Perform step 1. going to goal.
				agent a.go (state_sig,
							 moving_to_goal_sig,
							 odometry_sig,
							 stop_sig,
							 diff_drive,
							 path_planner))

			b.repeat_until_stop_requested (
					-- Perform step 2. following obstacle.
				agent b.follow_wall (state_sig,
									  moving_to_goal_sig,
									  odometry_sig,
									  stop_sig,
									  diff_drive,
									  r_sens,
									  r_sens_wrapper))

			c.repeat_until_stop_requested (
					-- Look for transition to step 3.
				agent c.look_for_vleave (state_sig,
										  moving_to_goal_sig,
										  odometry_sig,
										  stop_sig,
										  r_sens,
										  r_sens_wrapper))

			d.repeat_until_stop_requested (
					-- Perform step 3. go towards intermediate point
					-- (closer to goal than current minimum).
				agent d.transit_to_vleave (state_sig,
											moving_to_goal_sig,
											odometry_sig,
											stop_sig,
											diff_drive))

			e.repeat_until_stop_requested (
					-- Terminate task at goal.
				agent e.stop_when_goal_reached (state_sig,
												 moving_to_goal_sig,
												 odometry_sig,
												 stop_sig,
												 diff_drive))

			f.repeat_until_stop_requested (
					-- Terminate when task cannot be achieved.
				agent f.stop_when_goal_unreachable (state_sig,
													 moving_to_goal_sig,
													 odometry_sig,
													 stop_sig,
													 diff_drive))
		end

	sep_stop (s_sig: separate STOP_SIGNALER; val: BOOLEAN)
			-- Signal behavior for a stop.
		do
			s_sig.set_stop_requested (val)
		end

end -- class
