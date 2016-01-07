note
	description: "Summary description for {PATH_PLANNER_PARAMETERS_PARSER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PATH_PLANNER_PARAMETERS_PARSER

inherit
	PARSER[PATH_PLANNER_PARAMETER]

feature
	parse_txt_file(filename: separate STRING ) : PATH_PLANNER_PARAMETER


	local
		input_file: PLAIN_TEXT_FILE
		string_tokens: LIST[STRING]
		exception_handler : EXCEPTIONS
		parsed_parameters : PATH_PLANNER_PARAMETER
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
			string_tokens.at (2).adjust
			str2set := string_tokens.at (2)
			if variable_name.is_equal ("GRID_CONNECTIVITY_STRATEGY" )  then
			parsed_parameters.set_connectivity (str2set)
			elseif variable_name.is_equal ("cur_wait_point_index")	then
			parsed_parameters.set_cur_wait_point_index (parse_string2integer(str2set))
			elseif variable_name.is_equal ("goal_theta")	then
			parsed_parameters.set_goal_theta (parse_string2double(str2set))
			elseif variable_name.is_equal ("goal_x")	then
			parsed_parameters.set_goal_x (parse_string2double(str2set))
			elseif variable_name.is_equal ("goal_y")	then
			parsed_parameters.set_goal_y (parse_string2double(str2set))
			elseif variable_name.is_equal ("goal_z")	then
			parsed_parameters.set_goal_z (parse_string2double(str2set))
			elseif variable_name.is_equal ("inflate_radius")	then
			parsed_parameters.set_inflate_radius (parse_string2double(str2set))
			elseif variable_name.is_equal ("jump_in_number_of_nodes")	then
			parsed_parameters.set_jump_in_number_of_nodes (parse_string2integer(str2set))
			elseif variable_name.is_equal ("number_of_destinations")	then
			parsed_parameters.set_number_of_destinations (parse_string2integer(str2set))
			elseif variable_name.is_equal ("start_theta")	then
			parsed_parameters.set_start_theta (parse_string2double(str2set))
			elseif variable_name.is_equal ("start_x")	then
			parsed_parameters.set_start_x (parse_string2double(str2set))
			elseif variable_name.is_equal ("start_y")	then
			parsed_parameters.set_start_y (parse_string2double(str2set))
			elseif variable_name.is_equal ("viapoint1_theta")	then
			parsed_parameters.set_start_z (parse_string2double(str2set))
			elseif variable_name.is_equal ("viapoint1_theta")	then
			parsed_parameters.set_viapoint1_theta (parse_string2double(str2set))
			elseif variable_name.is_equal ("viapoint1_y")	then
			parsed_parameters.set_viapoint1_y (parse_string2double(str2set))
			elseif variable_name.is_equal ("viapoint1_x")	then
			parsed_parameters.set_viapoint1_x (parse_string2double(str2set))
			elseif variable_name.is_equal ("viapoint1_z")	then
			parsed_parameters.set_viapoint1_z (parse_string2double(str2set))
			elseif variable_name.is_equal ("viapoint2_theta")	then
			parsed_parameters.set_viapoint2_theta (parse_string2double(str2set))
			elseif variable_name.is_equal ("viapoint2_x")	then
			parsed_parameters.set_viapoint2_x (parse_string2double(str2set))
			elseif variable_name.is_equal ("viapoint2_y")	then
			parsed_parameters.set_viapoint2_y (parse_string2double(str2set))
			elseif variable_name.is_equal ("viapoint2_z")	then
			parsed_parameters.set_viapoint2_z (parse_string2double(str2set))
			elseif variable_name.is_equal ("viapoint3_theta")	then
			parsed_parameters.set_viapoint3_theta (parse_string2double(str2set))
			elseif variable_name.is_equal ("viapoint3_x")	then
			parsed_parameters.set_viapoint3_x (parse_string2double(str2set))
			elseif variable_name.is_equal ("viapoint3_y")	then
			parsed_parameters.set_viapoint3_y (parse_string2double(str2set))
			elseif variable_name.is_equal ("viapoint3_z")	then
			parsed_parameters.set_viapoint3_z (parse_string2double(str2set))
			end

			end

			input_file.read_line
			-- Increment one line											
		end
		input_file.close

		result := parsed_parameters
	end

end
