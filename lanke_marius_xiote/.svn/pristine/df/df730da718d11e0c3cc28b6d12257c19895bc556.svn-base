
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
			path_params := params

			create occupancy_grid_signaler.make_with_topic ({MAP_TOPICS}.map)
			create path_publisher.make_with_topic ({MAP_TOPICS}.path)
			path_publisher.advertize (1, False)

			grid_graph := make_grid_graph (occupancy_grid_signaler, c_strategy, params.inflate_radius)
			set_start_node (params.start_x, params.start_y, 0)

			start_i := convert_x_coord_to_x_index (occupancy_grid_signaler, params.start_x)
			start_j := convert_x_coord_to_x_index (occupancy_grid_signaler, params.start_y)

			goal_i := convert_x_coord_to_x_index (occupancy_grid_signaler, params.goal_x)
			goal_j := convert_y_coord_to_y_index (occupancy_grid_signaler, params.goal_y)

--			start_node := grid_graph.node_at (start_i, start_j, 1)
			goal_node := grid_graph.node_at (goal_i, goal_j, 1)
			robot_node := start_node

			debug
				io.put_string ("start_i: " + start_i.out + " start_j: " + start_j.out + "%N")
				io.put_string ("goal_i: " + goal_i.out + " goal_j: " + goal_j.out + "%N")
			end


			search_strategy := s_strategy
			create planned_path.make
			create tm
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
			debug
				io.put_string ("start_node: " + start_node.position.out + "%N")
			end
		end

	set_start_node_with_odometry (x, y, z: REAL_64)
		do
			set_start_node (x + path_params.start_x, y + path_params.start_y, z + path_params.start_z)
			debug
				io.put_string ("start_node_odom: " + start_node.position.out + "%N")
			end
		end

	get_cur_goal (odom: separate ODOMETRY_SIGNALER; robot_point: separate POINT_MSG) : POINT_MSG
		-- TODO: consider adding contract here
		local
			i, j, k: INTEGER_32
			index_of_closest_node_in_planned_path: INTEGER
		do
			i := convert_x_coord_to_x_index (occupancy_grid_signaler, odom.x)
			j := convert_y_coord_to_y_index (occupancy_grid_signaler, odom.y)
			k := convert_z_coord_to_z_index (occupancy_grid_signaler, odom.z)

			robot_node := grid_graph.node_at (i, j, k)

			if planned_path.has (robot_node.position) then
				-- If current robot_node position is in planned_path
				planned_path.go_i_th (planned_path.index_of (robot_node.position, 1) + 1)
			else
				-- If current position is not in planned path
				-- Set cur_goal to closest node in planned_path
				from
					planned_path.start
				until
					planned_path.exhausted
				loop
					if tm.euclidean_distance (planned_path.item, robot_point) < tm.euclidean_distance (planned_path.i_th (index_of_closest_node_in_planned_path), robot_point) then
						index_of_closest_node_in_planned_path := planned_path.index
					end
					planned_path.forth
				end
				-- Go to next element in planned_path
				planned_path.go_i_th (index_of_closest_node_in_planned_path)
			end

			Result := planned_path.item

			debug
				io.put_string ("odom: " + odom.x.out + " | " + odom.y.out + "%N"
								+ "robot_node: " + robot_node.position.x.out + " | " + robot_node.position.y.out + "%N"
								+ "p_p.index: " + planned_path.index.out + " | count: " + planned_path.count.out + "%N"
								+ "planned_path.index_of (robot_node.position, 1): " + planned_path.index_of (robot_node.position, 1).out
								+ "%N")
			end
		end

	move_to_next_goal: POINT_MSG
		-- TODO: consider adding contract here
		require

		do
			planned_path.forth
			Result := planned_path.item
			debug
				io.put_string ("p_p.index: " + planned_path.index.out + "%N"
								+ "item.pos: " + planned_path.item.out + "%N"
								+ "robot_node: " + robot_node.position.x.out + " | " + robot_node.position.y.out + "%N")
			end
		end

	search_path
			-- Search path.
		local
			poses : ARRAY[POSE_STAMPED_MSG]
			header: HEADER_MSG
			pose: POSE_MSG
			pose_stamped_msg : POSE_STAMPED_MSG
			i : INTEGER
			header_frame: STRING
		do
			header_frame := "/map"
			planned_path := search_strategy.search_path (grid_graph, start_node, goal_node)
			debug
				io.put_string ("planned_path " + planned_path.count.out
								+ "%Nstart_n: " + start_node.position.out
								+ "goal_n: " + goal_node.position.out
								+ "%N")
			end
			create poses.make_filled (create {POSE_STAMPED_MSG}.make_empty, 1, planned_path.count)

			if planned_path.count = 0 then
				io.put_string ("NO PATH EXISTS.")
				io.put_new_line
			end
			debug
				io.putstring ("The path length is: " + planned_path.count.out + "%N")
			end
			from
				planned_path.start
			until
				planned_path.exhausted
			loop
				i := i + 1
				header := create {HEADER_MSG}.make_now (header_frame)
				pose := create {POSE_MSG}.make_with_values (planned_path.item, create {QUATERNION_MSG}.make_empty)
				pose_stamped_msg := create {POSE_STAMPED_MSG}.make_with_values (header, pose)
				poses.put (pose_stamped_msg, i)
				planned_path.forth
			end
			path_publisher.publish (create {PATH_MSG}.make_with_values (create {HEADER_MSG}.make_now (header_frame), poses))
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

	start_node, goal_node, robot_node : SPATIAL_GRAPH_NODE
			-- Graph nodes of the start position and the goal position

	search_strategy: SEARCH_STRATEGY
			-- Strategy used for searching a path.

	path_params: PATH_PLANNER_PARAMETER

	tm: TRIGONOMETRY_MATH

end -- class
