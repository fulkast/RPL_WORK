note
	description: "State of MOVING_TO_GOAL_BEHAVIOR"
	author: "Xiaote Zhu"

class
	MOVING_TO_GOAL_SIGNALER

feature -- Access

	is_goal_reached: BOOLEAN
			-- Is the goal reached?

	is_goal_unreachable: BOOLEAN
			-- Is the goal unreachable?

	is_go_pending: BOOLEAN
			-- Has the state "go" been handled by the algorithm?

	is_wall_following: BOOLEAN
			-- Has the state "turn" been handled by the algorithm?

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

	clear_all_pendings
			-- Set all pending flags to False.
		do
			is_go_pending := False
			is_wall_following := False
		end
end
