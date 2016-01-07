note
	description: "Controller parameters."
	author: "Lanke Frank Tarimo Fu"
	date: "29.11.15"

class
	CONTROLLER_PARAMETERS

inherit
	PARAMETERS

create
	make

feature {NONE} -- Initialization

	make
		do
			CONTROLLER_NAME := "NULL"

		end

feature -- Access	

	CONTROLLER_NAME : STRING

	k_p_go, k_i_go, k_d_go: REAL_64
	k_p_vleave, k_i_vleave, k_d_vleave: REAL_64


	set_controller_name (beh : STRING)
		do
			CONTROLLER_NAME := beh
		end

	set_k_p_go (a_val: REAL_64)
		do
			k_p_go := a_val
		end

	set_k_i_go (a_val: REAL_64)
		do
			k_i_go := a_val
		end

	set_k_d_go (a_val: REAL_64)
		do
			k_d_go := a_val
		end

	set_k_p_vleave (a_val: REAL_64)
		do
			k_p_vleave := a_val
		end

	set_k_i_vleave (a_val: REAL_64)
		do
			k_i_vleave := a_val
		end

	set_k_d_vleave (a_val: REAL_64)
		do
			k_d_vleave := a_val
		end

end -- class
