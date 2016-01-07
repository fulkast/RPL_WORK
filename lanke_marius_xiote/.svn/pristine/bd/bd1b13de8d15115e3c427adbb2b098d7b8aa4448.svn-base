note
	description: "Summary description for {TANGENT_BUG_PARAMETERS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

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

			create variable_name_setter_map.make(12)
			create variable_name_getter_map.make(12)

			variable_name_setter_map.put(agent set_algorithm_name() , "ALGORITHM_NAME")
			variable_name_setter_map.put(agent set_controller_name() , "CONTROLLER_NAME")
			variable_name_setter_map.put(agent set_controller_filename() , "CONTROLLER_FILE_NAME")

			variable_name_setter_map.put (agent set_desired_wall_distance(), "desired_wall_distance")
			variable_name_setter_map.put (agent set_goal_unreachable_distance_threshold(), "goal_unreachable_distance_threshold")
			variable_name_setter_map.put (agent set_angle_looped_around_threshold_unreachable(), "angle_looped_around_threshold_unreachable")
			variable_name_setter_map.put (agent set_vleave_reached_distance_threshold(), "vleave_reached_distance_threshold")
			variable_name_setter_map.put (agent set_goal_reached_distance_threshold(), "goal_reached_distance_threshold")
			variable_name_setter_map.put (agent set_obstacle_vanished_time_threshold(), "obstacle_vanished_time_threshold")
			variable_name_setter_map.put (agent set_angle_looped_around_threshold(), "angle_looped_around_threshold")
			variable_name_setter_map.put (agent set_goal_x(), "goal_x")
			variable_name_setter_map.put (agent set_goal_y(), "goal_y")
			variable_name_setter_map.put (agent set_vx(), "vx")

			variable_name_getter_map.put(agent get_algorithm_name() , "ALGORITHM_NAME")
			variable_name_getter_map.put(agent get_controller_name() , "CONTROLLER_NAME")
			variable_name_getter_map.put(agent get_controller_filename() , "CONTROLLER_FILE_NAME")

			variable_name_getter_map.put (agent get_desired_wall_distance(), "desired_wall_distance")
			variable_name_getter_map.put (agent get_goal_unreachable_distance_threshold(), "goal_unreachable_distance_threshold")
			variable_name_getter_map.put (agent get_angle_looped_around_threshold_unreachable(), "angle_looped_around_threshold_unreachable")
			variable_name_getter_map.put (agent get_vleave_reached_distance_threshold(), "vleave_reached_distance_threshold")
			variable_name_getter_map.put (agent get_goal_reached_distance_threshold(), "goal_reached_distance_threshold")
			variable_name_getter_map.put (agent get_obstacle_vanished_time_threshold(), "obstacle_vanished_time_threshold")
			variable_name_getter_map.put (agent get_angle_looped_around_threshold(), "angle_looped_around_threshold")
			variable_name_getter_map.put (agent get_goal_x(), "goal_x")
			variable_name_getter_map.put (agent get_goal_y(), "goal_y")
			variable_name_getter_map.put (agent get_vx(), "vx")




		end



feature -- Access	

	ALGORITHM_NAME : STRING
	CONTROLLER_NAME : STRING
	CONTROLLER_FILE_NAME : STRING

	goal_x: REAL_64
	goal_y: REAL_64
	vx: REAL_64
	desired_wall_distance: REAL_64
	goal_unreachable_distance_threshold: REAL_64
	angle_looped_around_threshold_unreachable: REAL_64
	vleave_reached_distance_threshold, goal_reached_distance_threshold: REAL_64
	obstacle_vanished_time_threshold, angle_looped_around_threshold: REAL_64

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

	set_desired_wall_distance (a_val: STRING)
		do
			desired_wall_distance := a_val.to_real_64
		end


	set_obstacle_vanished_time_threshold (a_val: STRING)
		do
			obstacle_vanished_time_threshold := a_val.to_real_64
		end

	set_angle_looped_around_threshold (a_val: STRING)
		do
			angle_looped_around_threshold := a_val.to_real_64
		end



	set_vleave_reached_distance_threshold (a_val: STRING)
		do
			vleave_reached_distance_threshold := a_val.to_real_64
		end

	set_goal_reached_distance_threshold (a_val: STRING)
		do
			goal_reached_distance_threshold := a_val.to_real_64
		end



	set_angle_looped_around_threshold_unreachable (a_val: STRING)
		do
			angle_looped_around_threshold_unreachable := a_val.to_real_64
		end



	set_goal_unreachable_distance_threshold (a_val: STRING)
		do
			goal_unreachable_distance_threshold := a_val.to_real_64
		end

	set_goal_x (a_val: STRING)
		do
			goal_x := a_val.to_real_64
		end

	set_goal_y (a_val: STRING)
		do
			goal_y := a_val.to_real_64
		end



	set_vx (a_val: STRING)
		do
			vx := a_val.to_real_64
		end



	get_algorithm_name ()

		do
--			Result := ALGORITHM_NAME
		end

	get_controller_name () : STRING

		do
			RESULT := CONTROLLER_NAME
		end

	get_controller_filename () : STRING

		do
			RESULT := CONTROLLER_FILE_NAME
		end

	get_desired_wall_distance () : REAL_64
		do
			RESULT := desired_wall_distance
		end


	get_obstacle_vanished_time_threshold () : REAL_64
		do
			RESULT := obstacle_vanished_time_threshold
		end

	get_angle_looped_around_threshold () : REAL_64
		do
			RESULT := angle_looped_around_threshold
		end



	get_vleave_reached_distance_threshold () : REAL_64
		do
			RESULT := vleave_reached_distance_threshold
		end

	get_goal_reached_distance_threshold () : REAL_64
		do
			RESULT := goal_reached_distance_threshold
		end



	get_angle_looped_around_threshold_unreachable () : REAL_64
		do
			RESULT := angle_looped_around_threshold_unreachable
		end



	get_goal_unreachable_distance_threshold () : REAL_64
		do
			RESULT := goal_unreachable_distance_threshold
		end

	get_goal_x () : REAL_64
		do
			RESULT := goal_x
		end

	get_goal_y () : REAL_64
		do
			RESULT := goal_y
		end


	get_vx () : REAL_64
		do
			RESULT := vx
		end



end
