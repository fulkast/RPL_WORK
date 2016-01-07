note
	description: "Abstract class for range group."
	author: "Xiaote Zhu"

deferred class
	RANGE_GROUP

feature -- Access

	sensors: ARRAYED_LIST[RANGE_MSG]
			-- Array of sensors.
		deferred
		end

	is_obstacle: BOOLEAN
			-- Whether an obstacle is observed by any sensor in valid range?
		deferred
		end

	is_enough_space_for_changing_direction: BOOLEAN
			-- Does the robot have enough space for changing the direction?
		deferred
		end

	is_enough_space_for_moving_to_the_max_range (sensor_index: INTEGER): BOOLEAN
			-- Is there enough space for moving towards the max range of
			-- the sensor at given sensor_index.
		deferred
		end

	get_number_detecting_sensors: INTEGER
			-- Get the number of sensors that detect a obstacle.
		deferred
		end

	get_closest_sensor_index: INTEGER
			-- Get the index of the sensor that detects the closest obstacle.
		require is_obstacle
		deferred
		end

	get_second_closest_sensor_index (closest_sensor_index: INTEGER): INTEGER
			-- Get the index of the sensor that detects the second closest obstacle.
		require is_obstacle
		deferred
		end

	is_obstacle_mostly_at_left: BOOLEAN
			-- Whether an obstacle is observed at left?
		deferred
		end

end --class
