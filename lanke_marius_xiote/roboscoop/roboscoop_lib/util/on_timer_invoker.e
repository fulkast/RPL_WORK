note
	description: "Launches a separate agent after sertain delay."
	author: "Rusakov Andrey"
	date: "05.09.2013"

class
	ON_TIMER_INVOKER

inherit
	EXECUTION_ENVIRONMENT

create
	make

feature {NONE} -- Initialization

	make (sep_agent: separate PROCEDURE[ANY, TUPLE]; duration_ms, sleep_portion_ms: INTEGER_64)
			-- Create Current with the agent `sep_agent' and the duration `millisec'.
		do
			duration := duration_ms
			sleep_portion := sleep_portion_ms * 1000000
			sep_procedure := sep_agent
		end

feature -- Access

	start
			-- Launch timer and start waiting.
		local
			t: TIMER
			finish: INTEGER_64
		do
			create t.make (0)
			from
				finish := t.current_time_millis + duration
			until
				t.current_time_millis >= finish
			loop
				sleep (sleep_portion)
			end
			execute (sep_procedure)
		end

feature {NONE} -- Implementation

	duration: INTEGER_64
			-- Time to wait before execution (ms).

	sleep_portion: INTEGER_64
			-- Time to sleep (ns).

	sep_procedure: separate PROCEDURE[ANY, TUPLE]
			-- Agent to call after timer is complete.

	execute (sep_agent: separate PROCEDURE[ANY, TUPLE])
			-- Call `sep_agent'.
		do
			sep_agent.call ([])
		end
end
