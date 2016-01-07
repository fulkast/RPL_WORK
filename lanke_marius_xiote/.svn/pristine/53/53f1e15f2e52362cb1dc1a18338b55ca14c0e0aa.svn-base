note
	description: "Parsing class for parameter input."
	author: "Marius Grimm"
	date: "19.10.2015"

class
	PARSER

feature

	read_parameters (file_path: STRING): PARAMETERS
		local
			input_file: PLAIN_TEXT_FILE
			string_tokens: LIST[STRING]
			params: PARAMETERS
	  	do
	  		create params.make
	    	create input_file.make_open_read (file_path)

	    	from
	    		input_file.read_line
	    	until
	    		input_file.exhausted
	    	loop
	    		string_tokens := input_file.last_string.split (':')

	    		if (string_tokens.at (1).is_equal ("goal_x")) then
	    			params.set_goal_x (string_tokens.at (2).to_real)
	    		elseif (string_tokens.at (1).is_equal ("goal_y")) then
	    			params.set_goal_y (string_tokens.at (2).to_real)
--	    		elseif
	    		end

	    		Result := params
	    		input_file.read_line
	    	end
	  	end
end -- class PARSING
