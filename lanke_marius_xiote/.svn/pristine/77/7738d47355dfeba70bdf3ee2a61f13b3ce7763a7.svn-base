note
	description : "Grid graph in 3D-space."
	author		: "Rusakov Andrey"
	date        : "05.02.2015"

class
	GRID_GRAPH

inherit
	SPATIAL_GRAPH

create
	make_3d, make_2d, make_1d

feature {NONE} -- Initialization

	make_3d (width, height, depth: INTEGER;
				min_x, max_x, min_y, max_y, min_z, max_z: REAL_64;
				conn_strategy: separate GRID_CONNECTIVITY_STRATEGY)
			-- Create Current with nodes on the 3D grid.
		require
			width > 0
			height > 0
			depth > 0
			min_x <= max_x
			min_y <= max_y
			min_z <= max_z
			width = 1 implies min_x = max_x
			height = 1 implies min_y = max_y
			depth = 1 implies min_z = max_z
		local
			step_x, step_y, step_z: REAL_64
			cur_x, cur_y, cur_z: REAL_64
			i, j, k: INTEGER
			n: SPATIAL_GRAPH_NODE
			aa: ARRAYED_LIST[ARRAYED_LIST[SPATIAL_GRAPH_NODE]]
			a: ARRAYED_LIST[SPATIAL_GRAPH_NODE]
		do
			count_x := width
			count_y := height
			count_z := depth

			create {ARRAYED_LIST[SPATIAL_GRAPH_NODE]}nodes.make (0)

			create grid.make (0)

			if width > 1 then
				step_x := (max_x - min_x) / (width - 1)
			end

			if height > 1 then
				step_y := (max_y - min_y) / (height - 1)
			end

			if depth > 1 then
				step_z := (max_z - min_z) / (depth - 1)
			end

			from
				i := 1
				cur_x := min_x
			until
				i > width
			loop
				create aa.make (0)
				cur_x := min_x + step_x * (i - 1)
				from
					j := 1
					cur_y := min_y
				until
					j > height
				loop
					create a.make (0)
					cur_y := min_y + step_y * (j - 1)
					from
						k := 1
						cur_z := min_z
					until
						k > depth
					loop
						cur_z := min_z + step_z * (k - 1)
						create n.make_with_coords (create {POINT_MSG}.make_with_values (cur_x, cur_y, cur_z))
						a.extend (n)
						nodes.extend (n)
						k := k + 1
					end
					aa.extend (a)
					j := j + 1
				end
				grid.extend (aa)
				i := i + 1
			end

			conn_strategy.connect (Current)
		end

	make_2d (width, height: INTEGER; min_x, max_x, min_y, max_y: REAL_64; conn_strategy: separate GRID_CONNECTIVITY_STRATEGY)
			-- Create Current with nodes on the 2D grid.
		do
			make_3d (width, height, 1, min_x, max_x, min_y, max_y, 0.0, 0.0, conn_strategy)
		end

	make_1d (width: INTEGER; min_x, max_x: REAL_64; conn_strategy: separate GRID_CONNECTIVITY_STRATEGY)
			-- Create Current with nodes on the 1D grid (chain).
		do
			make_3d (width, 1, 1, min_x, max_x, 0.0, 0.0, 0.0, 0.0, conn_strategy)
		end

feature -- Access

	count_x, count_y, count_z: INTEGER
			-- Number of nodes in each dimension.

	node_at (x_idx, y_idx, z_idx: INTEGER): SPATIAL_GRAPH_NODE
			-- Node with current indices in the grid.
		require
			is_valid_index (x_idx, y_idx, z_idx)
		do
			Result := grid.at (x_idx).at (y_idx).at (z_idx)
		end

	is_valid_index (x_idx, y_idx, z_idx: INTEGER): BOOLEAN
			-- Are given indices within Current's dimensions.
		do
			Result := x_idx > 0 and x_idx <= count_x and y_idx > 0 and y_idx <= count_y and z_idx > 0 and z_idx <= count_z
		end

	add_obstacle_by_index (x_idx, y_idx, z_idx: INTEGER)
			-- Remove a node with given indeces.
		require
			is_valid_index (x_idx, y_idx, z_idx)
		do
			grid.at (x_idx).at (y_idx).at (z_idx).disconnect_all_neighbours
		end

feature {NONE} -- Implementation

	grid: ARRAYED_LIST[ARRAYED_LIST[ARRAYED_LIST[SPATIAL_GRAPH_NODE]]]
			-- Nodes of the grid.

end
