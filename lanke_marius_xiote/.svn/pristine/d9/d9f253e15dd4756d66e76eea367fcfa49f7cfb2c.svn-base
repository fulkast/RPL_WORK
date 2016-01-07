note
	description: "Summary description for {ROBOT_PARAMETERS_PARSERS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ROBOT_PARAMETERS_PARSER

inherit
	PARSER[ROBOT_PARAMETERS]


feature
	parse_txt_file(filename: separate STRING ) : ROBOT_PARAMETERS


	local
		input_file: PLAIN_TEXT_FILE
		string_tokens: LIST[STRING]
		exception_handler : EXCEPTIONS
		parsed_parameters : ROBOT_PARAMETERS
		variable_name : STRING

	do
		create input_file.make_open_read (create {STRING}.make_from_separate (filename))
		create exception_handler.default_create
		create parsed_parameters.make
		if not input_file.access_exists then
			io.putstring ("ERROR: Cannot open file " + create {STRING}.make_from_separate (filename) + "%N")
		end

		from
    			input_file.read_line
    		until
    			input_file.exhausted
    		loop

    		if not input_file.last_string.is_empty then

			string_tokens := input_file.last_string.split (':')
				-- Separate variable name from given value		
			variable_name := string_tokens.at (1)
			variable_name.adjust
			string_tokens.at (2).adjust

			if variable_name.is_equal ( "BACK_SENSOR_DISTANCE" ) then
			parsed_parameters.set_back_sensor_distance (parse_string2double(string_tokens.at (2)))
			elseif variable_name.is_equal ( "FRONT_SENSOR_DISTANCE")	then
			parsed_parameters.set_front_sensor_distance (parse_string2double(string_tokens.at (2)))
			elseif variable_name.is_equal (   "NUMBER_OF_BACK_SENSORS")	then
			parsed_parameters.set_number_of_back_sensors (parse_string2integer(string_tokens.at (2)))
			elseif variable_name.is_equal (   "NUMBER_OF_FRONT_SENSORS")	then
			parsed_parameters.set_number_of_front_sensors (parse_string2integer(string_tokens.at (2)))
			elseif variable_name.is_equal (   "ROBOT_NAME"	)then
			parsed_parameters.set_robot_name ((string_tokens.at (2)))
			elseif variable_name.is_equal (   "SENSOR_ANGLE_BACK_1" )then
			parsed_parameters.set_sensor_angle_back_1 (parse_string2double(string_tokens.at (2)))
			elseif variable_name.is_equal (   "SENSOR_ANGLE_BACK_2") then
			parsed_parameters.set_sensor_angle_back_2 (parse_string2double(string_tokens.at (2)))
			elseif variable_name.is_equal (   "SENSOR_ANGLE_FRONT_1") then
			parsed_parameters.set_sensor_angle_front_1 (parse_string2double(string_tokens.at (2)))
			elseif variable_name.is_equal (   "SENSOR_ANGLE_FRONT_2") then
			parsed_parameters.set_sensor_angle_front_2 (parse_string2double(string_tokens.at (2)))
			elseif variable_name.is_equal (   "SENSOR_ANGLE_FRONT_3") then
			parsed_parameters.set_sensor_angle_front_3 (parse_string2double(string_tokens.at (2)))
			elseif variable_name.is_equal (   "SENSOR_ANGLE_FRONT_4") then
			parsed_parameters.set_sensor_angle_front_4 (parse_string2double(string_tokens.at (2)))
			elseif variable_name.is_equal (   "SENSOR_ANGLE_FRONT_5") then
			parsed_parameters.set_sensor_angle_front_5 (parse_string2double(string_tokens.at (2)))
			elseif variable_name.is_equal (   "TOTAL_NUMBER_OF_SENSORS") then
			parsed_parameters.set_total_number_of_sensors (parse_string2integer(string_tokens.at (2)))
			end

			end

			input_file.read_line
			-- Increment one line											
		end
		input_file.close

		result := parsed_parameters
	end


end
