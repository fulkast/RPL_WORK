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
	GROUP_SIGNALER[RANGE_MSG]
	PERIMETER_OBSTACLE_DETECTOR

create
	make

feature {NONE} -- Initialization.

	make(topic_name: separate STRING)
			-- Create an array of sensors and register them.
		do
			make_with_topic (topic_name)
			register_ranges
			is_obstacle_vanished := false
			time_steps_obstacle_vanished := 1
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

feature -- Access.

	prev_closest_sensor_index: INTEGER

	is_obstacle_vanished: BOOLEAN
			-- Whether a wall obstacle disappeared or not?

	time_steps_obstacle_vanished: REAL_32
			-- Remembers how long the wall vanished for

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
				Result := Result or sensors[i].is_valid_range
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

	set_obstacle_vanished (a_val : BOOLEAN)
			-- This informs if a wall obstacle vanished
		do
			if (a_val = False) then
				is_obstacle_vanished := False
				time_steps_obstacle_vanished := 1
			else
				is_obstacle_vanished := a_val
			end
		end

	increment_obstacle_vanished_time_steps
			-- Increments the amount of time the wall has vanished by one
		do
			time_steps_obstacle_vanished := time_steps_obstacle_vanished + 0.001
		end

	get_closest_sensor_index: INTEGER
		local
		    i, closest_sensor_index: INTEGER
		    closest_sensor_range: REAL_64
		do
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

	get_number_detecting_sensors: INTEGER
		local
			i: INTEGER
			number_detecting_sensors: INTEGER
		do
			from
				i := sensors.lower
			until
				i > sensors.upper - 2
			loop
				if (sensors[i].is_valid_range and sensors[i].range < 0.2) then
					number_detecting_sensors := number_detecting_sensors + 1
				end
				i := i + 1
			end

			Result := number_detecting_sensors
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

	is_enough_space_for_changing_direction: BOOLEAN
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

	open_direction_front: VECTOR_3D_MSG
			-- <Precursor>
		do
			-- TODO.
			Result := create {VECTOR_3D_MSG}.make_empty
		end

	follow_wall_orientation (desired_distance: REAL_64): REAL_64
			-- Calculate the heading for wall following to maintain a desired_distance from the wall.
		local

		    rsc: RELATIVE_SPACE_CALCULATIONS
		   	number_detecting_sensors: INTEGER
		   	closest_sensor_point, second_closest_sensor_point: POINT_MSG
		   	closest_sensor_index, second_closest_sensor_index: INTEGER
		   	current_distance: REAL_64
		   	last_detecting_point_before_corner: POINT_MSG
		   	distance_before_turn: REAL_64
		do
			create rsc.make
			create closest_sensor_point.make_empty
			create second_closest_sensor_point.make_empty

			number_detecting_sensors := get_number_detecting_sensors
			closest_sensor_index := get_closest_sensor_index

			if number_detecting_sensors > 0 then
				set_obstacle_vanished (False)
				prev_closest_sensor_index := closest_sensor_index
			end

			if (closest_sensor_index > 1 and sensors[closest_sensor_index - 1].is_valid_range)
				or (closest_sensor_index < 5 and sensors[closest_sensor_index + 1].is_valid_range) then
				closest_sensor_point := rsc.get_relative_coordinates_with_sensor (sensors[closest_sensor_index].range,
																					closest_sensor_index)
				if (closest_sensor_index = 1)
					or (sensors[closest_sensor_index - 1].range > sensors[closest_sensor_index + 1].range) then
					second_closest_sensor_index := closest_sensor_index + 1
				else
					second_closest_sensor_index := closest_sensor_index - 1
				end

				second_closest_sensor_point := rsc.get_relative_coordinates_with_sensor (sensors[second_closest_sensor_index].range,
																					second_closest_sensor_index)
			end

			if number_detecting_sensors >= 2 then
				current_distance := rsc.get_distance_to_line (closest_sensor_point, second_closest_sensor_point)

				if second_closest_sensor_index < closest_sensor_index then
					Result := rsc.get_heading_to_follow_line (second_closest_sensor_point, closest_sensor_point,
																current_distance, desired_distance)
				else
					Result := rsc.get_heading_to_follow_line (closest_sensor_point, second_closest_sensor_point,
																current_distance, desired_distance)
				end

			elseif number_detecting_sensors = 1 then
				Result := 0

			else
				if not is_obstacle_vanished then
					set_obstacle_vanished(true)
				end
				increment_obstacle_vanished_time_steps

				Result := (3.0 - prev_closest_sensor_index) * 0.005 / desired_distance
			end
		end
end
