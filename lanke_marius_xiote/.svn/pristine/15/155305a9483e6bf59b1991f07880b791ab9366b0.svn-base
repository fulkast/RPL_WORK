note
	description: "Helper class for synchronizing separate objects."
	author: "Rusakov Andrey"
	date: "06.06.2013"

class
	BARRIER

feature {NONE} -- Implementation

	synchronize (a: separate ANY)
			-- Auxiliary dummy procedure to synchronize separate objects.
		local
			l: like a
		do
			l := a.as_attached
			-- Actually, does nothing.
		end
end
