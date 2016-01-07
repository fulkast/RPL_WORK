note
	description: "Implementation of A star algorithm."
	author: "Xiaote Zhu"

class
	A_STAR_SEARCH

inherit
	SEARCH_STRATEGY

create
	make

feature {NONE} -- Initialization

	make (heur_cost_stra, path_cost_stra: COST_HEURISTIC)
			-- Create Current with given attributes.
		do
			heur_cost_strategy := heur_cost_stra
			path_cost_strategy := path_cost_stra
		end

feature -- Access

	search_path (graph: SPATIAL_GRAPH;
					start_node, goal_node: SPATIAL_GRAPH_NODE) : LINKED_LIST [POINT_MSG]
		-- Search a shortest path from start node to goal node.
		local
			queue: LINKED_PRIORITY_QUEUE [A_STAR_GRAPH_NODE]
			node_to_index_mapping : HASH_TABLE [INTEGER_32, SPATIAL_GRAPH_NODE]
			a_star_nodes: ARRAY [A_STAR_GRAPH_NODE]
			i : INTEGER_32
			new_node, cur_node, existing_node : A_STAR_GRAPH_NODE
			cur_neighbor : SPATIAL_GRAPH_NODE
			goal_reached : BOOLEAN
			path : LINKED_LIST [POINT_MSG]
		do
			create queue.make
			create node_to_index_mapping.make (graph.nodes.count)

			i := i + 1
			new_node := create {A_STAR_GRAPH_NODE}.make (start_node,
															0,
															heur_cost_strategy.cost (start_node, goal_node),
															0,
															i)
			queue.put (new_node)
			node_to_index_mapping.put (i, start_node)
			create a_star_nodes.make_filled (new_node, 1, graph.nodes.count)

			from
			until
				queue.is_empty or goal_reached
			loop
				cur_node := queue.item
				queue.remove
				if cur_node.graph_node.is_equal (goal_node) then
					-- Goal reached
					goal_reached := True

				else
					-- Loop through its neighbors
					from
						cur_node.graph_node.neighbours.start
					until
						cur_node.graph_node.neighbours.exhausted
					loop
						cur_neighbor := cur_node.graph_node.neighbours.item
						if not node_to_index_mapping.has_key (cur_neighbor) then
							-- Node has not been seen yet.
							i := i + 1
							new_node := create {A_STAR_GRAPH_NODE}.make (cur_neighbor,
																			path_cost (cur_node, cur_neighbor),
																			heur_cost_strategy.cost (cur_neighbor, goal_node),
																			cur_node.index,
																			i)
							queue.put (new_node)
							node_to_index_mapping.put (i, cur_neighbor)
							a_star_nodes.put (new_node, i)

						else
							existing_node := a_star_nodes.at (node_to_index_mapping.item (cur_neighbor))
							if shorter_path_found (cur_node, existing_node) then
								-- Node has been seen but a shorter path is found.
								existing_node.update_path_cost (path_cost (cur_node, cur_neighbor))
								existing_node.update_prev_node_index (cur_node.index)
								queue.put (existing_node)
							end
						end
						cur_node.graph_node.neighbours.forth
					end
				end
			end

			create path.make
			if not goal_reached then
				-- Path does not exist.
				Result := path
			else
				-- Trace back to create a valid path.
				from
					cur_node := a_star_nodes.at (node_to_index_mapping.item ((goal_node)))
					path.put_front (cur_node.graph_node.position)
				until
					cur_node.prev_node_index <= 0
				loop
					cur_node := a_star_nodes.at (cur_node.prev_node_index)
					path.put_front (cur_node.graph_node.position)
				end

				Result := path
			end
		end

feature {NONE} -- Implementation

	heur_cost_strategy: COST_HEURISTIC
			-- Cost heuristic used for calculating expected cost between two nodes.

	path_cost_strategy: COST_HEURISTIC
			-- Cost heuristic used for calculating actual path cost between two nodes.

	path_cost (parent_node: A_STAR_GRAPH_NODE; child_node: GRAPH_NODE) : REAL_64
			-- Calculate the path cost for the child_node given its parent_node.
		do
			Result := parent_node.path_cost + path_cost_strategy.cost (parent_node.graph_node, child_node)
		end

	shorter_path_found (parent_node, child_node: A_STAR_GRAPH_NODE) : BOOLEAN
			-- Check if the path to child_node via parent_node is shorter than the existing
			-- path.
		do
			Result := path_cost (parent_node, child_node.graph_node) < child_node.path_cost
		end

end -- class
