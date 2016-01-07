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

			path_planner_parser: PATH_PLANNER_PARSER
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
			create parser
			params_path := Arguments.argument (1).to_string_8
			params := parser.read_parameters (create {STRING}.make_from_separate (params_path))
			create path_planner_parser
			path_planner_param_path := Arguments.argument (1).to_string_8
			path_planner_parameter := path_planner_parser.read_parameters (path_planner_param_path)

			-- Create a robot object.
			create thymio.make

			-- Create a path_planner.
			create conn_strategy
			create heur_cost_strategy
			create path_cost_strategy
			create search_strategy.make (heur_cost_strategy, path_cost_strategy)
			create path_planner.make (conn_strategy, search_strategy, path_planner_parameter)

			-- Initialize behaviors.
			create moving_to_goal_behavior.make_with_attributes (thymio, path_planner, params)
			create change_feature_behavior.make_with_attributes (thymio)

			-- Launch Thymio.
			separate thymio as t do
				moving_to_goal_behavior.start
				change_feature_behavior.start
			end
		end

feature {NONE}

	parser: PARSER
			-- Parser class for paramteters from text file.

	params: PARAMETERS
			-- All Parameters needed.

	params_path: separate STRING

end -- class
