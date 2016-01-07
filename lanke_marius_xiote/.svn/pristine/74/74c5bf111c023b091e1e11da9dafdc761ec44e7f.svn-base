note
	description : "Graph in 3D-space."
	author		: "Rusakov Andrey"
	date        : "04.02.2015"

class
	SPATIAL_GRAPH

inherit
	GRAPH
		redefine
			nodes, add_node
		end

create
	make_empty

feature {NONE} -- Initialization

	make_empty
			-- Create current with no nodes.
		do
			create {ARRAYED_LIST[SPATIAL_GRAPH_NODE]}nodes.make (0)
		end

feature -- Access

	nodes: LIST[SPATIAL_GRAPH_NODE]
			-- All the nodes presenting the Current graph.

	add_node (n: SPATIAL_GRAPH_NODE)
			-- Add `n' to the Current graph.
		do
			if not nodes.has (n) then
				nodes.extend (n)
			end
		end

	add_obstacle_by_distance (x_min, x_max, y_min, y_max, z_min, z_max: REAL_64)
			-- Remove nodes which reside within defined parallelepiped.
		require
			x_min <= x_max
			y_min <= y_max
			z_min <= z_max
		local
			p: POINT_MSG
		do
			across nodes as n loop
				p := n.item.position
				if 	p.x >= x_min and p.x <= x_max and
					p.y >= y_min and p.y <= y_max and
					p.z >= z_min and p.z <= z_max then
					n.item.disconnect_all_neighbours
				end
			end
		end
end
