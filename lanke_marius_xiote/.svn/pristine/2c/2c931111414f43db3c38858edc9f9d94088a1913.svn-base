note
	description: "Abstract parameters class."
	author: "Lanke Frank Tarimo Fu"
	date: "09.11.15"

deferred class
	PARAMETERS

feature -- access

	convert_set_REAL64(a_string : STRING; setter : PROCEDURE[ANY,TUPLE])
				--
		do
			setter.call(a_string.to_real_64)
		end

	convert_set_INT64(a_string : STRING; setter : PROCEDURE[ANY,TUPLE])
				--
		do
			setter.call(a_string.to_integer)
		end

end -- class
