note
	description: "Implementation of eight connectivity strategy."
	author: "Xiaote Zhu"

class
	EIGHT_CONNECTIVITY_STRATEGY

inherit
	GRID_CONNECTIVITY_STRATEGY

feature -- Access

	connect (g: separate GRID_GRAPH)
		-- connect each node in a 3D graph with all of its 26 direct neighbours.
		local
			i, j, k: INTEGER
		do
			from
				i := 1
			until
				i > g.count_x
			loop
				from
					j := 1
				until
					j > g.count_y
				loop
					from
						k := 1
					until
						k > g.count_z
					loop
						-- nine neighbours for k-1
						connect_node (g, i, j, k, i+1, j, k-1)
						connect_node (g, i, j, k, i, j+1, k-1)
						connect_node (g, i, j, k, i-1, j, k-1)
						connect_node (g, i, j, k, i, j-1, k-1)
						connect_node (g, i, j, k, i+1, j+1, k-1)
						connect_node (g, i, j, k, i+1, j-1, k-1)
						connect_node (g, i, j, k, i-1, j+1, k-1)
						connect_node (g, i, j, k, i-1, j-1, k-1)
						connect_node (g, i, j, k, i, j, k-1)

						-- eight neighbours for k
						connect_node (g, i, j, k, i+1, j, k)
						connect_node (g, i, j, k, i, j+1, k)
						connect_node (g, i, j, k, i-1, j, k)
						connect_node (g, i, j, k, i, j-1, k)
						connect_node (g, i, j, k, i+1, j+1, k)
						connect_node (g, i, j, k, i+1, j-1, k)
						connect_node (g, i, j, k, i-1, j+1, k)
						connect_node (g, i, j, k, i-1, j-1, k)

						-- nine neighbours for k+1
						connect_node (g, i, j, k, i+1, j, k+1)
						connect_node (g, i, j, k, i, j+1, k+1)
						connect_node (g, i, j, k, i-1, j, k+1)
						connect_node (g, i, j, k, i, j-1, k+1)
						connect_node (g, i, j, k, i+1, j+1, k+1)
						connect_node (g, i, j, k, i+1, j-1, k+1)
						connect_node (g, i, j, k, i-1, j+1, k+1)
						connect_node (g, i, j, k, i-1, j-1, k+1)
						connect_node (g, i, j, k, i, j, k+1)

						k := k + 1
					end
					j := j + 1
				end
				i := i + 1
			end
		end

end -- class
