note
	description: "Path cost by manhattan distance"
	author: "Xiaote Zhu"

class
	MANHATTAN_DISTANCE_HEURISTIC

inherit
	COST_HEURISTIC

feature -- Access

	cost (a, b: separate SPATIAL_GRAPH_NODE): REAL_64
			-- Path cost between two nodes.
		do
			Result := a.manhattan_distance (a.position, b.position)
		end

end -- class
