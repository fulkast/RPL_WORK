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
			create variable_name_setter_map.make(5)

			variable_name_setter_map.put (agent convert_set_REAL64(? , agent set_inflate_radius()), "inflate_radius")
			variable_name_setter_map.put (agent convert_set_REAL64(? , agent set_start_x()), "start_x")
			variable_name_setter_map.put (agent convert_set_REAL64(? , agent set_start_y()), "start_y")
			variable_name_setter_map.put (agent convert_set_REAL64(? , agent set_start_z()), "start_z")
			variable_name_setter_map.put (agent convert_set_REAL64(? , agent set_goal_x()), "goal_x")
			variable_name_setter_map.put (agent convert_set_REAL64(? , agent set_goal_y()), "goal_y")
			variable_name_setter_map.put (agent convert_set_REAL64(? , agent set_goal_z()), "goal_z")

			variable_name_setter_map.put (agent convert_set_INT64(? , agent set_number_of_destinations()), "number_of_destinations")
			variable_name_setter_map.put (agent convert_set_REAL64(? , agent set_viapoint1_x()), "viapoint1_x")
			variable_name_setter_map.put (agent convert_set_REAL64(? , agent set_viapoint1_y()), "viapoint1_y")
			variable_name_setter_map.put (agent convert_set_REAL64(? , agent set_viapoint1_z()), "viapoint1_z")
			variable_name_setter_map.put (agent convert_set_REAL64(? , agent set_viapoint2_x()), "viapoint2_x")
			variable_name_setter_map.put (agent convert_set_REAL64(? , agent set_viapoint2_y()), "viapoint2_y")
			variable_name_setter_map.put (agent convert_set_REAL64(? , agent set_viapoint2_z()), "viapoint2_z")


			variable_name_setter_map.put (agent convert_set_INT64(? , agent set_cur_wait_point_index()), "cur_wait_point_index")

			variable_name_setter_map.put (agent set_connectivity(), "GRID_CONNECTIVITY_STRATEGY")
			variable_name_setter_map.put (agent set_four_connect(), "FOUR_CONNECTIVITY_STRATEGY")
			variable_name_setter_map.put (agent set_eight_connect(), "EIGHT_CONNECTIVITY_STRATEGY")
			variable_name_setter_map.put (agent convert_set_INT64(? , agent set_jump_in_number_of_nodes()), "jump_in_number_of_nodes")
		end

feature -- Access

	connect_four, connect_eight : BOOLEAN
		-- connectivity strategy boolean

	set_connectivity(str : STRING)
		-- Set the connectivity using one of the below functions
		do
			if attached variable_name_setter_map.at (str) as setter then
				setter.call
			end
		end

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
