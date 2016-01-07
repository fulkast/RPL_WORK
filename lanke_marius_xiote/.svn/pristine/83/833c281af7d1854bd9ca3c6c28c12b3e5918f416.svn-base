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

	make_with_attributes (robot: separate ROBOT; planner: PATH_PLANNER; tangent_bug_params: TANGENT_BUG_PARAMETERS)
			-- Create current with given attributes.	
		do
			path_planner := planner
			algorithm_params := tangent_bug_params

			state_sig := robot.robot_state
			odometry_sig := robot.get_odometry_signaler
			diff_drive := robot.get_diff_drive
			r_sens := robot.get_range_sensors
			r_sens_wrapper := robot.get_range_group_wrapper

			create stop_sig.make
			create moving_to_goal_sig.make

			create robot_objrec_state_pub.make_with_topic ({MAP_TOPICS}.robot_objrec_state)
			robot_objrec_state_pub.advertize (1, True)
			create robot_loc_state_pub.make_with_topic ({MAP_TOPICS}.robot_loc_state)
			robot_loc_state_pub.advertize (1, True)
			create objrec_state_signaler.make_with_topic ({MAP_TOPICS}.object_recognition_state)
			create loc_state_signaler.make_with_topic ({MAP_TOPICS}.localization_state)
			create loc_result_signaler.make_with_topic ({MAP_TOPICS}.localization_result)

			create vleave_pub.make_with_attributes ({MAP_TOPICS}.vleave)
			create cur_goal_pub.make_with_attributes ({MAP_TOPICS}.current_goal)
			create search_vleave_pub.make_with_attributes ({MAP_TOPICS}.search_vleave)

			create controller_params.make
			create controller_parser
			controller_params := controller_parser.parse_txt_file (algorithm_params.controller_file_name)
		end

feature -- Access

	start
			-- Start the behaviour.
		local
			a, b, c, d, e, f, g, h: separate MOVING_TO_GOAL_CONTROLLER
		do
			path_planner.search_path

			create a.make (stop_sig, controller_params)
			create b.make (stop_sig, controller_params)
			create c.make (stop_sig, controller_params)
			create d.make (stop_sig, controller_params)
			create e.make (stop_sig, controller_params)
			create f.make (stop_sig, controller_params)
			create g.make (stop_sig, controller_params)
			create h.make (stop_sig, controller_params)

			sep_stop (stop_sig, False)
			sep_start (a, b, c, d, e, f, g, h)
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

	path_planner: PATH_PLANNER
			-- Path planner for optimal path.

	robot_objrec_state_pub: ROS_PUBLISHER [BOOL_MSG]
			-- If robot should wait for object recognition.

	robot_loc_state_pub: ROS_PUBLISHER [BOOL_MSG]
			-- If robot are in localization state.

	objrec_state_signaler: BOOL_SIGNALER
			-- If objrec has finished recognition process.

	loc_state_signaler: BOOL_SIGNALER
			-- If localization has finished recognition process.

	loc_result_signaler: POSE_2D_SIGNALER
			-- Receive result of localizaton.

	cur_goal_pub: POINT_MSG_TO_MARKER_MSG
			-- The current goal in go state

	search_vleave_pub : POINT_MSG_TO_MARKER_MSG
			-- The current searched vleave point to go to

	vleave_pub : POINT_MSG_TO_MARKER_MSG
			-- The vleave point transiting to

	algorithm_params: TANGENT_BUG_PARAMETERS
			-- Parameters for tangent bug algorithm.

	controller_params: CONTROLLER_PARAMETERS
			-- Parameters for pid controller.

	controller_parser: CONTROLLER_PARAMETERS_PARSER
			-- Parser for pid controller parameters.

	sep_start (a, b, c, d, e, f, g, h: separate MOVING_TO_GOAL_CONTROLLER)
			-- Start controllers asynchronously.
		do
			a.repeat_until_stop_requested (
					-- Perform step 1. going to goal.
				agent a.go (state_sig,
							 moving_to_goal_sig,
							 odometry_sig,
							 stop_sig,
							 diff_drive,
							 path_planner,
							 cur_goal_pub,
							 algorithm_params))

			b.repeat_until_stop_requested (
					-- Perform step 2. following obstacle.
				agent b.follow_wall (state_sig,
									  moving_to_goal_sig,
									  odometry_sig,
									  stop_sig,
									  diff_drive,
									  r_sens,
									  r_sens_wrapper,
									  algorithm_params))

			c.repeat_until_stop_requested (
					-- Look for transition to step 3.
				agent c.look_for_vleave (state_sig,
										  moving_to_goal_sig,
										  odometry_sig,
										  stop_sig,
										  r_sens,
										  r_sens_wrapper,
										  search_vleave_pub,
										  path_planner,
										  algorithm_params))

			d.repeat_until_stop_requested (
					-- Perform step 3. go towards intermediate point
					-- (closer to goal than current minimum).
				agent d.transit_to_vleave (state_sig,
											moving_to_goal_sig,
											odometry_sig,
											stop_sig,
											diff_drive,
											vleave_pub,
											path_planner,
											algorithm_params))

			e.repeat_until_stop_requested (
					-- Terminate task at goal.
				agent e.stop_when_goal_reached (state_sig,
												 moving_to_goal_sig,
												 odometry_sig,
												 stop_sig,
												 diff_drive,
												 algorithm_params,
												 path_planner))

			f.repeat_until_stop_requested (
					-- Wait at intermediate goal.
				agent f.wait_when_intermediate_goal_reached (state_sig,
																moving_to_goal_sig,
																odometry_sig,
																stop_sig,
																diff_drive,
																algorithm_params,
																path_planner,
																robot_objrec_state_pub))

			g.repeat_until_stop_requested (
					-- Continue after waiting at intermediate goal.
				agent g.continue_after_task_finished (state_sig,
													   stop_sig,
													   objrec_state_signaler,
													   robot_objrec_state_pub))

			h.repeat_until_stop_requested (
				agent h.localize (state_sig,
									moving_to_goal_sig,
									odometry_sig,
									stop_sig,
									diff_drive,
									path_planner,
									algorithm_params,
									robot_loc_state_pub,
									loc_state_signaler,
									loc_result_signaler))
		end

	sep_stop (s_sig: separate STOP_SIGNALER; val: BOOLEAN)
			-- Signal behavior for a stop.
		do
			s_sig.set_stop_requested (val)
		end

end -- class
