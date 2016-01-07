note
	description: "Robot State."
	author: "Xiaote Zhu"

class
	STATE_SIGNALER

create
	make

feature {NONE} -- Initialization

	make
		-- Set the initial state to "go" state.
		do
			is_go := True
		end

feature -- Access

	is_goal_reached: BOOLEAN
			-- Is the goal reached?

	is_goal_unreachable: BOOLEAN
			-- Is the goal unreachable?

	is_go: BOOLEAN
			-- Is at "go" state?

	is_wall_following: BOOLEAN
			-- Is at "wall following" state?

	is_transiting: BOOLEAN
			-- Is at "transiting" state?

	is_waiting: BOOLEAN
			-- Is at "waiting" state?

	set_is_goal_reached
			-- Set is_goal_reached value to True
		do
			clear_all_states
			is_goal_reached := True
		end

	set_is_goal_unreachable
			-- Set is_goal_unreachable value to True
		do
			clear_all_states
			is_goal_unreachable := True
		end

	set_is_go
			-- Set is_go value equal to True
		do
			clear_all_states
			is_go := True
		end

	set_is_wall_following
			-- Set is_turn_pending value equal to True
		do
			clear_all_states
			is_wall_following := True
		end

	set_is_transiting
			-- Set is_transiting value equal to True
		do
			clear_all_states
			is_transiting := True
		end

	set_is_waiting
			-- Set is waiting value equal to True
		do
			clear_all_states
			is_waiting := True
		end

	clear_all_states
			-- Set all states to False.
		do
			is_go := False
			is_wall_following := False
			is_transiting := False
			is_goal_reached := False
			is_goal_unreachable := False
			is_waiting := False
		end

end -- class
