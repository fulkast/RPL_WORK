note
	description: "Parameter class for parsing parameters"
	author: "Marius Grimm"
	date: "19.10.2015"

expanded class
	PARAMETERS

feature -- Parameters

	goal_x: REAL_64
	set_goal_x (a_val: REAL_64)
		do
			goal_x := a_val
		end

	goal_y: REAL_64
	set_goal_y (a_val: REAL_64)
		do
			goal_y := a_val
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
