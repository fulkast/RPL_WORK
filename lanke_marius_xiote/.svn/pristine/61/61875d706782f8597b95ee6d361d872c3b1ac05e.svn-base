note
	description: "Parameter class for path planner."
	author: "Xiaote Zhu"

class
	PATH_PLANNER_PARAMETER

inherit PARAMETERS

create
	make

feature  -- Initialization

	make
		do
			create variable_name_setter_map.make(5)
			create variable_name_getter_map.make(5)

			variable_name_setter_map.put (agent set_inflate_radius(), "inflate_radius")
			variable_name_setter_map.put (agent set_start_x(), "start_x")
			variable_name_setter_map.put (agent set_start_y(), "start_y")
			variable_name_setter_map.put (agent set_start_z(), "start_z")
			variable_name_setter_map.put (agent set_goal_x(), "goal_x")
			variable_name_setter_map.put (agent set_goal_y(), "goal_y")
			variable_name_setter_map.put (agent set_goal_z(), "goal_z")
			variable_name_setter_map.put (agent set_connectivity(), "GRID_CONNECTIVITY_STRATEGY")
			variable_name_setter_map.put (agent set_four_connect(), "FOUR_CONNECTIVITY_STRATEGY")
			variable_name_setter_map.put (agent set_eight_connect(), "EIGHT_CONNECTIVITY_STRATEGY")

			variable_name_getter_map.put (agent get_inflate_radius(), "inflate_radius")
			variable_name_getter_map.put (agent get_start_x(), "start_x")
			variable_name_getter_map.put (agent get_start_y(), "start_y")
			variable_name_getter_map.put (agent get_goal_x(), "goal_x")
			variable_name_getter_map.put (agent get_goal_y(), "goal_y")

		end

feature -- Access

	connect_four, connect_eight : BOOLEAN -- connectivity strategy boolean

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

	set_inflate_radius (a_val: STRING)
		do
			inflate_radius := a_val.to_real_64
		end

	start_x : REAL_64
		-- x coordinate of start position.

	set_start_x (a_val: STRING)
		do
			start_x := a_val.to_real_64
		end

	start_y : REAL_64
		-- y coordinate of start position.

	set_start_y (a_val: STRING)
		do
			start_y := a_val.to_real_64
		end

	start_z : REAL_64
		-- z coordinate of start position.

	set_start_z (a_val: STRING)
		do
			start_z := a_val.to_double
		end

	goal_x : REAL_64
		-- x coordinate of goal position.

	set_goal_x (a_val: STRING)
		do
			goal_x := a_val.to_real_64
		end

	goal_y : REAL_64
		-- y coordinate of goal position.

	set_goal_y (a_val: STRING)
		do
			goal_y := a_val.to_real_64
		end

	goal_z : REAL_64
		-- z coordinate of goal position.

	set_goal_z (a_val: STRING)
		do
			goal_z := a_val.to_double
		end

	get_inflate_radius : REAL_64
		do
			result := inflate_radius
		end

	get_start_x : REAL_64
		do
			result := start_x
		end

	get_start_y : REAL_64
		do
			result := start_y
		end

	get_goal_x : REAL_64
		do
			result := goal_x
		end

	get_goal_y : REAL_64
		do
			result := goal_y
		end

end -- class
