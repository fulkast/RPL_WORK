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
			variable_name_setter_map.put (agent set_goal_x(), "goal_x")
			variable_name_setter_map.put (agent set_goal_y(), "goal_y")

			variable_name_getter_map.put (agent get_inflate_radius(), "inflate_radius")
			variable_name_getter_map.put (agent get_start_x(), "start_x")
			variable_name_getter_map.put (agent get_start_y(), "start_y")
			variable_name_getter_map.put (agent get_goal_x(), "goal_x")
			variable_name_getter_map.put (agent get_goal_y(), "goal_y")
		end


feature -- Access

	inflate_radius : REAL_64 --assign set_inflate_radius
		-- inflate radius to take into account robot's width.

	set_inflate_radius (a_val: STRING)
		do
			inflate_radius := a_val.to_real_64
		end

	start_x : REAL_64 --assign set_start_x
		-- x coordinate of start position.

	set_start_x (a_val: STRING)
		do
			start_x := a_val.to_real_64
		end

	start_y : REAL_64 --assign set_start_y
		-- y coordinate of start position.

	set_start_y (a_val: STRING)
		do
			start_y := a_val.to_real_64
		end

	goal_x : REAL_64 --assign set_goal_x
		-- x coordinate of goal position.

	set_goal_x (a_val: STRING)
		do
			goal_x := a_val.to_real_64
		end

	goal_y : REAL_64 --assign set_goal_y
		-- y coordinate of goal position.

	set_goal_y (a_val: STRING)
		do
			goal_y := a_val.to_real_64
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
