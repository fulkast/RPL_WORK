note
	description: "Implementation of four connectivity strategy."
	author: "Xiaote Zhu"

class
	FOUR_CONNECTIVITY_STRATEGY

inherit
	GRID_CONNECTIVITY_STRATEGY

feature -- Access

	connect (g: GRID_GRAPH)
			-- Create connections based on four connectivity strategy.
		local
			i, j: INTEGER
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
					connect_node (g, i, j, 1, i + 1, j, 1)
					connect_node (g, i, j, 1, i, j + 1, 1)
					connect_node (g, i, j, 1, i - 1, j, 1)
					connect_node (g, i, j, 1, i, j - 1, 1)
					j := j + 1
				end
				i := i + 1
			end
		end

end -- class
