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
			goal_x: REAL_64
			goal_y: REAL_64
		do
			-- Initialize this application as a ROS node.
			robo_node := (create {ROS_NODE_STARTER}).roboscoop_node
			synchronize (robo_node)

			-- Listen to ROS.
			create ros_spinner.make
			start_spinning (ros_spinner)

			-- Get goal position from command line.
			goal_x := Arguments.argument (1).to_double
			goal_y := Arguments.argument (2).to_double

			-- Create a robot object.
			create thymio.make (goal_x, goal_y)

			-- Launch Thymio.
			separate thymio as t do
				t.start_moving_to_goal
			end
		end
end
