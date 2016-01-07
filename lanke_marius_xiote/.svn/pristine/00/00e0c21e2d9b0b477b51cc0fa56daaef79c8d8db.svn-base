note
	description: "Tangent bug parameters."
	author: "Xiaote Zhu"

class
	TANGENT_BUG_PARAMETERS

inherit PARAMETERS

create
	make

feature {NONE} -- Initialization

	make
		do
			ALGORITHM_NAME := "NULL"
			CONTROLLER_NAME := "NULL"
			CONTROLLER_FILE_NAME := "NULL"

		end



feature -- Access	

	ALGORITHM_NAME : STRING
	CONTROLLER_NAME : STRING
	CONTROLLER_FILE_NAME: STRING

	go_vx: REAL_64
	follow_wall_vx: REAL_64
	transit_vx: REAL_64
	localize_vtheta: REAL_64
	desired_wall_distance: REAL_64
	goal_reached_distance_threshold, goal_unreachable_distance_threshold, vleave_reached_distance_threshold: REAL_64
	wait_point_distance_threshold, wait_point_angle_threshold: REAL_64
	obstacle_vanished_time_threshold: REAL_64
	move_to_next_goal_threshold: REAL_64
	vleave_pub_duration: INTEGER_64
	search_vleave_pub_duration: INTEGER_64

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

	set_desired_wall_distance (a_val: REAL_64)
		do
			desired_wall_distance := a_val
		end

	set_obstacle_vanished_time_threshold (a_val: REAL_64)
		do
			obstacle_vanished_time_threshold := a_val
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

	set_wait_point_distance_threshold (a_val: REAL_64)
		do
			wait_point_distance_threshold := a_val
		end

	set_wait_point_angle_threshold (a_val: REAL_64)
		do
			wait_point_angle_threshold := a_val
		end

	set_goal_unreachable_distance_threshold (a_val: REAL_64)
		do
			goal_unreachable_distance_threshold := a_val
		end

	set_vleave_pub_duration (a_val: INTEGER_64)
		do
			vleave_pub_duration := a_val
		end

	set_search_vleave_pub_duration (a_val: INTEGER_64)
		do
			search_vleave_pub_duration := a_val
		end

	set_go_vx (a_val: REAL_64)
		do
			go_vx := a_val
		end

	set_follow_wall_vx (a_val: REAL_64)
		do
			follow_wall_vx := a_val
		end

	set_transit_vx (a_val: REAL_64)
		do
			transit_vx := a_val
		end

	set_localize_vtheta (a_val: REAL_64)
		do
			localize_vtheta := a_val
		end

end -- class
