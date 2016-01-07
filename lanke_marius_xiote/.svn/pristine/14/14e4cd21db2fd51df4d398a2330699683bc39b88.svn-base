note
	description: "Helper class for creating separate strings out of the regular strings."
	author: "Rusakov Andrey"
	date: "15.10.2013"

class
	SEPARATE_STRING_MAKER

feature {NONE} -- Implementation. Inherit from this class in order to use the functionality.

	separate_str (a_str: STRING): separate STRING
			-- Creates the separate string from non-separate.
			-- (ad-hoc solution which is caused by the problem with .make_from_separate)
		local
			sep_str: separate STRING
		do
			create sep_str.make (a_str.count)
			make_separate_string (a_str, sep_str)
			Result := sep_str
		end

	make_separate_string (a_str: STRING; a_sep_str: separate STRING)
			-- Copying `a_str's content into `a_sep_str' character by character.
		local
			i: INTEGER
			j: INTEGER
		do
			from i := 1
			until i > a_str.count
			loop
				a_sep_str.append_character (a_str [i])
				j := a_sep_str.count -- This synchronous call ensures that the character got appended.
				i := i + 1
			end
		end
end
