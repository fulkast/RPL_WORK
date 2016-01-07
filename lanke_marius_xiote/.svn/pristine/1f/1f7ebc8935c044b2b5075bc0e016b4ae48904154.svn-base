note
	description: "Summary description for {PID_PARAMETERS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CONTROLLER_PARAMETERS

inherit
	PARAMETERS

create
	make

feature  -- Initialization

	make
		do
			CONTROLLER_NAME := "NULL"

			create variable_name_setter_map.make(5)

			variable_name_setter_map.put(agent set_controller_name() , "CONTROLLER_NAME")

			variable_name_setter_map.put (agent convert_set_REAL64(? , agent set_k_p()), "k_p")
			variable_name_setter_map.put (agent convert_set_REAL64(? , agent set_k_i()), "k_i")
			variable_name_setter_map.put (agent convert_set_REAL64(? , agent set_k_d()), "k_d")
			variable_name_setter_map.put (agent convert_set_REAL64(? , agent set_vx()), "vx")
		end

feature -- Access	

	CONTROLLER_NAME : STRING

	vx, k_p, k_i, k_d: REAL_64


	set_controller_name (beh : STRING)
		do
			CONTROLLER_NAME := beh
		end

	set_vx (a_val: REAL_64)
		do
			vx := a_val
		end

	set_k_p (a_val: REAL_64)
		do
			k_p := a_val
		end

	set_k_i (a_val: REAL_64)
		do
			k_i := a_val
		end

	set_k_d (a_val: REAL_64)
		do
			k_d := a_val
		end

end -- class
