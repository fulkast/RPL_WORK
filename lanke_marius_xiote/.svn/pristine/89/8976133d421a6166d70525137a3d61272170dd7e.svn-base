note
	description: "Abstract class for wrapper on range group."
	author: "Xiaote Zhu"

deferred class
	RANGE_GROUP_WRAPPER

inherit
	RELATIVE_SPACE_CALCULATIONS

feature -- Access

	total_number_of_sensors : INTEGER
			-- Total number of sensors.

	number_of_front_sensors: INTEGER
			-- Number of front sensors.

	number_of_back_sensors: INTEGER
			-- Number of back sensors.

	sensor_distances: ARRAY[REAL_64]
			-- Each sensor's distance to (0, 0).

	sensor_angles: ARRAY[REAL_64]
			-- Each sensor's angle to the positive x-axis.

	get_relative_coordinates_with_sensor (distance: REAL_64; sensor_i: INTEGER): POINT_MSG
			-- Calculate the relative coordinate of a point given its distance to a sensor and the sensor's index.
		do
			Result := get_relative_coordinates(distance + sensor_distances[sensor_i], sensor_angles[sensor_i])
		end

	follow_wall_orientation (r_sens: separate RANGE_GROUP; desired_distance, timestamp, timestamp_obstacle_last_seen, vx: REAL_64): REAL_64
			-- Calculate the heading for wall following to maintain a desired_distance from the wall.
		deferred
		end

end -- class
