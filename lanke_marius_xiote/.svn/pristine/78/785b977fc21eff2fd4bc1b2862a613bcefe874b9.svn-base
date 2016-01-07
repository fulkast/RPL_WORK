note
	description: "[
						This class parses files given filename and a params from parameter class 
						with a HASH_TABLE mapping parameter names to setter function agents {PARSER}.
					]"
	author: "Lanke Frank Tarimo Fu"

class
	PARSER[P ->  PARAMETERS]

feature
	parse_file(filename: STRING ; params : P):  P
		local
			input_file: PLAIN_TEXT_FILE
				-- File being parsed										
			proc : detachable PROCEDURE[ANY,TUPLE]
				-- The setter procedure							
			string_tokens: LIST[STRING]
				-- Current strings streamed	

		do
			create input_file.make_open_read (filename)

			from
    			input_file.read_line
    		until
    			input_file.exhausted
    		loop
				string_tokens := input_file.last_string.split (':')
					-- Separate variable name from given value		

				across params.variable_name_setter_map as eht loop
					-- Loop through current parameter class's variable names			
						string_tokens.at (1).adjust

		    		if (string_tokens.at (1).is_equal (eht.key)) then
		    				-- Check if candidate found
						proc := params.variable_name_setter_map.at(eht.key)
						if attached proc as run_it then
							-- Check if procedure was properly set						
							string_tokens.at (2).adjust
							run_it.call (string_tokens.at (2))

							debug
								-- Set the parameter with its correponding value	
								io.put_string ("Scanning parameter : " +
								string_tokens.at (1) + " = " + string_tokens.at (2) + "%N" )
							end
						end
					end
				end

				input_file.read_line
				-- Increment one line											
			end
			input_file.close
			Result := params
		end

end
