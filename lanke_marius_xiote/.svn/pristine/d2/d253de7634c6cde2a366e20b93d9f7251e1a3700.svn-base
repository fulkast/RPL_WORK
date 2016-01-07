note
	description: "State of MOVING_TO_GOAL_BEHAVIOR"
	author: "Xiaote Zhu"

class
	MOVING_TO_GOAL_SIGNALER

create
	make

feature -- Initialization

	make (goal_x, goal_y : REAL_64)
		do
			create goal_point.make_with_values (goal_x, goal_y, 0.0)
			create v_leave.make_empty
			create wall_following_start_point.make_empty

			d_min := {REAL_64}.positive_infinity
		end

feature -- Access

	is_wall_following_start_set: BOOLEAN
			-- Is wall_following_start_point and wall_following_start_theta set yet?

	is_v_leave_found: BOOLEAN
			-- Is v_leave found yet?

	d_min: REAL_64
			-- Minimum distance between robot and the goal so far.

	goal_point: POINT_MSG
			-- goal position

	timestamp_obstacle_last_seen: REAL_64
			-- timestamp when obstacle was last seen.

	v_leave: POINT_MSG
			-- v_leave for transition state.

	wall_following_start_point: POINT_MSG
			-- start_point for wall following

	wall_following_start_theta: REAL_64
			-- start_theta for wall following

	set_is_wall_following_start_set (a_val: BOOLEAN)
			-- Set is_wall_following_start_set value to a_val
		do
			is_wall_following_start_set := a_val
		end

	set_is_v_leave_found (a_val: BOOLEAN)
			-- Set is_v_leave_found value to a_val
		do
			is_v_leave_found := a_val
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

	set_wall_following_start_point (a_val: separate POINT_MSG)
			-- Set wall_following_start_point
		do
			create wall_following_start_point.make_from_separate (a_val)
		end

	set_wall_following_start_theta (a_val: REAL_64)
			-- Set wall_following_start_theta
		do
			wall_following_start_theta := a_val
		end
end
