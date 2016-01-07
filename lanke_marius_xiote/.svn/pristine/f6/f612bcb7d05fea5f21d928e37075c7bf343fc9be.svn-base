note
	description: "Calculation class for errors like the heading."
	author: "Group lanke_marius_xiaote"
	date: "13.10.2015"

class
	ERROR_CALCULATIONS

feature

	get_heading_error (cur_x, cur_y, cur_theta, goal_x, goal_y: REAL_64): REAL_64
		local
			x_diff: REAL_64
			y_diff: REAL_64
			tm: TRIGONOMETRY_MATH
		do
			create tm
			x_diff := goal_x - cur_x
			y_diff := goal_y - cur_y
			Result := tm.atan2 (y_diff, x_diff) - cur_theta
		end

end
