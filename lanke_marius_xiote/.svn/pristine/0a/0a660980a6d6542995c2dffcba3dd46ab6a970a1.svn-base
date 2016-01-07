note
	description: "[
						This class parses files given filename and a params from parameter class 
						with a HASH_TABLE mapping parameter names to setter function agents {PARSER}.
					]"
	author: "Lanke Frank Tarimo Fu"
	date: "09.11.15"

deferred class
	PARSER[P ->  PARAMETERS]

feature -- Access

	-- Open txt_file and generate parameters

	parse_txt_file(filename: separate STRING ) : P
		deferred
		end

	-- Convert a parsed string to double
	parse_string2double(a_str : STRING) : REAL_64
		do
			result := a_str.to_double
		end

	-- Convert a parsed string to integer
	parse_string2integer(a_str : STRING) : INTEGER
		do
			result := a_str.to_integer
		end




end -- class


--		local
--			input_file: PLAIN_TEXT_FILE
--				-- File being parsed										
----			proc : detachable PROCEDURE[ANY,TUPLE]
--				-- The setter procedure							
--			string_tokens: LIST[STRING]
--				-- Current strings streamed	
----			is_set_map : HASH_TABLE[BOOLEAN,STRING]

--			exception_handler : EXCEPTIONS

--		do
--			create input_file.make_open_read (create {STRING}.make_from_separate (filename))
----			create is_set_map.make (1)
--			create exception_handler.default_create

--			if not input_file.access_exists then
--				io.putstring ("ERROR: Cannot open file " + create {STRING}.make_from_separate (filename) + "%N")
--			end

--			from
--    			input_file.read_line
--    		until
--    			input_file.exhausted
--    		loop
--				string_tokens := input_file.last_string.split (':')
--					-- Separate variable name from given value		

--				across params.variable_name_setter_map as  eht loop
--					is_set_map.put(false,eht.key)
--				end

--				across params.variable_name_setter_map as eht loop
--					-- Loop through current parameter class's variable names			
--						string_tokens.at (1).adjust

--		    		if (string_tokens.at (1).is_equal (eht.key)) then
--		    				-- Check if candidate found
--						proc := params.variable_name_setter_map.at(eht.key)
--						if attached proc as run_it then
--							-- Check if procedure was properly set						
--							string_tokens.at (2).adjust
--							run_it.call (string_tokens.at (2))
--							is_set_map.replace (true, eht.key)
--						end
--					end
--				end

--				input_file.read_line
--				-- Increment one line											
--			end

--			across is_set_map as eht loop
--				if eht.item = false then
--					io.putstring ("In file " + create {STRING}.make_from_separate (filename) + " " + eht.key + " is not set%N")
--				end
--			end

--			input_file.close
--		end
