note
	description: "Auxiliary class to wrap spinning procedures of ROS."
	author: "Rusakov Andrey"
	date: "25.03.2015"

class
	ROS_ENVIRONMENT

inherit
	EXECUTION_ENVIRONMENT
		rename
			command_line as comm_line
		end
	SEPARATE_STRING_MAKER
	BARRIER

feature -- Access

	start_spinning (rs: separate ROS_SPINNER)
			-- Start listening to ROS.
		do
			rs.start
		end

	shut_down_node (node: separate ROBOSCOOP_NODE)
			-- Terminate the ROS node.
		do
			sleep (1000000000)
			node.shutdown
		end
end
