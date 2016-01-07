note
	description: "Class for receiving a Path."
	author: "Rusakov Andrey"
	date: "20.11.2013"

deferred class
	PATH_LISTENER

feature -- Access

	update_path (msg: separate PATH_MSG)
			-- Update current state with the values from `msg'.
		deferred
		end
end
