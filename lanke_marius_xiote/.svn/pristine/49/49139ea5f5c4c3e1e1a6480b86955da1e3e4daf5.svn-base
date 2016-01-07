--note
--	description: "Parser class for path planner."
--	author: "Xiaote Zhu"

class
	PATH_PLANNER_PARSER

--feature -- Access

--<<<<<<< .mine

--	read_parameters (file_path: STRING): PATH_PLANNER_PARAMETER
--			-- Create PATH_PLANNER_PARAMETER based on given parameter file.
--		local
--			input_file: PLAIN_TEXT_FILE
--			string_tokens: LIST[STRING]
--			params: PATH_PLANNER_PARAMETER
--	  	do
--	  		create params.make
--	    	create input_file.make_open_read (file_path)

----	read_parameters (file_path: STRING): PATH_PLANNER_PARAMETER
----			-- Create PATH_PLANNER_PARAMETER based on given parameter file.
----		local
----			input_file: PLAIN_TEXT_FILE
----			string_tokens: LIST[STRING]
----			params: PATH_PLANNER_PARAMETER
----	  	do
----	  		create params
----	    	create input_file.make_open_read (file_path)
-->>>>>>> .r787

----	    	from
----	    		input_file.read_line
----	    	until
----	    		input_file.exhausted
----	    	loop
----	    		string_tokens := input_file.last_string.split (':')

--<<<<<<< .mine
--	    		if string_tokens.at (1).is_equal ("inflate_radius") then
--	    			params.inflate_radius := string_tokens.at (2).to_real_64
--	    		elseif string_tokens.at (1).is_equal ("start_x") then
--	    			params.start_x := string_tokens.at (2).to_real_64
--	    		elseif string_tokens.at (1).is_equal ("start_y") then
--	    			params.start_y := string_tokens.at (2).to_real_64
--	    		elseif string_tokens.at (1).is_equal ("start_z") then
--	    			params.start_z := string_tokens.at (2).to_real_64
--	    		elseif string_tokens.at (1).is_equal ("goal_x") then
--	    			params.goal_x := string_tokens.at (2).to_real_64
--	    		elseif string_tokens.at (1).is_equal ("goal_y") then
--	    			params.goal_y := string_tokens.at (2).to_real_64
--	    		elseif string_tokens.at (1).is_equal ("goal_z") then
--	    			params.goal_z := string_tokens.at (2).to_real_64
--	    		elseif string_tokens.at (1).is_equal ("conn_strategy") then
--	    			params.conn_strategy := string_tokens.at (2).to_string_32
--	    		elseif string_tokens.at (1).is_equal ("conn_strategy") then
--	    			params.set_conn_strategy2 (string_tokens.at (2).to_string_32)
--	    		end
--=======
----	    		if string_tokens.at (1).is_equal ("inflate_radius") then
----	    			params.inflate_radius := string_tokens.at (2).to_real_64
----	    		elseif string_tokens.at (1).is_equal ("start_x") then
----	    			params.start_x := string_tokens.at (2).to_real_64
----	    		elseif string_tokens.at (1).is_equal ("start_y") then
----	    			params.start_y := string_tokens.at (2).to_real_64
----	    		elseif string_tokens.at (1).is_equal ("goal_x") then
----	    			params.goal_x := string_tokens.at (2).to_real_64
----	    		elseif string_tokens.at (1).is_equal ("goal_y") then
----	    			params.goal_y := string_tokens.at (2).to_real_64
----	    		end
-->>>>>>> .r787

--<<<<<<< .mine
----		    	inspect string_tokens.at (1)
----		    	when string_tokens.at (1).is_equal ("inflate_radius") then
----		    		params.inflate_radius := string_tokens.at (2).to_real_64
----		    	when string_tokens.at (1).is_equal ("start_x") then
----			   		params.start_x := string_tokens.at (2).to_real_64
----			   	when string_tokens.at (1).is_equal ("start_y") then
----		    		params.start_y := string_tokens.at (2).to_real_64
----		    	when string_tokens.at (1).is_equal ("goal_x") then
----		   			params.goal_x := string_tokens.at (2).to_real_64
----		    	when string_tokens.at (1).is_equal ("goal_y") then
----		    		params.goal_y := string_tokens.at (2).to_real_64
----	    		end

--	    		input_file.read_line
--	    	end
--=======
----	    		input_file.read_line
----	    	end
-->>>>>>> .r787

----	    	input_file.close
----	    	Result := params
----	  	end

end -- class
