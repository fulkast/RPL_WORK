note
	description: 	"[
						Group of Thymio's horizontal range sensors.
						Detects obstacles around the robot.
					]"
	author: "Rusakov Andrey"
	date: "18.09.2013"

class
	THYMIO_RANGE_GROUP

inherit
	RANGE_GROUP
	GROUP_SIGNALER[RANGE_MSG]

create
	make

feature {NONE} -- Initialization.

	make (topic_name: separate STRING)
			-- Create an array of sensors and register them.
		do
			make_with_topic (topic_name)
			register_ranges
		end

	register_ranges
			-- Register Thymio ground sensors by their frame ids.
		do
			register_sensor ({THYMIO_TOPICS}.prox_horizontal_link_0)
			register_sensor ({THYMIO_TOPICS}.prox_horizontal_link_1)
			register_sensor ({THYMIO_TOPICS}.prox_horizontal_link_2)
			register_sensor ({THYMIO_TOPICS}.prox_horizontal_link_3)
			register_sensor ({THYMIO_TOPICS}.prox_horizontal_link_4)
			register_sensor ({THYMIO_TOPICS}.prox_horizontal_link_5)
			register_sensor ({THYMIO_TOPICS}.prox_horizontal_link_6)
		end

feature -- Access

	get_closest_sensor_index: INTEGER
			-- Get the index of the sensor that detects the closest obstacle.
		local
		    i, closest_sensor_index: INTEGER
		    closest_sensor_range: REAL_64
		do
			closest_sensor_range := {REAL_64}.positive_infinity
			from
				i := sensors.lower
			until
				i > sensors.upper - 2
			loop
				if sensors[i].is_valid_range and sensors[i].range < closest_sensor_range then
					closest_sensor_range := sensors[i].range
					closest_sensor_index := i
				end
				i := i + 1
			end

			Result := closest_sensor_index
		end

	get_second_closest_sensor_index (closest_sensor_index: INTEGER): INTEGER
			-- Get the index of the sensor that detects the second closest obstacle.
		local
		    i, second_closest_sensor_index: INTEGER
		    second_closest_sensor_range: REAL_64
		do
			second_closest_sensor_range := {REAL_64}.positive_infinity
			from
				i := sensors.lower
			until
				i > sensors.upper - 2
			loop
				if i /= closest_sensor_index and
					sensors[i].is_valid_range and
					sensors[i].range < second_closest_sensor_range then
					second_closest_sensor_range := sensors[i].range
					second_closest_sensor_index := i
				end
				i := i + 1
			end

			Result := second_closest_sensor_index
		end


	get_number_detecting_sensors: INTEGER
			-- Get the number of sensors that detect a obstacle.
		local
			i: INTEGER
			number_detecting_sensors: INTEGER
		do
			from
				i := sensors.lower
			until
				i > sensors.upper - 2
			loop
				if sensors[i].is_valid_range then
					number_detecting_sensors := number_detecting_sensors + 1
				end
				i := i + 1
			end

			Result := number_detecting_sensors
		end

	is_enough_space_for_moving_to_the_max_range (sensor_index: INTEGER): BOOLEAN
			-- Is there enough space for moving towards the max range of
			-- the sensor at given sensor_index.
		do
			Result := not sensors[sensor_index].is_valid_range and
					(sensor_index = 1 or not sensors[sensor_index - 1].is_valid_range) and
					(sensor_index = 5 or not sensors[sensor_index + 1].is_valid_range)
		end

	is_obstacle: BOOLEAN
			-- Whether an obstacle is observed by any sensor in valid range?
		local
			i: INTEGER
		do
			from
				i := sensors.lower
			until
				i > sensors.upper - 2 or Result
			loop
				Result := Result or sensors[i].range < 0.03 --.is_valid_range --range < 0.10
				i := i + 1
			end
		end

	is_obstacle_in_front: BOOLEAN
			-- Whether an obstacle is observed in front?
		do
			Result := 	sensors[1].is_valid_range or sensors[2].is_valid_range or sensors[3].is_valid_range or
						sensors[4].is_valid_range or sensors[5].is_valid_range
		end

	is_obstacle_at_back: BOOLEAN
			-- Whether an obstacle is observed at back?
		do
			Result := sensors[6].is_valid_range or sensors[7].is_valid_range
		end

	is_obstacle_mostly_at_left: BOOLEAN
			-- Whether an obstacle is observed at left?
		local
			i: INTEGER
			left_sum, right_sum: REAL_32
		do
			from
				i := sensors.lower
			until
				i > sensors.upper
			loop
				if sensors[i].is_valid_range then
					if i = 1 or i = 2 or i = 6 then
						left_sum := left_sum + sensors[i].range
					end
					if i = 4 or i = 5 or i = 7 then
						right_sum := right_sum + sensors[i].range
					end
				end
				i := i + 1
			end

			Result := (left_sum > 0 and left_sum < right_sum) or (left_sum > 0 and right_sum <= 0)
		end

	is_obstacle_mostly_at_right: BOOLEAN
			-- Whether an obstacle is observed at right?
		local
			i: INTEGER
			left_sum, right_sum: REAL_32
		do
			from
				i := sensors.lower
			until
				i > sensors.upper
			loop
				if sensors[i].is_valid_range then
					if i = 1 or i = 2 or i = 6 then
						left_sum := left_sum + sensors[i].range
					end
					if i = 4 or i = 5 or i = 7 then
						right_sum := right_sum + sensors[i].range
					end
				end
				i := i + 1
			end

			Result := (right_sum > 0 and left_sum > right_sum) or (right_sum > 0 and left_sum <= 0)
		end

	is_obstacle_huge: BOOLEAN
			-- Is obstacle observed by majority of the sensors?
		do
			Result := 	(sensors[1].is_valid_range and sensors[2].is_valid_range and sensors[3].is_valid_range and
						sensors[4].is_valid_range and sensors[5].is_valid_range) or
						(sensors[6].is_valid_range and sensors[7].is_valid_range)
		end

	is_front_sensor (a_index: INTEGER): BOOLEAN
			-- <Precursor>
		do
			-- TODO.
			Result := False
		end

	hit_point_front (a_sensor_index: INTEGER): VECTOR_3D_MSG
			-- <Precursor>
		do
			-- TODO.
			Result := create {VECTOR_3D_MSG}.make_empty
		end

	has_obstacle (a_direction_with_respect_to_robot: REAL_64): BOOLEAN
			-- <Precursor>
		do
			-- TODO.
			Result := False
		end

	is_all_front_sensors_open: BOOLEAN
			-- <Precursor>
		do
			-- TODO.
			Result := False
		end

	is_enough_space_for_changing_direction: BOOLEAN
			-- <Precursor>
		do
			-- TODO.
			Result := False
		end

	open_direction_front: VECTOR_3D_MSG
			-- <Precursor>
		do
			-- TODO.
			Result := create {VECTOR_3D_MSG}.make_empty
		end

	follow_wall_orientation (a_desired_distance_from_wall: REAL_64): REAL_64
			-- <Precursor>
		do
			-- TODO.
			Result := 0
		end

end -- class
