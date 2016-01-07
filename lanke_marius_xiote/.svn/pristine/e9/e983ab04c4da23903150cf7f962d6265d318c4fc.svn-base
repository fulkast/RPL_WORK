note
	description: "Parameter class for parsing parameters"
	author: "Marius Grimm"
	date: "19.10.2015"

expanded class
	PARAMETERS

feature -- Parameters

	goal_x: REAL_64

	goal_y: REAL_64

	set_goal_x (a_val: REAL_64)
		do
			goal_x := a_val
		end

	set_goal_y (a_val: REAL_64)
		do
			goal_y := a_val
		end

	k_p, k_i, k_d: REAL_64

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

	desired_wall_distance: REAL_64

	set_desired_wall_distance (a_val: REAL_64)
		do
			desired_wall_distance := a_val
		end

	obstacle_vanished_time_threshold, angle_looped_around_threshold: REAL_64

	set_obstacle_vanished_time_threshold (a_val: REAL_64)
		do
			obstacle_vanished_time_threshold := a_val
		end

	set_angle_looped_around_threshold (a_val: REAL_64)
		do
			angle_looped_around_threshold := a_val
		end

	vleave_reached_distance_threshold, goal_reached_distance_threshold: REAL_64

	set_vleave_reached_distance_threshold (a_val: REAL_64)
		do
			vleave_reached_distance_threshold := a_val
		end

	set_goal_reached_distance_threshold (a_val: REAL_64)
		do
			goal_reached_distance_threshold := a_val
		end

	angle_looped_around_threshold_unreachable: REAL_64

	set_angle_looped_around_threshold_unreachable (a_val: REAL_64)
		do
			angle_looped_around_threshold_unreachable := a_val
		end

	goal_unreachable_distance_threshold: REAL_64

	set_goal_unreachable_distance_threshold (a_val: REAL_64)
		do
			goal_unreachable_distance_threshold := a_val
		end

	cruising_velocity : REAL_64
			-- The nominal cruising velocity of a given task

	looped_around_threshold : REAL_64
			-- This angular value let's a robot determine if it has looped around
			-- wall_following_start_point

	time_step_epsilon : REAL_64
			-- An infinitessimal value used in maintaining the stability of the
			-- differentiation and integration

	distance_to_wall_threshold : REAL_64
			-- This specifies the desired distance that the robot should stay away
			-- from the wall

	time_lag_constant_tau : REAL_64
			-- This is a time constant used to delay transitions

	task_completion_distance_tolerance : REAL_64
			-- This is the 2-norm distance threshold within which the robot
			-- tolerates task completion

	task_unreachable_distance_tolerance : REAL_64
			-- This is the 2-norm distance threshold within which the robot
			-- assumes task unachievable

	waypoint_2_goalpoint_distance_tolerance : REAL_64
			-- This is the 2-norm distance threshold within which the robot can transform
			-- from tracking a waypoint to going to goal

	previous_time_stamp: REAL_64
			-- The previous time stamp

end -- class PARAMETERS
