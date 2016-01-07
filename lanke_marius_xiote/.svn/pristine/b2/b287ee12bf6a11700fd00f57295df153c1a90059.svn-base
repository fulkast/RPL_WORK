note
	description: "A parent class for task related diagnostics publishing. Interfaced with ROS"
	author: "Lanke Frank Tarimo Fu"
	date: "09.11.15"

deferred class
	TASK_MSG_PUBLISHERS[G]

feature -- Access

	update_msg(item : separate G)
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

end -- class
