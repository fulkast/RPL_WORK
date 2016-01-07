note
	description: "Parsing class for parameter input."
	author: "Marius Grimm"
	date: "19.10.2015"

class
	PARSER

feature -- Access

	read_parameters (file_path: STRING): PARAMETERS
		-- Read parameters from file.
		local
			input_file: PLAIN_TEXT_FILE
			string_tokens: LIST[STRING]
			params: PARAMETERS
	  	do
	  		create params
	    	create input_file.make_open_read (file_path)

	    	from
	    		input_file.read_line
	    	until
	    		input_file.exhausted
	    	loop
	    		string_tokens := input_file.last_string.split (':')

	    		if (string_tokens.at (1).is_equal ("goal_x")) then
	    			params.set_goal_x (string_tokens.at (2).to_real_64)
	    		elseif (string_tokens.at (1).is_equal ("goal_y")) then
	    			params.set_goal_y (string_tokens.at (2).to_real_64)
	    		elseif (string_tokens.at (1).is_equal ("k_i")) then
	    			params.set_k_i (string_tokens.at (2).to_real_64)
	    		elseif (string_tokens.at (1).is_equal ("k_p")) then
	    			params.set_k_p (string_tokens.at (2).to_real_64)
	    		elseif (string_tokens.at (1).is_equal ("k_d")) then
	    			params.set_k_d (string_tokens.at (2).to_real_64)
	    		elseif (string_tokens.at (1).is_equal ("desired_wall_distance")) then
	    			params.set_desired_wall_distance (string_tokens.at (2).to_real_64)
	    		elseif (string_tokens.at (1).is_equal ("obstacle_vanished_time_threshold")) then
	    			params.set_obstacle_vanished_time_threshold (string_tokens.at (2).to_real_64)
	    		elseif (string_tokens.at (1).is_equal ("angle_looped_around_threshold")) then
	    			params.set_angle_looped_around_threshold (string_tokens.at (2).to_real_64)
	    		elseif (string_tokens.at (1).is_equal ("vleave_reached_distance_threshold")) then
	    			params.set_vleave_reached_distance_threshold (string_tokens.at (2).to_real_64)
	    		elseif (string_tokens.at (1).is_equal ("goal_reached_distance_threshold")) then
	    			params.set_goal_reached_distance_threshold (string_tokens.at (2).to_real_64)
	    		elseif (string_tokens.at (1).is_equal ("vleave_reached_distance_threshold")) then
	    			params.set_vleave_reached_distance_threshold (string_tokens.at (2).to_real_64)
	    		elseif (string_tokens.at (1).is_equal ("angle_looped_around_threshold_unreachable")) then
	    			params.set_angle_looped_around_threshold_unreachable (string_tokens.at (2).to_real_64)
	    		elseif (string_tokens.at (1).is_equal ("goal_unreachable_distance_threshold")) then
	    			params.set_goal_unreachable_distance_threshold (string_tokens.at (2).to_real_64)
	    		elseif (string_tokens.at (1).is_equal ("vx")) then
	    			params.set_vx (string_tokens.at (2).to_real_64)
	    		end

	    		input_file.read_line
	    	end
	    	Result := params
	  	end

end -- class
