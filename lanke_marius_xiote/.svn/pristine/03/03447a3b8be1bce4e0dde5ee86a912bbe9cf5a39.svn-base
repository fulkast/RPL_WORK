note
	description: "Summary description for {APP_PARAMETERS}."
	author: "Lanke Frank Tarimo Fu"
	date: "$28.10.2015$"
	revision: "$1$"

class
	APP_PARAMETERS

inherit
	PARAMETERS

create
	make

feature  -- Initialization

	make

	do

		create variable_name_setter_map.make(5)
		create variable_name_getter_map.make(12)

		APP_NAME := "NULL"
		ROBOT_FILE_NAME := "NULL"
		ROBOT_NAME := "NULL"
		PATH_PLANNER_FILE_NAME := "NULL"

		variable_name_setter_map.put(agent set_app_name() , "APP_NAME")
		variable_name_setter_map.put(agent set_robot_name() , "ROBOT_NAME")
		variable_name_setter_map.put(agent set_robot_filename() , "ROBOT_FILE_NAME")
		variable_name_setter_map.put(agent set_path_planner_file_name() , "PATH_PLANNER_FILE_NAME")


	end

feature	 -- Access

	APP_NAME : STRING

	ROBOT_FILE_NAME : STRING 			-- File names of the parameters to be parsed

	ROBOT_NAME : STRING

	PATH_PLANNER_FILE_NAME : STRING

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

	set_path_planner_file_name (file : STRING)

		do
			PATH_PLANNER_FILE_NAME := file
		end

end
