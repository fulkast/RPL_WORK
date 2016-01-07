note
	description: "Starter for an external Roboscoop node."
	author: "Rusakov Andrey"
	date: "22.03.2013"

class
	ROS_NODE_STARTER

inherit
	BARRIER

feature -- Access

	roboscoop_node: separate ROBOSCOOP_NODE
			-- Singleton for ROS node.
		once ("PROCESS")
			create Result.init
		end
end
