note
	description: "Parameter class for path planner."
	author: "Xiaote Zhu"

class
	PATH_PLANNER_PARAMETER

inherit
	PARAMETERS

create
	make

feature {NONE} -- Initialization

	make
		do

		end

feature -- Access

	connect_four, connect_eight : BOOLEAN
		-- connectivity strategy boolean

	set_four_connect()
		-- Set to using four connectivity
		do
			connect_four := true
		end

	set_eight_connect()
		-- Set to using eight connectivity
		do
			connect_eight := true
		end

	get_connectivity_strategy()	: GRID_CONNECTIVITY_STRATEGY
		-- retrieve the set connectivity strategy
		do
			if connect_four then
				result:= create{FOUR_CONNECTIVITY_STRATEGY}
			else
				result:= create{EIGHT_CONNECTIVITY_STRATEGY}
			end
		end

	inflate_radius : REAL_64
		-- inflate radius to take into account robot's width.

	set_inflate_radius (a_val: REAL_64)
		do
			inflate_radius := a_val
		end

	start_x : REAL_64
		-- x coordinate of start position.

	set_start_x (a_val: REAL_64)
		do
			start_x := a_val
		end

	start_y : REAL_64
		-- y coordinate of start position.

	set_start_y (a_val: REAL_64)
		do
			start_y := a_val
		end

	start_z : REAL_64
		-- z coordinate of start position.

	set_start_z (a_val: REAL_64)
		do
			start_z := a_val
		end

	start_theta : REAL_64
		-- angle of start position.

	set_start_theta (a_val: REAL_64)
		do
			start_theta := a_val
		end

	goal_x : REAL_64
		-- x coordinate of goal position.

	set_goal_x (a_val: REAL_64)
		do
			goal_x := a_val
		end

	goal_y : REAL_64
		-- y coordinate of goal position.

	set_goal_y (a_val: REAL_64)
		do
			goal_y := a_val
		end

	goal_z : REAL_64
		-- z coordinate of goal position.

	set_goal_z (a_val: REAL_64)
		do
			goal_z := a_val
		end

	goal_theta : REAL_64
		-- angle of goal position.

	set_goal_theta (a_val: REAL_64)
		do
			goal_theta := a_val
		end

	number_of_destinations : INTEGER_32

	set_number_of_destinations (a_val: INTEGER_32)
		do
			number_of_destinations := a_val
		end

	viapoint1_x : REAL_64
		-- x coordinate of goal position.

	set_viapoint1_x (a_val: REAL_64)
		do
			viapoint1_x := a_val
		end

	viapoint1_y : REAL_64
		-- y coordinate of goal position.

	set_viapoint1_y (a_val: REAL_64)
		do
			viapoint1_y := a_val
		end

	viapoint1_z : REAL_64
		-- z coordinate of goal position.

	set_viapoint1_z (a_val: REAL_64)
		do
			viapoint1_z := a_val
		end

	viapoint1_theta : REAL_64
		-- angle of viapoint1 position.

	set_viapoint1_theta (a_val: REAL_64)
		do
			viapoint1_theta := a_val
		end

	viapoint2_x : REAL_64
		-- x coordinate of goal position.

	set_viapoint2_x (a_val: REAL_64)
		do
			viapoint2_x := a_val
		end

	viapoint2_y : REAL_64
		-- y coordinate of goal position.

	set_viapoint2_y (a_val: REAL_64)
		do
			viapoint2_y := a_val
		end

	viapoint2_z : REAL_64
		-- z coordinate of goal position.

	set_viapoint2_z (a_val: REAL_64)
		do
			viapoint2_z := a_val
		end

	viapoint2_theta : REAL_64
		-- angle of viapoint2 position.

	set_viapoint2_theta (a_val: REAL_64)
		do
			viapoint2_theta := a_val
		end

	viapoint3_x : REAL_64
		-- x coordinate of goal position.

	set_viapoint3_x (a_val: REAL_64)
		do
			viapoint3_x := a_val
		end

	viapoint3_y : REAL_64
		-- y coordinate of goal position.

	set_viapoint3_y (a_val: REAL_64)
		do
			viapoint3_y := a_val
		end

	viapoint3_z : REAL_64
		-- z coordinate of goal position.

	set_viapoint3_z (a_val: REAL_64)
		do
			viapoint3_z := a_val
		end

	viapoint3_theta : REAL_64
		-- angle of viapoint2 position.

	set_viapoint3_theta (a_val: REAL_64)
		do
			viapoint3_theta := a_val
		end

	jump_in_number_of_nodes: INTEGER

	set_jump_in_number_of_nodes (number: INTEGER)
		do
			jump_in_number_of_nodes := number
		end

	cur_wait_point_index: INTEGER

	set_cur_wait_point_index (number: INTEGER)
		do
			cur_wait_point_index := number
		end

end -- class
