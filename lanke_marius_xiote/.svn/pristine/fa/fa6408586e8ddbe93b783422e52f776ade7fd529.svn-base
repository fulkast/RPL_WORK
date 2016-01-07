note
	description: "Wrapper on thymio range group."
	author: "Xiaote Zhu"

class
	THYMIO_RANGE_GROUP_WRAPPER

inherit
	RANGE_GROUP_WRAPPER

create
	make

feature {NONE} -- Initialization

	make (robot_params: separate ROBOT_PARAMETERS)
		local
			i: INTEGER
		do
			create sensor_distances.make (1, robot_params.total_number_of_sensors)
			from
				i := 1
			until
				i > robot_params.number_of_front_sensors
			loop
				sensor_distances.put (robot_params.front_sensor_distance, i)
				i := i + 1
			end

			from
			until
				i > robot_params.total_number_of_sensors
			loop
				sensor_distances.put (robot_params.back_sensor_distance, i)
				i := i + 1
			end

			create sensor_angles.make (1, robot_params.total_number_of_sensors)
			sensor_angles.put (robot_params.sensor_angle_front_1, 1)
			sensor_angles.put (robot_params.sensor_angle_front_2, 2)
			sensor_angles.put (robot_params.sensor_angle_front_3, 3)
			sensor_angles.put (robot_params.sensor_angle_front_4, 4)
			sensor_angles.put (robot_params.sensor_angle_front_5, 5)
			sensor_angles.put (robot_params.sensor_angle_back_1, 6)
			sensor_angles.put (robot_params.sensor_angle_back_2, 7)
		end

feature -- Access

	follow_wall_orientation (r_sens: separate RANGE_GROUP; desired_distance, timestamp, timestamp_obstacle_last_seen, vx: REAL_64): REAL_64
			-- Calculate the heading for wall following to maintain a desired_distance from the wall.
		local
			i: INTEGER
		   	number_detecting_sensors: INTEGER
		   	closest_sensor_point, second_closest_sensor_point: POINT_MSG
		   	closest_sensor_index, second_closest_sensor_index: INTEGER
		   	current_distance: REAL_64
		   	corner_radius: REAL_64
		   	d_desired, k_p_wall_following: REAL_64
		do
			create closest_sensor_point.make_empty
			create second_closest_sensor_point.make_empty

			number_detecting_sensors := r_sens.get_number_detecting_sensors

			if number_detecting_sensors > 0 then
					-- Obstacle detected
				set_obstacle_vanished (False)
				closest_sensor_index := r_sens.get_closest_sensor_index
				prev_closest_sensor_index := closest_sensor_index
				prev_closest_sensor_range := r_sens.sensors[prev_closest_sensor_index].range
			end

			if number_detecting_sensors > 1 then
					-- Obstacle detected with at least two sensors
					-- Able to calculate orientation of wall
				set_obstacle_vanished(False)
				second_closest_sensor_index := r_sens.get_second_closest_sensor_index (closest_sensor_index)
				closest_sensor_point := get_relative_coordinates_with_sensor (r_sens.sensors[closest_sensor_index].range,
																					closest_sensor_index)
				second_closest_sensor_point := get_relative_coordinates_with_sensor (r_sens.sensors[second_closest_sensor_index].range,
																							second_closest_sensor_index)
				current_distance := get_distance_to_line (closest_sensor_point, second_closest_sensor_point)

				Result := get_heading_to_follow_line (closest_sensor_point,
															second_closest_sensor_point,
															current_distance,
															desired_distance)

			elseif number_detecting_sensors = 1 then
					-- Obstacle only detected by one sensor
					-- Eg. when parallel to the wall
				d_desired := 0.12
				k_p_wall_following := 8
				if r_sens.sensors[prev_closest_sensor_index].range > 0.101 and r_sens.is_obstacle_mostly_at_left
					and r_sens.sensors[1].is_valid_range and not r_sens.sensors[2].is_valid_range then
						-- This if statement only has to be there, since the sensor emitter is always on the right and the detector on the left!
					Result := 0.0
				else
					Result := k_p_wall_following * (r_sens.sensors[prev_closest_sensor_index].range - d_desired) * (3.0 - prev_closest_sensor_index).sign
				end

			elseif number_detecting_sensors = 0 then
					-- Obstacle not detected anymore
					-- Initiate turn at the end of the corner
				if timestamp < timestamp_obstacle_last_seen + (distance_corner_turn_point/vx) then
						-- Continue parallel to the obstacle until the end of the obstacle is reached.
					Result := 0.0
				else
						-- Go with constant angular velocity around the corner.
					corner_radius := 0.11
					Result := vx/corner_radius * ((3.0 - prev_closest_sensor_index).sign)
				end
			end
		end

feature {NONE} -- Implementation

	prev_closest_sensor_index: INTEGER
			-- Keeps track of sensor which detected the obstacle the very last.

	prev_closest_sensor_range: REAL_64
			-- Keeps track of distance with which prev_closest_sensor detected the obstacle.

	is_obstacle_vanished: BOOLEAN
			-- Whether a wall obstacle disappeared or not?

	time_steps_obstacle_vanished: REAL_64
			-- Remembers how long the wall vanished for

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
			time_steps_obstacle_vanished := time_steps_obstacle_vanished + 0.00195
		end

	distance_corner_turn_point: REAL_64
		-- Caculate the distance to the end of the obstacle when obstacle not detected anymore.
		do
			Result := get_relative_coordinates_with_sensor (prev_closest_sensor_range, prev_closest_sensor_index).x * cosine (sensor_angles[prev_closest_sensor_index])
		end
end
