note
	description: "Summary description for {APP_PARAMETERS}."
	author: "Lanke Frank Tarimo Fu"

class
	ROBOT_PARAMETERS

inherit
	PARAMETERS

create
	make

feature {NONE} -- Initialization

	make

	do
		create variable_name_setter_map.make(5)

		ROBOT_NAME := "NULL"

		variable_name_setter_map.put(agent set_robot_name(), "ROBOT_NAME")
		variable_name_setter_map.put(agent set_total_number_of_sensors() , "TOTAL_NUMBER_OF_SENSORS")
		variable_name_setter_map.put(agent set_number_of_front_sensors() , "NUMBER_OF_FRONT_SENSORS")
		variable_name_setter_map.put(agent set_number_of_back_sensors() , "NUMBER_OF_BACK_SENSORS")
		variable_name_setter_map.put(agent set_front_sensor_distance() , "FRONT_SENSOR_DISTANCE")
		variable_name_setter_map.put(agent set_back_sensor_distance() , "BACK_SENSOR_DISTANCE")
		variable_name_setter_map.put(agent set_sensor_angle_front_1() , "SENSOR_ANGLE_FRONT_1")
		variable_name_setter_map.put(agent set_sensor_angle_front_2() , "SENSOR_ANGLE_FRONT_2")
		variable_name_setter_map.put(agent set_sensor_angle_front_3() , "SENSOR_ANGLE_FRONT_3")
		variable_name_setter_map.put(agent set_sensor_angle_front_4() , "SENSOR_ANGLE_FRONT_4")
		variable_name_setter_map.put(agent set_sensor_angle_front_5() , "SENSOR_ANGLE_FRONT_5")
		variable_name_setter_map.put(agent set_sensor_angle_back_1() , "SENSOR_ANGLE_BACK_1")
		variable_name_setter_map.put(agent set_sensor_angle_back_2() , "SENSOR_ANGLE_BACK_2")
	end

feature	 -- Access

	ROBOT_NAME : STRING

	TOTAL_NUMBER_OF_SENSORS : INTEGER

	NUMBER_OF_FRONT_SENSORS : INTEGER

	NUMBER_OF_BACK_SENSORS : INTEGER

	FRONT_SENSOR_DISTANCE : REAL_64

	BACK_SENSOR_DISTANCE : REAL_64

	SENSOR_ANGLE_FRONT_1 : REAL_64

	SENSOR_ANGLE_FRONT_2 : REAL_64

	SENSOR_ANGLE_FRONT_3 : REAL_64

	SENSOR_ANGLE_FRONT_4 : REAL_64

	SENSOR_ANGLE_FRONT_5 : REAL_64

	SENSOR_ANGLE_BACK_1 : REAL_64

	SENSOR_ANGLE_BACK_2 : REAL_64

	set_robot_name (rob : STRING)

		do
			ROBOT_NAME := rob
		end

	set_total_number_of_sensors (number : STRING)
		do
			TOTAL_NUMBER_OF_SENSORS := number.to_integer
		end

	set_number_of_front_sensors (number : STRING)
		do
			NUMBER_OF_FRONT_SENSORS := number.to_integer
		end

	set_number_of_back_sensors (number : STRING)
		do
			NUMBER_OF_BACK_SENSORS := number.to_integer
		end

	set_front_sensor_distance (distance : STRING)
		do
			FRONT_SENSOR_DISTANCE := distance.to_real_64
		end

	set_back_sensor_distance (distance : STRING)
		do
			BACK_SENSOR_DISTANCE := distance.to_real_64
		end

	set_sensor_angle_front_1 (angle : STRING)
		do
			SENSOR_ANGLE_FRONT_1 := angle.to_real_64
		end

	set_sensor_angle_front_2 (angle : STRING)
		do
			SENSOR_ANGLE_FRONT_2 := angle.to_real_64
		end

	set_sensor_angle_front_3 (angle : STRING)
		do
			SENSOR_ANGLE_FRONT_3 := angle.to_real_64
		end

	set_sensor_angle_front_4 (angle : STRING)
		do
			SENSOR_ANGLE_FRONT_4 := angle.to_real_64
		end

	set_sensor_angle_front_5 (angle : STRING)
		do
			SENSOR_ANGLE_FRONT_5 := angle.to_real_64
		end

	set_sensor_angle_back_1 (angle : STRING)
		do
			SENSOR_ANGLE_BACK_1 := angle.to_real_64
		end

	set_sensor_angle_back_2 (angle : STRING)
		do
			SENSOR_ANGLE_BACK_2 := angle.to_real_64
		end

end -- class
