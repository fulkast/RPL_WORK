note
	description: "Example application of the stop mechanism in Roboscoop."
	author: "Rusakov Andrey"
	date: "08.09.2014"

class
	APP_DURATION

inherit
	ROS_ENVIRONMENT

create
	make

feature {NONE} -- Initialization.

	make
			-- Create and launch the robot.
		local
			ros_spinner: separate ROS_SPINNER
		do
			-- Initialize this application as a ROS node.
			robo_node := (create {ROS_NODE_STARTER}).roboscoop_node
			synchronize (robo_node)

			-- Listen to ROS.
			create ros_spinner.make
			start_spinning (ros_spinner)

			-- Create a robot object.
			create thymio.make
			launch_with_duration (thymio, 5000)
		end

feature {NONE} -- Implementation

	robo_node: separate ROBOSCOOP_NODE
			-- ROS node.

	thymio: separate THYMIO_ROBOT
			-- The robot.

	launch_with_duration (robot: separate THYMIO_ROBOT; duration_millisec: INTEGER)
			-- Start `robot's behaviour and stop it after `duration_millisec' elapsed.
		local
			invoker: separate ON_TIMER_INVOKER
		do
			create invoker.make (agent stop, duration_millisec, 50)
			separate invoker as inv do
				inv.start
			end
			robot.start_discovering
		end

	stop
			-- Stop the robot and terminate the application.
		do
			separate thymio as t do
				t.stop_discovering
				synchronize (t)
			end
			shut_down_node (robo_node)
		end
end
