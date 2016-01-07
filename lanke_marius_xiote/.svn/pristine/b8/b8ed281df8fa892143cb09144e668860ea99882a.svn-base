note
	description: "Calculation class in local frame of the robot."
	author: "Group lanke_marius_xiaote"
	date: "13.10.2015"

class
	RELATIVE_SPACE_CALCULATIONS

create
	make

feature

	make
		do
			initialize_constants
			create tm
			create dm
		end

	initialize_constants
			-- Initialize sensor_distances and sensor_angles
		do
			create sensor_distances.make (1, 7)
			across 1 |..| 5 as i
			loop
				sensor_distances.put (0.08, i.item)
			end
			across 6 |..| 7 as i
			loop
				sensor_distances.put (0.0, i.item)  -- PLACEHOLDER
			end

			create sensor_angles.make (1, 7)
			sensor_angles.put (0.672, 1)
			sensor_angles.put (0.336, 2)
			sensor_angles.put (0.0, 3)
			sensor_angles.put (-0.336, 4)
			sensor_angles.put (-0.672, 5)
			sensor_angles.put (0.0, 6)  -- PLACEHOLDER
			sensor_angles.put (0.0, 7)  --PLACEHOLDER
		end

feature

	tm: TRIGONOMETRY_MATH
	dm: DOUBLE_MATH

feature -- Constants

	sensor_distances: ARRAY[REAL_64]
			-- Each sensor's distance to (0, 0).
	sensor_angles: ARRAY[REAL_64]
			-- Each sensor's angle to the positive x-axis.

feature  -- Access

	get_relative_coordinates_with_sensor (distance: REAL_64; sensor_i: INTEGER): POINT_MSG
			-- Calculate the relative coordinate of a point given its distance to a sensor and the sensor's index.
		do
			Result := get_relative_coordinates(distance + sensor_distances[sensor_i], sensor_angles[sensor_i])
		end

	get_relative_coordinates (distance, angle: REAL_64): POINT_MSG
			-- Calculate the relative coordinate of a point given its distance to (0, 0) and the angle.
		local
			relative_coord: POINT_MSG
		do
			create relative_coord.make_with_values(distance * tm.cosine(angle), distance * tm.sine (angle), 0)
			Result := relative_coord
		end

	convert_relative_coordinates_to_absolute_coordinates (p0, p1: POINT_MSG): POINT_MSG
			-- Calculate the absolute coordinates given p0, the absoluate coordinates of (0, 0), and p1, the relative coordinates
		local
			absolute_coord: POINT_MSG
		do
			create absolute_coord.make_with_values (p0.x + p1.x, p0.y + p1.y, 0)
			Result := absolute_coord
		end

	get_distance_to_line (p1, p2: POINT_MSG): REAL_64
			-- Calculate the distance from (0,0) to the line represented by the given two points.
		do
			Result := (((p2.y - p1.y) * p1.x - (p2.x - p1.x) * p1.y) / tm.sqrt ((p2.x - p1.x).power(2) + (p2.y - p1.y).power(2))).abs
			debug
				io.put_string ("distance to wall: " + Result.out + "%N")
			end
		end

	get_heading_to_follow_line (p1, p2: POINT_MSG; current_distance, desired_distance: REAL_64): REAL_64
			-- Calculate the heading to maintain a desired distance from the line given by p1, p2.
		local
			v_theta_x, v_theta_y: REAL_64
		do
			v_theta_x := desired_distance * (p2.x - p1.x) + (current_distance - desired_distance) * (p2.y - p1.y)
			v_theta_y := desired_distance * (p2.y - p1.y) + (current_distance - desired_distance) * (p1.x - p2.x)
			Result := tm.atan2 (v_theta_y, v_theta_x)
		end
end -- class RELATIVE_SPACE_CALCULATIONS
