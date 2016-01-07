note
	description: "State of MOVING_TO_GOAL_BEHAVIOR"
	author: "Xiaote Zhu"

class
	MOVING_TO_GOAL_SIGNALER

create
	make

feature {NONE} -- Initialization

	make (goal_x, goal_y : REAL_64)
		do
			create goal_point.make_with_values (goal_x, goal_y, 0.0)
			create v_leave.make_empty

			d_min := {REAL_64}.positive_infinity
		end

feature -- Access

	is_v_leave_found: BOOLEAN
			-- Is v_leave found yet?

	is_path_planned: BOOLEAN
			-- Is path planned yet?

	need_to_reset_cur_goal: BOOLEAN
			-- Do we need to reset cur_goal?

	d_min: REAL_64
			-- Minimum distance between robot and the goal so far.

	goal_point: POINT_MSG
			-- goal position.

	timestamp_obstacle_last_seen: REAL_64
			-- timestamp when obstacle was last seen.

	v_leave: POINT_MSG
			-- v_leave for transition state.

	set_is_v_leave_found (a_val: BOOLEAN)
			-- Set is_v_leave_found value to a_val
		do
			is_v_leave_found := a_val
		end

	set_is_path_planned (a_val: BOOLEAN)
			-- Set is_path_planned value to a_val
		do
			is_path_planned := a_val
		end

	set_need_to_reset_cur_goal (a_val: BOOLEAN)
			-- Set need_to_reset_cur_goal to a_val
		do
			need_to_reset_cur_goal := a_val
		end

	set_d_min (a_val: REAL_64)
			-- Set d_min value equal to a_val
		do
			d_min := a_val
		end

	set_timestamp_obstacle_last_seen (a_val: BOOLEAN; b_val: REAL_64)
			-- Set timestamp when obstacle was last seen
		do
			if a_val then
				timestamp_obstacle_last_seen := b_val
			end
		end

	set_v_leave (a_val: separate POINT_MSG)
			-- Set v_leave value equal to a_val
		do
			create v_leave.make_from_separate (a_val)
		end

end -- class
