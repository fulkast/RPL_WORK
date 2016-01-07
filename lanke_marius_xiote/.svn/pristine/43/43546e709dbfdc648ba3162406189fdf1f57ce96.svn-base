note
	description: "Summary description for {APP_PARAMETERS}."
	author: "Lanke Frank Tarimo Fu"
	date: "$28.10.2015$"
	revision: "$1$"

class
	ROBOT_PARAMETERS

inherit
	PARAMETERS

create
	make

feature  -- Initialization

	make

	do

		create variable_name_setter_map.make(5)
		create variable_name_getter_map.make(12)

		BEHAVIOR_FILE_NAME := "NULL"
		BEHAVIOR_NAME := "NULL"
		ROBOT_NAME := "NULL"

		variable_name_setter_map.put(agent set_behavior_name() , "BEHAVIOR_NAME")
		variable_name_setter_map.put(agent set_behavior_filename() , "BEHAVIOR_FILE_NAME")


	end

feature	 -- Access

	ROBOT_NAME : STRING

	BEHAVIOR_FILE_NAME : STRING 			-- File names of the parameters to be parsed

	BEHAVIOR_NAME : STRING

	set_robot_name (rob : STRING)

		do
			ROBOT_NAME := rob
		end

	set_behavior_filename (file : STRING)

		do
			BEHAVIOR_FILE_NAME := file
		end

	set_behavior_name (behavior : STRING)

		do
			BEHAVIOR_NAME := behavior
		end

end
