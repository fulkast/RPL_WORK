note
	description: "Parameter class APP_PARAMETERS."
	author: "Lanke Frank Tarimo Fu"
	date: "09.11.15"

class
	APP_PARAMETERS

inherit
	PARAMETERS

create
	make

feature  -- Initialization

	make
		do
			create variable_name_setter_map.make(6)

			APP_NAME := "NULL"
			ROBOT_FILE_NAME := "NULL"
			ROBOT_NAME := "NULL"
			ALGORITHM_FILE_NAME := "NULL"
			ALGORITHM_NAME := "NULL"
			PATH_PLANNER_FILE_NAME := "NULL"

			variable_name_setter_map.put(agent set_app_name() , "APP_NAME")
			variable_name_setter_map.put(agent set_robot_name() , "ROBOT_NAME")
			variable_name_setter_map.put(agent set_robot_filename() , "ROBOT_FILE_NAME")
			variable_name_setter_map.put(agent set_algorithm_name() , "ALGORITHM_NAME")
			variable_name_setter_map.put(agent set_algorithm_filename() , "ALGORITHM_FILE_NAME")
			variable_name_setter_map.put(agent set_path_planner_file_name() , "PATH_PLANNER_FILE_NAME")
		end

feature	 -- Access

	APP_NAME : STRING
		-- Name of the app.

	ROBOT_FILE_NAME : STRING
		-- File names of the parameters to be parsed.

	ROBOT_NAME : STRING
		-- Name of the robot.

	ALGORITHM_FILE_NAME : STRING
		-- File names of the parameters to be parsed 			

	ALGORITHM_NAME : STRING
		-- Name fo the behavior.

	PATH_PLANNER_FILE_NAME : STRING
		-- File names of the parameters to be parsed

	set_app_name (the_app : STRING)

		do
			APP_NAME := the_app
		end

	set_robot_filename (file : STRING)

		do
			ROBOT_FILE_NAME := file
		end

	set_robot_name (robot : STRING)

		do
			ROBOT_NAME := robot
		end

	set_algorithm_filename (file : STRING)

		do
			ALGORITHM_FILE_NAME := file
		end

	set_algorithm_name (algorithm : STRING)

		do
			ALGORITHM_NAME := algorithm
		end

	set_path_planner_file_name (file : STRING)

		do
			PATH_PLANNER_FILE_NAME := file
		end

end -- class
