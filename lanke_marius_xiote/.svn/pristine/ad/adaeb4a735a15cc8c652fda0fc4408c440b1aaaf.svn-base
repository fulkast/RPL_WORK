note
	description : "Abstract strategy for connecting nodes of the grid graph."
	author		: "Rusakov Andrey"
	date        : "06.02.2015"

deferred class
	GRID_CONNECTIVITY_STRATEGY

feature -- Access

	connect (g: GRID_GRAPH)
			-- Create connections.
		deferred
		end

feature {NONE} -- Implementation

	connect_node (g: GRID_GRAPH; i1, j1, k1, i2, j2, k2: INTEGER)
			-- Connect two nodes with given indices in `g'.
		local
			node, another_node: SPATIAL_GRAPH_NODE
		do
			if g.is_valid_index (i1, j1, k1) and g.is_valid_index (i2, j2, k2) then
				node := g.node_at (i1, j1, k1)
				another_node := g.node_at (i2, j2, k2)
				if not node.is_connected (another_node) then
					node.connect (another_node)
				end
			end
		end
end
