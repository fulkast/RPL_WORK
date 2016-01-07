note
	description: "Class for receiving OCCUPANCY_GRID_MSG."
	author: "Rusakov Andrey"
	date: "18.03.2015"

deferred class
	OCCUPANCY_GRID_LISTENER

feature -- Access

	update_occupancy_grid (msg: separate OCCUPANCY_GRID_MSG)
			-- Update current state with the values from `msg'.
		deferred
		end
end
