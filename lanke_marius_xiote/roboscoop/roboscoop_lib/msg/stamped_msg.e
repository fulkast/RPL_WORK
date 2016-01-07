note
	description: "ROS message with Header info."
	author: "Rusakov Andrey"
	date: "17.04.2015"

deferred class
	STAMPED_MSG

inherit
	ROS_MESSAGE

feature -- Access

	header: HEADER_MSG
			-- Timestamp, frame_id, sequence number.
end
