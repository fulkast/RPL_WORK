note
	description: "The main class of the application."
	author: "Xiaote Zhu"

class
	APP

inherit
	ROS_ENVIRONMENT

create
	make

feature {NONE} -- Initialization

	make
			-- Create and launch the robot.
		local
			robo_node: separate ROBOSCOOP_NODE
			ros_spinner: separate ROS_SPINNER
			thymio: separate THYMIO_ROBOT

			app_parser: PARSER[APP_PARAMETERS]
			app_params: APP_PARAMETERS
			app_params_path: separate STRING

			robot_parser: PARSER[ROBOT_PARAMETERS]
			robot_params: ROBOT_PARAMETERS

			path_planning_parser: PARSER[PATH_PLANNER_PARAMETER]
			path_planner_params: PATH_PLANNER_PARAMETER

			tangent_bug_parser: PARSER[TANGENT_BUG_PARAMETERS]
			tangent_bug_params: TANGENT_BUG_PARAMETERS

			conn_strategy: GRID_CONNECTIVITY_STRATEGY
			heur_cost_strategy: EUCLIDEAN_DISTANCE_HEURISTIC
			path_cost_strategy: EUCLIDEAN_DISTANCE_HEURISTIC
			search_strategy: A_STAR_SEARCH
			path_planner: PATH_PLANNER

			moving_to_goal_behavior: MOVING_TO_GOAL_BEHAVIOR
			change_feature_behavior: CHANGE_FEATURE_BEHAVIOR
		do

			-- Initialize this application as a ROS node.
			robo_node := (create {ROS_NODE_STARTER}).roboscoop_node
			synchronize (robo_node)

			-- Listen to ROS.
			create ros_spinner.make
			start_spinning (ros_spinner)

			-- Parse parameter text file
			create app_parser
			create app_params.make
			create robot_parser
			create robot_params.make
			create path_planning_parser
			create path_planner_params.make
			create tangent_bug_parser
			create tangent_bug_params.make

			app_params_path := Arguments.argument (1).to_string_8

			app_parser.parse_file (create {STRING}.make_from_separate (app_params_path), app_params)
			robot_parser.parse_file(app_params.robot_file_name, robot_params)
			tangent_bug_parser.parse_file (app_params.algorithm_file_name, tangent_bug_params)
			path_planning_parser.parse_file(app_params.path_planner_file_name, path_planner_params)

			-- Create a robot object.
			create thymio.make (robot_params)

			-- Create a path_planner.
			create heur_cost_strategy
			create path_cost_strategy
			create search_strategy.make (heur_cost_strategy, path_cost_strategy)
			create path_planner.make (path_planner_params.get_connectivity_strategy, search_strategy, path_planner_params)

			-- Initialize behaviors.
			create moving_to_goal_behavior.make_with_attributes (thymio, path_planner, tangent_bug_params)
			create change_feature_behavior.make_with_attributes (thymio)

			-- Launch behaviors.
			moving_to_goal_behavior.start
			change_feature_behavior.start
		end

end -- class
