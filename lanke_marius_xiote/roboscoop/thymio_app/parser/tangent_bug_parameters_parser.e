note
	description: "To parse tangent bug parameters"
	author: "Fu Lanke"
	date: "11.12.15"

class
	TANGENT_BUG_PARAMETERS_PARSER

inherit
	PARSER[TANGENT_BUG_PARAMETERS]

feature
	parse_txt_file(filename: separate STRING ) : TANGENT_BUG_PARAMETERS


	local
		input_file: PLAIN_TEXT_FILE
		string_tokens: LIST[STRING]
		exception_handler : EXCEPTIONS
		parsed_parameters : TANGENT_BUG_PARAMETERS
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
				if variable_name.is_equal ("ALGORITHM_NAME")  then
				parsed_parameters.set_algorithm_name (string_tokens.at (2))
				elseif variable_name.is_equal ( "CONTROLLER_FILE_NAME")	then
				parsed_parameters.set_controller_filename (string_tokens.at (2))
				elseif variable_name.is_equal (  "CONTROLLER_NAME"	)then
				parsed_parameters.set_controller_name ((string_tokens.at (2)))
				elseif variable_name.is_equal (  "desired_wall_distance")	then
				parsed_parameters.set_desired_wall_distance (parse_string2double(string_tokens.at (2)))
				elseif variable_name.is_equal (  "follow_wall_vx")	then
				parsed_parameters.set_follow_wall_vx (parse_string2double(string_tokens.at (2)))
				elseif variable_name.is_equal (  "go_vx") then
				parsed_parameters.set_go_vx (parse_string2double(string_tokens.at (2)))
				elseif variable_name.is_equal (  "goal_reached_distance_threshold" )then
				parsed_parameters.set_goal_reached_distance_threshold (parse_string2double(string_tokens.at (2)))
				elseif variable_name.is_equal (  "goal_unreachable_distance_threshold") then
				parsed_parameters.set_goal_unreachable_distance_threshold (parse_string2double(string_tokens.at (2)))
				elseif variable_name.is_equal (  "localize_vtheta" )then
				parsed_parameters.set_localize_vtheta (parse_string2double(string_tokens.at (2)))
				elseif variable_name.is_equal (  "move_to_next_goal_threshold") then
				parsed_parameters.set_move_to_next_goal_threshold (parse_string2double(string_tokens.at (2)))
				elseif variable_name.is_equal (  "obstacle_vanished_time_threshold") then
				parsed_parameters.set_obstacle_vanished_time_threshold (parse_string2double(string_tokens.at (2)))
				elseif variable_name.is_equal (  "searh_vleave_pub_duration") then
				parsed_parameters.set_search_vleave_pub_duration (parse_string2integer(string_tokens.at (2)))
				elseif variable_name.is_equal (  "transit_vx" )then
				parsed_parameters.set_transit_vx (parse_string2double(string_tokens.at (2)))
				elseif variable_name.is_equal (  "vleave_pub_duration") then
				parsed_parameters.set_vleave_pub_duration (parse_string2integer(string_tokens.at (2)))
				elseif variable_name.is_equal (  "vleave_reached_distance_threshold") then
				parsed_parameters.set_vleave_reached_distance_threshold (parse_string2double(string_tokens.at (2)))
				elseif variable_name.is_equal (  "wait_point_angle_threshold") then
				parsed_parameters.set_wait_point_angle_threshold (parse_string2double(string_tokens.at (2)))
				elseif variable_name.is_equal (  "wait_point_distance_threshold") then
				parsed_parameters.set_wait_point_distance_threshold (parse_string2double(string_tokens.at (2)))
				end

			end

			input_file.read_line
			-- Increment one line											
		end
		input_file.close

		result := parsed_parameters
	end
end
