note
	description: "State of the WANDER_BEHAVIOUR."
	author: "Rusakov Andrey"
	date: "19.09.2013"

class
	WANDER_SIGNALER

feature -- Access

	is_lifted_pending: BOOLEAN
			-- Has the state "lifted" been handled by the algorithm?

	is_go_pending: BOOLEAN
			-- Has the state "go" been handled by the algorithm?

	is_turn_pending: BOOLEAN
			-- Has the state "turn" been handled by the algorithm?

	is_huge_pending: BOOLEAN
			-- Has the state "huge" been handled by the algorithm?

	set_is_lifted_pending (a_val: BOOLEAN)
			-- Set `is_lifted_pending' value equal to `a_val'.
		do
			is_lifted_pending := a_val
		end

	set_is_go_pending (a_val: BOOLEAN)
			-- Set `is_go_pending' value equal to `a_val'.
		do
			is_go_pending := a_val
		end

	set_is_turn_pending (a_val: BOOLEAN)
			-- Set `is_turn_pending' value equal to `a_val'.
		do
			is_turn_pending := a_val
		end

	set_is_huge_pending (a_val: BOOLEAN)
			-- Set `is_huge_pending' value equal to `a_val'.
		do
			is_huge_pending := a_val
		end

	clear_all_pendings
			-- Set all pending flags to False.
		do
			is_lifted_pending := False
			is_go_pending := False
			is_turn_pending := False
			is_huge_pending := False
		end
end
