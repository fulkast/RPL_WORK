note
	description: "State of MOVING_TO_GOAL_BEHAVIOR"
	author: "Xiaote Zhu"

class
	MOVING_TO_GOAL_SIGNALER

create
	make

feature

	make
		do
			create v_leave.make_empty
		end

feature -- Access

	is_goal_reached: BOOLEAN
			-- Is the goal reached?

	is_goal_unreachable: BOOLEAN
			-- Is the goal unreachable?

	is_go_pending: BOOLEAN
			-- Has the state "go" been handled by the algorithm?

	is_wall_following: BOOLEAN
			-- Has the state "turn" been handled by the algorithm?

	is_wall_first_detected: BOOLEAN
			-- Is the wall first detected?

	is_transiting: BOOLEAN
			-- Has the state "transit" been handled by the algorithm?

	d_min: REAL_64
			-- Minimum distance between robot and the goal so far.

	v_leave: POINT_MSG
			-- v_leave for transition state.

	set_is_goal_reached (a_val: BOOLEAN)
			-- Set is_goal_reached value to a_val
		do
			is_goal_reached := a_val
		end

	set_is_goal_unreachable (a_val: BOOLEAN)
			-- Set is_goal_unreachable value to a_val
		do
			is_goal_unreachable := a_val
		end

	set_is_go_pending (a_val: BOOLEAN)
			-- Set is_go_pending value equal to a_val.
		do
			is_go_pending := a_val
		end

	set_is_wall_following (a_val: BOOLEAN)
			-- Set is_turn_pending value equal to a_val.
		do
			is_wall_following := a_val
		end

	set_is_wall_first_detected (a_val: BOOLEAN)
			-- Set is_wall_first_detected to a_val
		do
			is_wall_first_detected := a_val
		end

	set_is_transiting (a_val: BOOLEAN)
			-- Set is_transiting value equal to a_val
		do
			is_transiting := a_val
		end

	set_d_min (a_val: REAL_64)
			-- Set d_min value equal to a_val
		do
			d_min := a_val
		end

	set_v_leave (a_val: separate POINT_MSG)
			-- Set v_leave value equal to a_val
		do
			create v_leave.make_with_values (a_val.x, a_val.y, a_val.z)
		end

	clear_all_pendings
			-- Set all pending flags to False.
		do
			is_go_pending := False
			is_wall_following := False
			is_transiting := False
		end
end
