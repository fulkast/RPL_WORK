note
	description: "Interface of the robotic part that can be lifted."
	author: "Rusakov Andrey"
	date: "17.04.2015"

deferred class
	LIFTABLE

feature -- Access

	is_lifted: BOOLEAN
			-- Is considered to be lifted?
		deferred
		end
end
