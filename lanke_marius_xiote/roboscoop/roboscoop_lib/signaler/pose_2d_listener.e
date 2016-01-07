note
	description: "Class for receiving POSE_2D_MSG."
	author: "Rusakov Andrey"
	date: "04.06.2014"

deferred class
	POSE_2D_LISTENER

feature -- Access

	update_pose_2d (msg: separate POSE_2D_MSG)
			-- Update current state with the values from `msg'.
		deferred
		end
end
