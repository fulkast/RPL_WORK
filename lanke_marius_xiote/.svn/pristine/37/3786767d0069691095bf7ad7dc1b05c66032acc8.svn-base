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

--			path_planning_parser: PATH_PLANNER_PARSER
			path_planner_param_path: STRING
			path_planner_parameter: PATH_PLANNER_PARAMETER

			conn_strategy: separate EIGHT_CONNECTIVITY_STRATEGY
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
--			create parser
--			params_path := Arguments.argument (1).to_string_8
--			params := parser.read_parameters (create {STRING}.make_from_separate (params_path))
--			create path_planner_parser
--			path_planner_param_path := Arguments.argument (1).to_string_8
--			path_planner_parameter := path_planner_parser.read_parameters (path_planner_param_path)

			create app_parser
			create robot_parser
			create app_params.make
			create robot_params.make
			create path_planner_params.make
			create path_planning_parser
			create behaviour_parser
			create behaviour_param.make

			app_params_path := Arguments.argument (1).to_string_8

			app_params := app_parser.parse_file (create {STRING}.make_from_separate (app_params_path), app_params)
			robot_params := robot_parser.parse_file(app_params.robot_file_name,robot_params)
			behaviour_param := behaviour_parser.parse_file (robot_params.behavior_file_name, behaviour_param)
			path_planner_params := path_planning_parser.parse_file(app_params.path_planner_file_name,path_planner_params)

			-- Create a robot object.
			create thymio.make

			-- Create a path_planner.
			create conn_strategy
			create heur_cost_strategy
			create path_cost_strategy
			create search_strategy.make (heur_cost_strategy, path_cost_strategy)

			create path_planner.make (conn_strategy, search_strategy, path_planner_params)

			-- Initialize behaviors.
			create moving_to_goal_behavior.make_with_attributes (thymio, path_planner, behaviour_param)
			create change_feature_behavior.make_with_attributes (thymio)
			path_planner.search_path

			-- Launch Thymio.
			separate thymio as t do
				moving_to_goal_behavior.start
				change_feature_behavior.start
			end
		end

feature {NONE}

--	parser: PARSER
--			-- Parser class for paramteters from text file.

--	params: PARAMETERS
--			-- All Parameters needed.

--	params_path: separate STRING

	app_parser: PARSER[APP_PARAMETERS]
			-- Parser class for app_parameters from text file.

	robot_parser: PARSER[ROBOT_PARAMETERS]
			-- Parser class for robot_paramteters from text file.

	robot_params:  ROBOT_PARAMETERS
			-- Robot Parameters needed.

	path_planner_params: PATH_PLANNER_PARAMETER
	path_planning_parser: PARSER[PATH_PLANNER_PARAMETER]

	behaviour_param : BEHAVIOR_PARAMETERS
	behaviour_parser : PARSER[BEHAVIOR_PARAMETERS]

	app_params: APP_PARAMETERS
			-- App Parameters needed.

	app_params_path: separate STRING

end -- class
