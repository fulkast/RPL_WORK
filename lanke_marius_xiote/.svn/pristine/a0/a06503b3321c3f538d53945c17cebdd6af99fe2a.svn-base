
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
		local
			count : INTEGER_32
			start_i, start_j, goal_i, goal_j : INTEGER_32
		do
			path_params := params

			create occupancy_grid_signaler.make_with_topic ({MAP_TOPICS}.map)
				-- Create an occupancy grid
			create path_publisher.make_with_attributes ({MAP_TOPICS}.path)
				-- Create the path publisher object

			grid_graph := make_grid_graph (occupancy_grid_signaler, c_strategy, params.inflate_radius)
				-- Set the grid graph with given constraints and connectivities
			set_start_node (params.start_x, params.start_y, 0)
				-- Set the node to start path searching from

			start_i := convert_x_coord_to_x_index (occupancy_grid_signaler, params.start_x)
			start_j := convert_x_coord_to_x_index (occupancy_grid_signaler, params.start_y)
				-- Start indices

			goal_i := convert_x_coord_to_x_index (occupancy_grid_signaler, params.goal_x)
			goal_j := convert_y_coord_to_y_index (occupancy_grid_signaler, params.goal_y)
				-- Goal indices

			goal_node := grid_graph.node_at (goal_i, goal_j, 1)
				-- Set goal node

			search_strategy := s_strategy
				-- Declare how the graph should be search, with what algorithm?
			create planned_path.make
				-- Object to hold the path planned
		end

feature -- Access

	set_start_node (x, y, z: REAL_64)
			-- Reset start node given coordinates of start position
		local
			i, j, k : INTEGER_32
		do
			i := convert_x_coord_to_x_index (occupancy_grid_signaler, x)
			j := convert_y_coord_to_y_index (occupancy_grid_signaler, y)
			k := convert_z_coord_to_z_index (occupancy_grid_signaler, z)

			start_node := grid_graph.node_at (i, j, k)
		end

	set_start_node_with_odometry (x, y, z: REAL_64)
		-- Reset start node given coordinates of start position plus
		-- the path planning start node
		do
			set_start_node (x + path_params.start_x, y + path_params.start_y, z + path_params.start_z)
		end

	get_cur_goal : POINT_MSG
		-- Find the current position to go to, given a path in a list of points format
		-- TODO: consider adding contract here
		do
			Result := planned_path.item
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
				planned_path.start
			until
				planned_path.exhausted
			loop
				if euclidean_distance (planned_path.item, goal_node.position) < euclidean_distance (cur_position, goal_node.position) then
					if not closest_goal_found then
						closest_goal_index := planned_path.index
						closest_goal_found := True
					elseif euclidean_distance (planned_path.item, cur_position) < euclidean_distance (planned_path.i_th (closest_goal_index), cur_position) then
						closest_goal_index := planned_path.index
					end
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
		do
			planned_path := search_strategy.search_path (grid_graph, start_node, goal_node)
				-- Use prescribed strategy to search for a path
			path_publisher.update_msg (planned_path)
				-- Update the publisher with a path, if found
			path_publisher.publish
				-- Publish with the new values
		end

feature {NONE}

	grid_graph : GRID_GRAPH
			-- 2D grid graph.

	occupancy_grid_signaler: separate OCCUPANCY_GRID_SIGNALER
			-- 2D grid map.

	path_publisher: PATH_MSG_PUBLISHER
			-- Publisher object for paths.

	planned_path : LINKED_LIST [POINT_MSG]
			-- Planned path.

	start_node, goal_node : SPATIAL_GRAPH_NODE
			-- Graph nodes of the start position and the goal position

	search_strategy: SEARCH_STRATEGY
			-- Strategy used for searching a path.

	path_params: PATH_PLANNER_PARAMETER
			-- Parameters defining the path planner scheme

end -- class
