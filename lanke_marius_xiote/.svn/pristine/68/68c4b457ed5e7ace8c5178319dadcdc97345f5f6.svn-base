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

	is_obstacle: BOOLEAN
			-- Whether an obstacle is observed by any sensor in valid range?
		local
			i: INTEGER
		do
			from
				i := sensors.lower
			until
				i > sensors.upper or Result
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

	follow_wall_orientation (a_desired_distance_from_wall: REAL_64): REAL_64
			-- <Precursor>
		do
			-- TODO.
			Result := 0.0
		end

end
