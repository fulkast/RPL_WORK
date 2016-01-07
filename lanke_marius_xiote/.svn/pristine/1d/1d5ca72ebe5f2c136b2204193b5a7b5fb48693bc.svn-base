note
	description: "State of MOVING_TO_GOAL_BEHAVIOR"
	author: "Xiaote Zhu"

class
	MOVING_TO_GOAL_SIGNALER

create
	make

feature

	make
		do
			create v_leave.make_empty
			create wall_following_start_point.make_empty

			d_min := 2^2000
		end

feature -- Access

	is_goal_reached: BOOLEAN
			-- Is the goal reached?

	is_goal_unreachable: BOOLEAN
			-- Is the goal unreachable?

	is_wall_following_start_point_set: BOOLEAN
			-- Is wall_following_start_point set yet?

	is_v_leave_found: BOOLEAN
			-- Is v_leave found yet?

	is_go_pending: BOOLEAN
			-- Has the state "go" been handled by the algorithm?

	is_wall_following: BOOLEAN
			-- Has the state "turn" been handled by the algorithm?

	is_transiting: BOOLEAN
			-- Has the state "transit" been handled by the algorithm?

	d_min: REAL_64
			-- Minimum distance between robot and the goal so far.

	v_leave: POINT_MSG
			-- v_leave for transition state.

	wall_following_start_point: POINT_MSG
			-- start_point for wall following

	previous_time_stamp: REAL_64
			-- The previous time stamp

	angle_looped_around_obstacle: REAL_64
			-- angle by which the robot has looped around the obstacle.

	set_is_goal_reached (a_val: BOOLEAN)
			-- Set is_goal_reached value to a_val
		do
			is_goal_reached := a_val
		end

	set_is_goal_unreachable (a_val: BOOLEAN)
			-- Set is_goal_unreachable value to a_val
		do
			is_goal_unreachable := a_val
		end

	set_is_wall_following_start_point_set (a_val: BOOLEAN)
			-- Set is_wall_following_start_point_set value to a_val
		do
			is_wall_following_start_point_set := a_val
		end

	set_is_v_leave_found (a_val: BOOLEAN)
			-- Set is_v_leave_found value to a_val
		do
			is_v_leave_found := a_val
		end

	set_is_go_pending (a_val: BOOLEAN)
			-- Set is_go_pending value equal to a_val.
		do
			is_go_pending := a_val
		end

	set_is_wall_following (a_val: BOOLEAN)
			-- Set is_turn_pending value equal to a_val.
		do
			is_wall_following := a_val
		end

	set_is_transiting (a_val: BOOLEAN)
			-- Set is_transiting value equal to a_val
		do
			is_transiting := a_val
		end

	set_d_min (a_val: REAL_64)
			-- Set d_min value equal to a_val
		do
			d_min := a_val
		end

	set_v_leave (a_val: separate POINT_MSG)
			-- Set v_leave value equal to a_val
		do
			create v_leave.make_with_values (a_val.x, a_val.y, a_val.z)
		end

	set_wall_following_start_point (a_val: separate POINT_MSG)
			-- Set wall_following_start_point
		do
			create wall_following_start_point.make_with_values (a_val.x, a_val.y, a_val.z)
		end

	set_angle_looped_around_obstacle (a_val: REAL_64)
			-- Set angle by which the robot has looped around the obstacle.
		do
			angle_looped_around_obstacle := a_val
		end

	set_previous_time_stamp (time_point : REAL_64)
			-- Set the previous time step to value time_point (For use in timestep differences)
		do
			previous_time_stamp := time_point
		end

	clear_all_pendings
			-- Set all pending flags to False.
		do
			is_go_pending := False
			is_wall_following := False
			is_transiting := False
		end
end
