note
	description : "Graph node in 3D-space."
	author		: "Rusakov Andrey"
	date        : "04.02.2015"

class
	SPATIAL_GRAPH_NODE

inherit
	GRAPH_NODE
	HASHABLE
	TRIGONOMETRY_MATH

create
	make_with_coords

feature {NONE} -- Initialization

	make_with_coords (coords: separate POINT_MSG)
			-- Create Current with given position.
		do
			create position.make_from_separate (coords)
			make
		end

feature -- Access

	position: POINT_MSG
			-- Coordinates of the Current node in 3D-space.

	hash_code: INTEGER
			-- Hash code value
		do
			Result := dabs(position.x * 31 + position.y * 13 + position.z).truncated_to_integer
		end

	distance (another: like Current): REAL_64
			-- Distance between Current and `another'.
		require
			is_connected (another)
		do
			Result := euclidean_distance (position, another.position)
		end
end
