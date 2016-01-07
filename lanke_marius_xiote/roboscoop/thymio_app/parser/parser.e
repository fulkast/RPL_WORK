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
