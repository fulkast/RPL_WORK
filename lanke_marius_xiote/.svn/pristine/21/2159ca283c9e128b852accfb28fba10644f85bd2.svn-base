note
	description: "Class represents a group (array) of distance sensors."
	author: "Rusakov Andrey"
	date: "03.09.2013"

deferred class
	PERIMETER_OBSTACLE_DETECTOR

inherit
	OBSTACLE_DETECTOR

feature -- Access

	sensors: ARRAYED_LIST[RANGE_MSG]
			-- Array of sensors.
		deferred
		end

	is_obstacle: BOOLEAN
			-- Whether an obstacle is observed by any sensor in valid range?
		deferred
		end

	is_obstacle_in_front: BOOLEAN
			-- Whether an obstacle is observed in front?
		deferred
		end

	is_obstacle_at_back: BOOLEAN
			-- Whether an obstacle is observed at back?
		deferred
		end

	is_obstacle_mostly_at_left: BOOLEAN
			-- Whether an obstacle is observed at left?
		deferred
		end

	is_obstacle_mostly_at_right: BOOLEAN
			-- Whether an obstacle is observed at right?
		deferred
		end

	is_obstacle_huge: BOOLEAN
			-- Is obstacle observed by majority of the sensors?
		deferred
		end

	is_front_sensor (a_index: INTEGER): BOOLEAN
			-- Does `a_index' represent the front sensor of the robot?
		deferred
		end

	is_sensor_blocked (a_sensor_index: INTEGER): BOOLEAN
			-- Is the sensor with index `a_sensor_index' observing an obstacle in valid range?
		require
			a_sensor_index >= sensors.lower and a_sensor_index <= sensors.upper
		do
			Result := 	sensors[a_sensor_index].range <= sensors[a_sensor_index].max_range and
						sensors[a_sensor_index].range >= sensors[a_sensor_index].min_range
		end

	has_obstacle (a_direction_with_respect_to_robot: REAL_64): BOOLEAN
			-- Is there an obstacle in `a_direction_with_respect_to_robot' direction.
		deferred
		end

	hit_point_front (a_sensor_index: INTEGER): VECTOR_3D_MSG
			-- The farthest point the sensor with the index `a_sensor_index' can currently sense.
		require
			is_front_sensor (a_sensor_index)
		deferred
		end

	is_all_front_sensors_open: BOOLEAN
			-- Are all front sensors not blocked.
		deferred
		end

	is_enough_space_for_changing_direction: BOOLEAN
			-- Does the robot have enough space for changing the direction?
		deferred
		end

	open_direction_front: VECTOR_3D_MSG
			-- Open direction in front of the robot. Coordinates are with respect to the robot's center.
		require
			is_enough_space_for_changing_direction
		deferred
		end

--	follow_wall_orientation (a_desired_distance_from_wall: REAL_64): REAL_64
--			-- Orientation which the robot should take in order to follow the current wall obstacle.
--		deferred
--		end
end
