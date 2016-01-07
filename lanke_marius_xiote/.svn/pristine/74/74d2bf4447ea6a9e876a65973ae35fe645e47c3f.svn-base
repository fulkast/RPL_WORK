note
	description: 	"[
						Contains information about whether the stop was requested for certain behaviour 
						and propogates this information to the children.
					]"
	author: "Rusakov Andrey"
	date: "05.02.2013"

class
	STOP_SIGNALER

create
	make

feature {NONE} -- Initialization

	make
			-- Create an object with an empty list of children.
		do
			is_stop_requested := False
			create children.make (0)
		ensure
			not is_stop_requested
			children.is_empty
		end

feature -- Access

	is_stop_requested: BOOLEAN
			-- Asked for stop?

	set_stop_requested (val: BOOLEAN)
			-- Update the value to `val'.
		do
			is_stop_requested := val
			set_stop_children (val)
		end

	set_stop_children (val: BOOLEAN)
			-- Update the value for all the children to `val'.
		do
			across children as c
			loop
				set_stop_separate (c.item, val)
			end
		end

	token: INTEGER
			-- Token to distinguish between signaler's states.

	set_token (a_token: INTEGER)
			-- Set token's value to `a_token' for the object and for all it's children.
		do
			token := a_token
			set_token_children (a_token)
		end

	set_token_children (a_token: INTEGER)
			-- Set token's value for all the children to `a_token'.
		do
			across children as c
			loop
				set_token_separate (c.item, a_token)
			end
		end

	is_set (a_token: INTEGER; a_val: BOOLEAN): BOOLEAN
			-- Is given combination of `a_token' and `a_val' set for the object and all it's children?
		local
			i: INTEGER
		do
			Result := True
			if token = a_token and is_stop_requested = a_val then
				from
					i := 1
				until
					(i > children.count) or (Result = False)
				loop
					if not is_separate_set (children[i], a_token, a_val)  then
						Result := False
					end
					i := i + 1
				end
			else
				Result := False
			end

			debug ("DEBUG_INFO")
				io.put_string ("is_set: " + Result.out + "%N")
			end
		end

feature -- Children

	add_child (a_child: separate STOP_SIGNALER)
			-- Add `a_child' to the children list.
		require
			not_yet_in_a_list: not has_as_child (a_child)
		do
			children.extend (a_child)
			debug ("DEBUG_INFO")
				io.put_string ("Stop signaler child added%N")
			end
		ensure
			child_added: children.count = old children.count + 1 and has_as_child (a_child)
		end

	remove_child (a_child: separate STOP_SIGNALER)
			-- Remove `a_child' from the children list.
		require
			has_in_a_list: has_as_child (a_child)
		do
			children.start
			children.search (a_child)
			children.remove
			debug ("DEBUG_INFO")
				io.put_string ("Stop signaler child removed%N")
			end
		end

	has_as_child (a_child: separate STOP_SIGNALER): BOOLEAN
			-- Does `children' list contain `a_child'?
		do
			Result := children.has (a_child)
		end

feature {NONE} -- Implementation

	children: ARRAYED_LIST [separate STOP_SIGNALER]
			-- List of the children to propogate stop request.

	set_stop_separate (a_signaler: separate STOP_SIGNALER; a_val: BOOLEAN)
			-- Wrapper to set `a_val' for a separate `a_signaler'.
		do
			a_signaler.set_stop_requested (a_val)
		end

	set_token_separate (a_signaler: separate STOP_SIGNALER; a_token: INTEGER)
			-- Wrapper to set the token value to `a_token' for a separate `a_signaler'.
		do
			a_signaler.set_token (a_token)
		end

	is_separate_set (a_signaler: separate STOP_SIGNALER; a_token: INTEGER; a_val: BOOLEAN): BOOLEAN
			-- Wrapper to check that `a_token' and `a_val' values are set to a separate `a_signaler'.
		do
			Result := a_signaler.is_set(a_token, a_val)
		end
end
