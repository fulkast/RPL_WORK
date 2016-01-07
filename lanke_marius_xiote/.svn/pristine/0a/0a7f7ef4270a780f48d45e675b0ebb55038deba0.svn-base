note
	description: "A parent class for task related diagnostics publishing. Interfaced with ROS"
	author: "Lanke Frank Tarimo Fu	"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	TASK_MSG_PUBLISHERS[G]

feature
	update_msg(item : G)
						-- Deferred, used to update he generic message type
		deferred
		end

	publish
						-- Deferred, used to publish the generic message type. Consider merging this with update in future editions.
		do
			publisher.publish (message_2_send)
		end

feature {NONE}

	publisher : ROS_PUBLISHER[ROS_MESSAGE]
						-- A generic ROS PUBLISHER
	message_2_send : ROS_MESSAGE
						-- A generic ROS MESSAGE
end
