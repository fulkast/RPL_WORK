note
	description: "Class for receiving REFLECTED_AMBIENT_MSG."
	author: "Rusakov Andrey"
	date: "17.04.2015"

deferred class
	REFLECTED_AMBIENT_LISTENER

feature -- Access

	update_reflected_ambient (msg: separate REFLECTED_AMBIENT_MSG)
			-- Update current state with the values from `msg'.
		deferred
		end
end
