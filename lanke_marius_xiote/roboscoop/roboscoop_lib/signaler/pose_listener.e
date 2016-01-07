note
	description: "Class for receiving POSE_MSG."
	author: "Rusakov Andrey"
	date: "07.05.2015"

deferred class
	POSE_LISTENER

feature -- Access

	update_pose (msg: separate POSE_STAMPED_MSG)
			-- Update current state with the values from `msg'.
		deferred
		end
end
