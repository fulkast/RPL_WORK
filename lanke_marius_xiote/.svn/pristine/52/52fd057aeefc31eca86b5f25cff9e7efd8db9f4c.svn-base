note
	description: "Summary description for {PID_PARAMETERS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CONNECTIVITY_PARAMETERS

inherit PARAMETERS

create
	make

feature  -- Initialization

	make
		do

			create variable_name_setter_map.make(5)
			create variable_name_getter_map.make(12)

			variable_name_setter_map.put (agent set_4_connect(), "FOUR_CONNECTIVITY_STRATEGY")
			variable_name_setter_map.put (agent set_8_connect(), "EIGHT_CONNECTIVITY_STRATEGY")

		end



feature -- Access

	set_4_connect
	do
		strategy4 := true
	end

	set_8_connect
	do
		strategy8 := true
	end

	get_strategy : GRID_CONNECTIVITY_STRATEGY
	do
		if strategy4 then
			result:= create{FOUR_CONNECTIVITY_STRATEGY}
		else
			result:= create{EIGHT_CONNECTIVITY_STRATEGY}
		end

	end

	strategy4 : BOOLEAN
	strategy8 : BOOLEAN

end
