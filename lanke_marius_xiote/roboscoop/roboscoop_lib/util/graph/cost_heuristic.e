note
	description : "Strategy for calculating path cost between two nodes of the graph."
	author		: "Rusakov Andrey"
	date        : "29.10.2015"

deferred class
	COST_HEURISTIC

feature -- Access

	cost (a, b: separate GRAPH_NODE): REAL_64
			-- Path cost between two nodes.
		deferred
		end
end
