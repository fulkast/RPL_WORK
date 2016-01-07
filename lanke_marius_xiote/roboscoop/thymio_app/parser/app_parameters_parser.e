note
	description: "To parse app parameters"
	author: "Fu Lanke"
	date: "11.12.15"

class
	APP_PARAMETERS_PARSER

inherit
	PARSER[APP_PARAMETERS]

feature
	parse_txt_file(filename: separate STRING ) : APP_PARAMETERS

	local
		input_file: PLAIN_TEXT_FILE
		string_tokens: LIST[STRING]
		exception_handler : EXCEPTIONS
		parsed_parameters : APP_PARAMETERS
		variable_name,str2set : STRING
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
			io.putstring (string_tokens.at (1))
				-- Separate variable name from given value	
			variable_name := string_tokens.at (1)
			str2set := string_tokens.at (2)
			variable_name.adjust
			str2set.adjust
			io.putstring (str2set)
			string_tokens.at (2).adjust
				if variable_name.is_equal ("ALGORITHM_FILE_NAME")  then
				parsed_parameters.set_algorithm_filename (str2set)
				elseif variable_name.is_equal ("ALGORITHM_NAME")	then
				parsed_parameters.set_algorithm_name (str2set)
				elseif variable_name.is_equal ("APP_NAME")	then
				parsed_parameters.set_app_name (str2set)
				elseif variable_name.is_equal ("PATH_PLANNER_FILE_NAME")	then
				parsed_parameters.set_path_planner_file_name (str2set)
				elseif variable_name.is_equal ("ROBOT_FILE_NAME")	then
				parsed_parameters.set_robot_filename (str2set)
				elseif variable_name.is_equal ("ROBOT_NAME") then
				parsed_parameters.set_robot_name (str2set)
				end
    		end

			input_file.read_line
			-- Increment one line											

		end
		input_file.close

		result := parsed_parameters
	end
end -- class
