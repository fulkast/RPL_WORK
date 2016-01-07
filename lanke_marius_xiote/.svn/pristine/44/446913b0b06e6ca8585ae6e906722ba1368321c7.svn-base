note
	description : "Abstract graph consisted of nodes."
	author		: "Rusakov Andrey"
	date        : "04.02.2015"

deferred class
	GRAPH

feature -- Access

	nodes: LIST[GRAPH_NODE]
			-- All the nodes presenting the Current graph.

	add_node (n: GRAPH_NODE)
			-- Add `n' to the Current graph.
		do
			if not nodes.has (n) then
				nodes.extend (n)
			end
		end
end
