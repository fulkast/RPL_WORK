note
	description: "Representation of graph node used in A star search algorithm."
	author: "Xiaote Zhu"

class
	A_STAR_GRAPH_NODE

inherit
	COMPARABLE

create
	make

feature {NONE} --Initialization

	make (g_node: SPATIAL_GRAPH_NODE; p_cost, h_cost: REAL_64; previous_node_i, current_node_i: INTEGER_32)
			-- Create Current with given attributes.
		do
			graph_node := g_node
			path_cost := p_cost
			heuristic_cost := h_cost
			prev_node_index := previous_node_i
			index := current_node_i
		end

feature -- Comparison

	is_less alias "<" (other: like Current): BOOLEAN
			-- Is current object less than `other'?
		do
			Result := Current.path_cost + Current.heuristic_cost > other.path_cost + other.heuristic_cost
		ensure then
			asymmetric: Result implies not (other < Current)
		end

feature -- Access

	path_cost : REAL_64
		-- Path cost of start node to current node.

	heuristic_cost : REAL_64
		-- Expected cost of current node to goal node.

	graph_node : SPATIAL_GRAPH_NODE
		-- Current graph node.

	index : INTEGER_32
		-- Unique index associated with current node.

	prev_node_index: INTEGER_32
		-- Unique index associated with current node's parent.

	update_path_cost (cost: REAL_64)
		-- Set path_cost to given cost.
		do
			path_cost := cost
		end

	update_prev_node_index (i: INTEGER_32)
		-- Set prev_node_index to given i.
		do
			prev_node_index := i
		end

end -- class
