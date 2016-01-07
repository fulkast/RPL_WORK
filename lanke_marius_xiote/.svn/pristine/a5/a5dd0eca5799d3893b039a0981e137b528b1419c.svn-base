note
	description: "Implementation of PID controller."
	author: "Xiaote Zhu"

class
	PID_CONTROLLER

create
	make

feature

	tm: TRIGONOMETRY_MATH
	goal_x, goal_y: REAL_64
	cur_error, prev_error, acc_error: REAL_64
	cur_time, prev_time: REAL_64

feature -- Constants

	k_p: REAL_64 = 0.5
	k_i: REAL_64 = 0.0
	k_d: REAL_64 = 0.0

feature -- Initialization

	make (g_x, g_y: REAL_64)
			-- Create current with given attributes.
		do
			goal_x := g_x
			goal_y := g_y
			create tm
		end

feature

	update_heading (robot_x, robot_y, robot_theta: REAL_64; current_time: REAL_64): REAL_64
			-- Return new v_theta.
		local
			u: REAL_64
			deri_term: REAL_64
		do
			prev_time := cur_time
			cur_time := current_time
			update_error(robot_x, robot_y, robot_theta)

			if  cur_time = prev_time then
				deri_term := 0.0
			else
				deri_term := (cur_error - prev_error) / (cur_time - prev_time)
			end

			Result:= k_p * cur_error + k_i * acc_error + k_d * deri_term
		end

	update_error (robot_x, robot_y, robot_theta: REAL_64)
			-- Update prev_error, cur_error and acc_error accordingly.
		local
			x_diff: REAL_64
			y_diff: REAL_64
		do
			x_diff := goal_x - robot_x
			y_diff := goal_y - robot_y

			prev_error := cur_error
			cur_error := tm.atan2 (y_diff, x_diff) - robot_theta
			acc_error := acc_error + cur_error * (cur_time - prev_time)
		end
end
