note
	description: "Binary state."
	author: "Xiaote Zhu"

deferred class
	BOOL_LISTENER

feature -- Access

	update_state (msg: separate BOOL_MSG)
			-- Update current state with the values from `msg'.
		deferred
		end

end -- class
