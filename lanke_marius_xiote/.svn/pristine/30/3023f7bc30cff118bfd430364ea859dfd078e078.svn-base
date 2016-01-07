note
	description: "Main class of path planning"
	author: "Xiaote Zhu"

class
	PATH_PLANNER

inherit
	GRAPH_MAKER
	TRIGONOMETRY_MATH

create
	make

feature {NONE} -- Initialization

	make (c_strategy: separate GRID_CONNECTIVITY_STRATEGY; s_strategy: SEARCH_STRATEGY; params: PATH_PLANNER_PARAMETER)
			-- Create a path planner.
		do
			path_params := params

			create occupancy_grid_signaler.make_with_topic ({MAP_TOPICS}.map)
				-- Create an occupancy grid
			create path_publisher.make_with_attributes ({MAP_TOPICS}.path)
				-- Create the path publisher object

			grid_graph := make_grid_graph (occupancy_grid_signaler,
										   c_strategy,
										   params.inflate_radius)
				-- Set the grid graph with given constraints and connectivities
			start_node := convert_coord_to_node (params.start_x,
			 									 params.start_y,
			 									 params.start_z)
			goal_node := convert_coord_to_node (params.goal_x,
												params.goal_y,
												params.goal_z)


			create destination_points.make_filled (create {POINT_MSG}.make_empty, 1, params.number_of_destinations)
			destination_points.put(create {POINT_MSG}.make_with_values(params.start_x,
															     params.start_y,
															     params.start_z), 1)
			destination_points.put(create {POINT_MSG}.make_with_values(params.goal_x,
																 params.goal_y,
																 params.goal_z),
																 params.number_of_destinations)
			destination_points.put(create {POINT_MSG}.make_with_values(params.viapoint1_x,
																 params.viapoint1_y,
																 params.viapoint1_z), 2)
			destination_points.put(create {POINT_MSG}.make_with_values(params.viapoint2_x,
																 params.viapoint2_y,
																 params.viapoint2_z), 3)

			create destination_angles.make_filled (0, 1, params.number_of_destinations)
			destination_angles.put (params.start_theta, 1)
			destination_angles.put (params.viapoint1_theta, 2)
			destination_angles.put (params.viapoint2_theta, 3)
			destination_angles.put (params.goal_theta, 4)

			cur_wait_point_index := params.cur_wait_point_index

			search_strategy := s_strategy
			create planned_path.make
		end

feature -- Access

	get_final_goal : POINT_MSG
			-- Get position of the final goal.
		do
			Result := destination_points [destination_points.count]
		end

	get_start : POINT_MSG
			-- Get position of the start.
		do
			Result := destination_points [1]
		end

	get_cur_goal : POINT_MSG
			-- Find the current position to go to, given a path in a list of points format
		do
			Result := planned_path.item
		end

	get_cur_wait_angle : REAL_64
			-- Get angle of the next wait point.
		do
			Result := destination_angles [cur_wait_point_index]
		end

	get_cur_wait_point : POINT_MSG
			-- Get position of the next wait point.
		do
			Result := destination_points [cur_wait_point_index]
		end

	move_to_next_wait_point
			-- Advance cursor to the next wait poin.
		do
			if cur_wait_point_index < destination_points.upper then
				cur_wait_point_index := cur_wait_point_index + 1
			else
				cur_wait_point_index := 1
			end
		end

	jump_to_next_closest_goal (cur_position: separate POINT_MSG)
			-- Given not on a path, find closest point on path to track back to
		local
			closest_goal_index: INTEGER
				-- The closest point's index
			closest_goal_found: BOOLEAN
				-- Is there even a closest point?
		do
			from
			until
				planned_path.exhausted
			loop
				if not closest_goal_found then
					closest_goal_index := planned_path.index
					closest_goal_found := True
				elseif euclidean_distance (planned_path.item, cur_position) < euclidean_distance (planned_path.i_th (closest_goal_index), cur_position) then
					closest_goal_index := planned_path.index
				end
				planned_path.forth
			end
			planned_path.go_i_th (closest_goal_index + 1)
		end

	move_to_next_goal
			-- Advances the cursor which points to the item that corresponds to the next point the robot should head to
			-- TODO: consider adding contract here
		do
			if (planned_path.index + path_params.jump_in_number_of_nodes) < planned_path.count then
				planned_path.go_i_th (planned_path.index + path_params.jump_in_number_of_nodes)
			else
				planned_path.finish
			end
		end

	search_path
			-- Search path.
		local
			i : INTEGER
			path : LINKED_LIST [POINT_MSG]
		do
			from
				i := destination_points.lower
			until
				i >= destination_points.upper
			loop
				path := search_strategy.search_path (grid_graph, convert_pt_to_node(destination_points[i]), convert_pt_to_node(destination_points[i + 1]))
				planned_path.append (path)
				i := i + 1
			end

			path_publisher.update_msg (planned_path)
				-- Update the publisher with a path, if found
			path_publisher.publish
				-- Publish with the new values
		end

feature {NONE} -- Implementation

	cur_wait_point_index : INTEGER

	convert_coord_to_node (x, y, z: REAL_64) : SPATIAL_GRAPH_NODE
			-- Find graph node that corresponds to the given x, y, z coordinate.
		local
			i, j, k : INTEGER_32
		do
			i := convert_x_coord_to_x_index (occupancy_grid_signaler, x)
			j := convert_y_coord_to_y_index (occupancy_grid_signaler, y)
			k := convert_z_coord_to_z_index (occupancy_grid_signaler, z)

			Result := grid_graph.node_at (i, j, k)
		end

	convert_pt_to_node (p: POINT_MSG) : SPATIAL_GRAPH_NODE
		do
			Result := convert_coord_to_node(p.x, p.y, p.z)
		end

feature {NONE}

	grid_graph : GRID_GRAPH
			-- 2D grid graph.

	occupancy_grid_signaler: separate OCCUPANCY_GRID_SIGNALER
			-- 2D grid map.

	path_publisher: POINT_MSG_LIST_TO_PATH_MSG
			-- Publisher object for paths.

	planned_path : LINKED_LIST [POINT_MSG]
			-- Planned path.

	destination_points : ARRAY [POINT_MSG]
			-- List of positions need to be visited.

	destination_angles : ARRAY [REAL_64]
			-- Angles that correspond to each destination.

	start_node, goal_node : SPATIAL_GRAPH_NODE
			-- Graph nodes of the start position and the goal position

	search_strategy: SEARCH_STRATEGY
			-- Strategy used for searching a path.

	path_params: PATH_PLANNER_PARAMETER
			-- Parameters defining the path planner scheme

end -- class
