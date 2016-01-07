note
	description: "Extension for the DOUBLE_MATH class."
	author: "Rusakov Andrey"
	date: "25.10.2013"

class
	TRIGONOMETRY_MATH

inherit
	DOUBLE_MATH

feature -- Access

	atan2 (y, x: REAL_64): REAL_64
			-- Principal value of the arc tangent of `y'/`x', expressed in radians.
		require
			x /= 0.0 or y /= 0.0
		external
			"C inline use %"math.h%""
		alias
			"return atan2($y, $x);"
		end

	squared_distance_2d (x1, y1, x2, y2: REAL_64): REAL_64
			-- Distance between the two points (`x1',`y1') and (`x2',`y2').
		local
			dx, dy: REAL_64
		do
			dx := x1 - x2
			dy := y1 - y2
			Result := (dx * dx) + (dy * dy)
		end

	euclidean_distance (a, b: separate POINT_MSG): REAL_64
			-- Euclidean distance between `a' and `b'.
		do
			Result := sqrt ((a.x - b.x).power(2) + (a.y - b.y).power(2) + (a.z - b.z).power(2))
		end

	manhattan_distance (a, b: separate POINT_MSG): REAL_64
			-- Manhattan distance between `a' and `b'.
		do
			Result := dabs (a.x - b.x) + dabs (a.y - b.y) + dabs (a.z - b.z)
		end

feature -- Constants

	pi_8: REAL_64 = 0.39269908169872415480783042290994
	pi_16: REAL_64 = 0.19634954084936207740391521145497

end
