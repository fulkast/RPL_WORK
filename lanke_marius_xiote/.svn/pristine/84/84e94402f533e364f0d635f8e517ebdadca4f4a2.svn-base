note
	description: "Answers the question: whether initial time duration has been elapsed or not."
	author: "Rusakov Andrey"
	date: "28.01.2013"

class
	TIMER

create
	make, make_with_token

feature -- Initialization

	make (millisec_duration: INTEGER_64)
			-- Initialize Current with a duration of `millisec_duration'
		require
			non_negative: millisec_duration >= 0
		do
			duration := millisec_duration
		end

	make_with_token (millisec_duration: INTEGER_64; a_token: INTEGER)
			-- Initialize Current with a duration of `millisec_duration' and `a_token'.
		require
			non_negative: millisec_duration >= 0
		do
			make (millisec_duration)
			token := a_token
		end

feature -- Access

	duration: INTEGER_64
			-- Time length to count down.

	token: INTEGER
			-- Token to distinguish between timer's states.

	set_token (val: INTEGER)
			-- Set token's value to `val'
		do
			token := val
		end

	start
			-- Launch the timer.
		do
			remaining := duration
			start_time := current_time_millis
			is_paused := False
			is_stopped := False
			is_started := True
		end

	pause
			-- Hold up the timer's execution.
		do
			if is_started then
				remaining := remaining - (current_time_millis - start_time)
				if remaining <= 0 then
					remaining := 0
					stop
				else
					is_paused := True
				end
				debug ("DEBUG_INFO")
					io.put_string ("Remaining time: " + remaining.out + " ms.%N" )
				end
			end
		end

	resume
			-- Continue timer's execution after a pause.
		do
			if is_started and is_paused then
				start_time := current_time_millis
				is_paused := False
			end
		end

	stop
			-- Finish timer's execution.
		do
			is_started := False
			is_paused := False
			is_stopped := True
		end

	is_started: BOOLEAN
			-- Is execution started?

	is_paused: BOOLEAN
			-- Is execution suspened?

	is_stopped: BOOLEAN
			-- Is execution canceled?

	is_completed: BOOLEAN
			-- Has the timer been executed completely?
		do
			Result := is_started and then not is_paused and then ((current_time_millis - start_time) > remaining)
		end

	current_time_millis: INTEGER_64
			-- Current time in milliseconds (Linux only).
		external "C inline use <sys/time.h>"
		alias
			"[
				long result = 0;
				struct timeval t;
				struct timezone tz;
				gettimeofday (&t, &tz);
				result = t.tv_sec * 1000 + t.tv_usec / 1000;
				return result;
			]"
		end

feature {NONE} -- Implementation

	start_time: INTEGER_64
			-- Time label at the beginning of the execution.

	remaining: INTEGER_64
			-- Remaining time to be completed.

invariant
	remaining >= 0
	start_time >= 0
	is_stopped implies (not is_paused and not is_started)
end
