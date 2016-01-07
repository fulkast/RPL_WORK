note
	description: "Path cost by euclidean distance"
	author: "Xiaote Zhu"

class
	EUCLIDEAN_DISTANCE_HEURISTIC

inherit
	COST_HEURISTIC

feature -- Access

	cost (a, b: separate SPATIAL_GRAPH_NODE): REAL_64
			-- Path cost between two nodes.
		do
			Result := a.euclidean_distance (a.position, b.position)
		end

end -- class
