note
	description: "Summary description for {TANGENT_BUG_PARAMETERS}."
	author: "Xiaote Zhu"

class
	TANGENT_BUG_PARAMETERS


inherit PARAMETERS

create
	make

feature  -- Initialization

	make
		do
			ALGORITHM_NAME := "NULL"
			CONTROLLER_NAME := "NULL"
			CONTROLLER_FILE_NAME := "NULL"
			WALL_FOLLOW_CONTROLLER_FILE_NAME := "NULL"

			create variable_name_setter_map.make(12)

			variable_name_setter_map.put(agent set_algorithm_name() , "ALGORITHM_NAME")
			variable_name_setter_map.put(agent set_controller_name() , "CONTROLLER_NAME")
			variable_name_setter_map.put(agent set_controller_filename() , "CONTROLLER_FILE_NAME")
			variable_name_setter_map.put(agent set_wall_follow_controller_file_name() , "WALL_FOLLOW_CONTROLLER_FILE_NAME")

			variable_name_setter_map.put (agent convert_set_REAL64(? , agent set_desired_wall_distance()), "desired_wall_distance")
			variable_name_setter_map.put (agent convert_set_REAL64(? , agent set_goal_unreachable_distance_threshold()), "goal_unreachable_distance_threshold")
			variable_name_setter_map.put (agent convert_set_REAL64(? , agent set_angle_looped_around_threshold_unreachable()), "angle_looped_around_threshold_unreachable")
			variable_name_setter_map.put (agent convert_set_REAL64(? , agent set_vleave_reached_distance_threshold()), "vleave_reached_distance_threshold")
			variable_name_setter_map.put (agent convert_set_REAL64(? , agent set_goal_reached_distance_threshold()), "goal_reached_distance_threshold")
			variable_name_setter_map.put (agent convert_set_REAL64(? , agent set_obstacle_vanished_time_threshold()), "obstacle_vanished_time_threshold")
			variable_name_setter_map.put (agent convert_set_REAL64(? , agent set_angle_looped_around_threshold()), "angle_looped_around_threshold")
			variable_name_setter_map.put (agent convert_set_REAL64(? , agent set_move_to_next_goal_threshold()), "move_to_next_goal_threshold")
			variable_name_setter_map.put (agent convert_set_REAL64(? , agent set_goal_x()), "goal_x")
			variable_name_setter_map.put (agent convert_set_REAL64(? , agent set_goal_y()), "goal_y")
			variable_name_setter_map.put (agent convert_set_REAL64(? , agent set_vx()), "vx")
		end



feature -- Access	

	ALGORITHM_NAME : STRING
	CONTROLLER_NAME : STRING
	CONTROLLER_FILE_NAME,WALL_FOLLOW_CONTROLLER_FILE_NAME : STRING

	goal_x: REAL_64
	goal_y: REAL_64
	vx: REAL_64
	desired_wall_distance: REAL_64
	goal_unreachable_distance_threshold: REAL_64
	angle_looped_around_threshold_unreachable: REAL_64
	vleave_reached_distance_threshold, goal_reached_distance_threshold: REAL_64
	obstacle_vanished_time_threshold, angle_looped_around_threshold: REAL_64
	move_to_next_goal_threshold: REAL_64

	set_algorithm_name (alg : STRING)

		do
			ALGORITHM_NAME := alg
		end

	set_controller_name (cntlr : STRING)

		do
			CONTROLLER_NAME := cntlr
		end

	set_controller_filename (file : STRING)

		do
			CONTROLLER_FILE_NAME := file
		end

	set_wall_follow_controller_file_name (file : STRING)

		do
			WALL_FOLLOW_CONTROLLER_FILE_NAME := file
		end

	set_desired_wall_distance (a_val: REAL_64)
		do
			desired_wall_distance := a_val
		end


	set_obstacle_vanished_time_threshold (a_val: REAL_64)
		do
			obstacle_vanished_time_threshold := a_val
		end

	set_angle_looped_around_threshold (a_val: REAL_64)
		do
			angle_looped_around_threshold := a_val
		end

	set_move_to_next_goal_threshold (a_val: REAL_64)
		do
			move_to_next_goal_threshold := a_val
		end

	set_vleave_reached_distance_threshold (a_val: REAL_64)
		do
			vleave_reached_distance_threshold := a_val
		end

	set_goal_reached_distance_threshold (a_val: REAL_64)
		do
			goal_reached_distance_threshold := a_val
		end

	set_angle_looped_around_threshold_unreachable (a_val: REAL_64)
		do
			angle_looped_around_threshold_unreachable := a_val
		end

	set_goal_unreachable_distance_threshold (a_val: REAL_64)
		do
			goal_unreachable_distance_threshold := a_val
		end

	set_goal_x (a_val: REAL_64)
		do
			goal_x := a_val
		end

	set_goal_y (a_val: REAL_64)
		do
			goal_y := a_val
		end

	set_vx (a_val: REAL_64)
		do
			vx := a_val
		end

end -- class
