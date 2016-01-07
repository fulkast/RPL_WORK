note
	description: "To parse controller parameters"
	author: "Fu Lanke"
	date: "11.12.15"

class
	CONTROLLER_PARAMETERS_PARSER

inherit
	PARSER[CONTROLLER_PARAMETERS]

feature

	parse_txt_file(filename: separate STRING ) : CONTROLLER_PARAMETERS


	local
		input_file: PLAIN_TEXT_FILE
		string_tokens: LIST[STRING]
		exception_handler : EXCEPTIONS
		parsed_parameters : CONTROLLER_PARAMETERS
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
				-- Separate variable name from given value	
			variable_name := string_tokens.at (1)
			variable_name.adjust
			str2set := string_tokens.at (2)
			str2set.adjust
				if variable_name.is_equal ("CONTROLLER_NAME")  then
				parsed_parameters.set_controller_name (str2set)
				elseif variable_name.is_equal ("k_d_go")	then
				parsed_parameters.set_k_d_go (parse_string2double(str2set))
				elseif variable_name.is_equal (  "k_d_vleave")	then
				parsed_parameters.set_k_d_vleave (parse_string2double(str2set))
				elseif variable_name.is_equal (  "k_i_go")	then
				parsed_parameters.set_k_i_go (parse_string2double(str2set))
				elseif variable_name.is_equal (  "k_i_vleave")	then
				parsed_parameters.set_k_i_vleave (parse_string2double(str2set))
				elseif variable_name.is_equal (  "k_p_go")	then
				parsed_parameters.set_k_p_go (parse_string2double(str2set))
				elseif variable_name.is_equal (  "k_p_vleave")	then
				parsed_parameters.set_k_p_vleave (parse_string2double(str2set))
				end

			end
			input_file.read_line
			-- Increment one line											
		end
		input_file.close

		result := parsed_parameters
	end
end
