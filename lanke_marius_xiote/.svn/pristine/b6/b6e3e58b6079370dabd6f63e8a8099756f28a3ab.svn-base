
note
	description: "Main class of path planning."
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
			create path_publisher.make_with_attributes ({MAP_TOPICS}.path)
			create point_publisher.make_with_attributes("Goal")

			grid_graph := make_grid_graph (occupancy_grid_signaler, c_strategy, params.inflate_radius)
			set_start_node (params.start_x, params.start_y, 0)

			start_i := convert_x_coord_to_x_index (occupancy_grid_signaler, params.start_x)
			start_j := convert_x_coord_to_x_index (occupancy_grid_signaler, params.start_y)

			goal_i := convert_x_coord_to_x_index (occupancy_grid_signaler, params.goal_x)
			goal_j := convert_y_coord_to_y_index (occupancy_grid_signaler, params.goal_y)

--			start_node := grid_graph.node_at (start_i, start_j, 1)
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

	get_cur_goal : POINT_MSG
		-- TODO: consider adding contract here
		do
			Result := planned_path.item
			debug
				io.put_string ("cur_goal_pos: " + planned_path.item.out + "%N")
			end
		end


	jump_to_next_closest_goal (cur_position: separate POINT_MSG)
		local
			closest_goal_index: INTEGER
			closest_goal_found: BOOLEAN
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
			debug
				io.put_string ("POS_JUMP%N")
			end
		end

	move_to_next_goal
		-- TODO: consider adding contract here
		require

		do
			if (planned_path.index + path_params.jump_in_number_of_nodes) < planned_path.count then
				planned_path.go_i_th (planned_path.index + path_params.jump_in_number_of_nodes)
			else
				planned_path.finish
			end

			debug
				io.put_string ("p_p.index: " + planned_path.index.out + "%N"
								+ "item.pos: " + planned_path.item.out + "%N")
			end
			debug
				io.put_string ("POS_NEXT%N")
			end
		end

	search_path
			-- Search path.
		do

			planned_path := search_strategy.search_path (grid_graph, start_node, goal_node)
			path_publisher.update_msg (planned_path)
			point_publisher.update_msg (create{POINT_MSG}.make_with_values (start_node.position.x, start_node.position.y, start_node.position.z))
			point_publisher.set_duration (1000)
			point_publisher.set_color (create{COLOR_RGBA_MSG}.make_red)
			point_publisher.publish
			io.putstring (planned_path.count.out + " Path length%N")
			path_publisher.publish
			planned_path.start
		end

feature {NONE}

	grid_graph : GRID_GRAPH
			-- 2D grid graph.

	occupancy_grid_signaler: separate OCCUPANCY_GRID_SIGNALER
			-- 2D grid map.

	path_publisher: PATH_MSG_PUBLISHER
			-- Publisher object for paths.

	point_publisher: POINT_MSG_PUBLISHER
			-- Publisher object for points.

	planned_path : LINKED_LIST [POINT_MSG]
			-- Planned path.

	start_node, goal_node : SPATIAL_GRAPH_NODE
			-- Graph nodes of the start position and the goal position

	search_strategy: SEARCH_STRATEGY
			-- Strategy used for searching a path.

	path_params: PATH_PLANNER_PARAMETER


end -- class
