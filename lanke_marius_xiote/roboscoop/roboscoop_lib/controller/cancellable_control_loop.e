note
	description: "Repetedly executes control routines until stop is requested."
	author: "Rusakov Andrey"
	date: "23.09.2014"

deferred class
	CANCELLABLE_CONTROL_LOOP

feature -- Access

	repeat_until_stop_requested (proc: separate PROCEDURE [ANY, TUPLE])
			-- Execute the control loop until the stop is requested.
		do
			from until sep_is_stop_requested (stop_signaler) loop
				proc.call ([])
			end
		end

feature {NONE} -- Implementation

	stop_signaler: separate STOP_SIGNALER
			-- Signaler for stopping the behavior.

	sep_is_stop_requested (s_sig: separate STOP_SIGNALER): BOOLEAN
			-- Wrapper to execute a separate call on `s_sig'.
		do
			Result := s_sig.is_stop_requested
--			if Result then
--				io.put_string ("STOP REQUESTED%N")
--			end
		end
end
