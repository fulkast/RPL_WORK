note
	description: "Implementation of PID controller."
	author: "Xiaote Zhu"

class
	PID_CONTROLLER

create
	make

feature {NONE} -- Initialization

	make (k_proportional, k_integral, k_derivative: REAL_64)
			-- Create current with given attributes.
		do
			k_p := k_proportional
			k_i := k_integral
			k_d := k_derivative

		end

feature -- Access

	get_control_output (current_error, current_time: REAL_64): REAL_64
			-- Return new v_theta.
		local
			deri_term: REAL_64
		do
			update_error(current_error, current_time)

			if  cur_time = prev_time then
				deri_term := 0.0

			else
				deri_term := (cur_error - prev_error) / (cur_time - prev_time)
			end

			Result := k_p * cur_error + k_i * acc_error + k_d * deri_term
		end

	update_error (current_error, current_time: REAL_64)
			-- Update prev_error, cur_error and acc_error accordingly.

		do
			prev_time := cur_time
			cur_time := current_time

			prev_error := cur_error
			cur_error := current_error
			acc_error := acc_error + cur_error * (cur_time - prev_time)

		end

	reset
		-- Reset error and time
		do
			cur_error := 0
			prev_error := 0
			acc_error := 0
			cur_time := 0
			prev_time := 0
		end

feature

	cur_error, prev_error, acc_error: REAL_64
	cur_time, prev_time: REAL_64
	k_p, k_i, k_d: REAL_64

end -- class
