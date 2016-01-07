note
	description: "Implementation of creating grid_graph from occupancy_grid_signaler."
	author: "Xiaote Zhu"

class
	GRAPH_MAKER

feature {NONE}

	make_grid_graph (occupancy_grid_signaler: separate OCCUPANCY_GRID_SIGNALER;
					conn_strategy: separate GRID_CONNECTIVITY_STRATEGY;
					inflate_radius: REAL_64) : GRID_GRAPH
			-- Create a graph based on the occupancy grid and the connectivity strategy.
		require
			occupancy_grid_signaler.state.info.map_load_time > 0
			-- Ensure that the map has been loaded
		local
			grid_graph: GRID_GRAPH
			i,j: INTEGER_32
		do
			occupancy_grid_signaler.inflate (inflate_radius)
			create grid_graph.make_2d (occupancy_grid_signaler.state.info.width.as_integer_32,
										occupancy_grid_signaler.state.info.height.as_integer_32,
										occupancy_grid_signaler.state.info.origin.position.x,
										occupancy_grid_signaler.state.info.origin.position.x
											+ occupancy_grid_signaler.state.info.width * occupancy_grid_signaler.state.info.resolution,
										occupancy_grid_signaler.state.info.origin.position.y,
										occupancy_grid_signaler.state.info.origin.position.y
											+ occupancy_grid_signaler.state.info.height * occupancy_grid_signaler.state.info.resolution,
										conn_strategy)
			from
				i := 1
			until
				i > grid_graph.count_x
			loop
				from
					j := 1
				until
					j > grid_graph.count_y
				loop
					if occupancy_grid_signaler.occupancy (i, j) > occupancy_grid_signaler.occupancy_threshold then
						grid_graph.add_obstacle_by_index (i, j, 1)
					end
					j := j + 1
				end
				i := i + 1
			end

			Result := grid_graph
		end

	convert_x_coord_to_x_index (occupancy_grid_sig: separate OCCUPANCY_GRID_SIGNALER; x_coord: REAL_64) : INTEGER
			-- Convert an x coordinate to the cooresponding x index on the grid graph.
		do
			Result := ((x_coord - occupancy_grid_sig.state.info.origin.position.x) / occupancy_grid_sig.state.info.resolution).rounded + 1
		end

	convert_y_coord_to_y_index (occupancy_grid_sig: separate OCCUPANCY_GRID_SIGNALER; y_coord: REAL_64) : INTEGER
			-- Convert an y coordinate to the cooresponding y index on the grid graph.
		do
			Result := ((y_coord - occupancy_grid_sig.state.info.origin.position.y) / occupancy_grid_sig.state.info.resolution).rounded + 1
		end

	convert_z_coord_to_z_index (occupancy_grid_sig: separate OCCUPANCY_GRID_SIGNALER; z_coord: REAL_64) : INTEGER
			-- Convert an y coordinate to the cooresponding z index on the grid graph.
		do
			Result := ((z_coord - occupancy_grid_sig.state.info.origin.position.z) / occupancy_grid_sig.state.info.resolution).rounded + 1
		end

end -- class
