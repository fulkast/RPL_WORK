note
	description: "Summary description for {TASK_MSG_MAKER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	TASK_MSG_PUBLISHERS[G]

feature
	update_msg(item : G)
		deferred
		end

	publish
		do
			publisher.publish (message_2_send)
		end

feature {NONE}
	publisher : ROS_PUBLISHER[ROS_MESSAGE]
	message_2_send : ROS_MESSAGE
end
