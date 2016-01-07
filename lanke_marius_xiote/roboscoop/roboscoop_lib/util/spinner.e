note
	description: "Dummy spinner."
	author: "Rusakov Andrey"
	date: "28.08.2013"

class
	SPINNER

inherit
	EXECUTION_ENVIRONMENT

feature -- Access

	spin
			-- Do nothing.
		do
			from until False
			loop
				sleep (1000000000)
			end
		end
end
