note
	description: "Main class of path planning."
	author: "Xiaote Zhu"

class
	PATH_PLANNER

inherit
	GRAPH_MAKER

create
	make

feature {NONE} -- Initialization

	make (c_strategy: separate GRID_CONNECTIVITY_STRATEGY; s_strategy: SEARCH_STRATEGY; params: PATH_PLANNER_PARAMETER)
			-- Create a path planner.
		local
			count : INTEGER_32
			start_i, start_j, goal_i, goal_j : INTEGER_32
		do
			create occupancy_grid_signaler.make_with_topic ({MAP_TOPICS}.map)
			create path_publisher.make_with_topic ({MAP_TOPICS}.path)
			path_publisher.advertize (1, False)

			grid_graph := make_grid_graph (occupancy_grid_signaler, c_strategy, params.inflate_radius)

			set_start_node (params.goal_x, params.goal_y, 0)

			goal_i := convert_x_coord_to_x_index (occupancy_grid_signaler, params.goal_x)
			goal_j := convert_y_coord_to_y_index (occupancy_grid_signaler, params.goal_y)
			goal_node := grid_graph.node_at (goal_i, goal_j, 1)

			debug
				io.put_string ("start_i: " + start_i.out + " start_j: " + start_j.out + "%N")
				io.put_string ("goal_i: " + goal_i.out + " goal_j: " + goal_j.out + "%N")
			end

			search_strategy := s_strategy
			create planned_path.make
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

	get_cur_goal : POINT_MSG
		-- TODO: consider adding contract here
		do
			Result := planned_path.item
		end

	move_to_next_goal
		-- TODO: consider adding contract here
		do
			planned_path.forth
		end

	search_path
			-- Search path.
		local
			poses : ARRAY[POSE_STAMPED_MSG]
			header: HEADER_MSG
			pose: POSE_MSG
			pose_stamped_msg : POSE_STAMPED_MSG
			i : INTEGER
		do
			planned_path := search_strategy.search_path (grid_graph, start_node, goal_node)
			create poses.make_filled (create {POSE_STAMPED_MSG}.make_empty, 1, planned_path.count)

			if planned_path.count = 0 then
				io.put_string ("NO PATH EXISTS.")
				io.put_new_line
			end

			from
				planned_path.start
			until
				planned_path.exhausted
			loop
				i := i + 1
				header := create {HEADER_MSG}.make_now ("/map")
				pose := create {POSE_MSG}.make_with_values (planned_path.item, create {QUATERNION_MSG}.make_empty)
				pose_stamped_msg := create {POSE_STAMPED_MSG}.make_with_values (header, pose)
				poses.put (pose_stamped_msg, i)
				planned_path.forth
			end
			path_publisher.publish (create {PATH_MSG}.make_with_values (create {HEADER_MSG}.make_now ("/map"), poses))
		end

feature {NONE}

	grid_graph : GRID_GRAPH
			-- 2D grid graph.

	occupancy_grid_signaler: separate OCCUPANCY_GRID_SIGNALER
			-- 2D grid map.

	path_publisher: ROS_PUBLISHER [PATH_MSG]
			-- Publisher object.

	planned_path : LINKED_LIST [POINT_MSG]
			-- Planned path.

	start_node, goal_node : SPATIAL_GRAPH_NODE
			-- Graph nodes of the start position and the goal position

	search_strategy: SEARCH_STRATEGY
			-- Strategy used for searching a path.
end
