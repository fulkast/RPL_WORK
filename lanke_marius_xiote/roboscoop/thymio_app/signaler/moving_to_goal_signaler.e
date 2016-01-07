note
	description: "State of MOVING_TO_GOAL_BEHAVIOR"
	author: "Xiaote Zhu"

class
	MOVING_TO_GOAL_SIGNALER

inherit
	RELATIVE_SPACE_CALCULATIONS

create
	make

feature {NONE} -- Initialization

	make
		do
			create v_leave.make_empty
			create localized_time_absolute_pose.make_with_values (0, 0, 0)
			create localized_time_absolute_point.make_with_values (0, 0, 0)
			create localized_time_relative_pose.make_with_values (0, 0, 0)

			d_min := {REAL_64}.positive_infinity
		end

feature -- Access

	is_v_leave_found: BOOLEAN
			-- Is v_leave found yet?

	need_to_reset_cur_goal: BOOLEAN
			-- Do we need to reset cur_goal?

	d_min: REAL_64
			-- Minimum distance between robot and the goal so far.

	timestamp_obstacle_last_seen: REAL_64
			-- timestamp when obstacle was last seen.

	v_leave: POINT_MSG
			-- v_leave for transition state.

	localized_time_relative_pose: POSE_2D_MSG
			-- Robot pose at localized time in robot frame.

	localized_time_absolute_pose: POSE_2D_MSG
			-- Robot pose at localized time in absolute frame.

	localized_time_absolute_point: POINT_MSG
			-- Robot coordinate at localized time in absolute frame.

	set_is_v_leave_found (a_val: BOOLEAN)
			-- Set is_v_leave_found value to a_val
		do
			is_v_leave_found := a_val
		end

	set_need_to_reset_cur_goal (a_val: BOOLEAN)
			-- Set need_to_reset_cur_goal to a_val
		do
			need_to_reset_cur_goal := a_val
		end

	set_d_min (a_val: REAL_64)
			-- Set d_min value equal to a_val
		do
			d_min := a_val
		end

	set_timestamp_obstacle_last_seen (a_val: BOOLEAN; b_val: REAL_64)
			-- Set timestamp when obstacle was last seen
		do
			if a_val then
				timestamp_obstacle_last_seen := b_val
			end
		end

	set_v_leave (a_val: separate POINT_MSG)
			-- Set v_leave value equal to a_val
		do
			create v_leave.make_from_separate (a_val)
		end

	set_localized_time_relative_pose (a_val: separate POSE_2D_MSG)
			-- Set localized_time_relative_pose equal to a_val
		do
			create localized_time_relative_pose.make_from_separate (a_val)
		end

	set_localized_time_absolute_pose (a_val: separate POSE_2D_MSG)
			-- Set localized_time_absolute_pose equal to a_val
		do
			create localized_time_absolute_pose.make_from_separate (a_val)
			create localized_time_absolute_point.make_with_values (a_val.x, a_val.y, 0)
		end

	convert_robot_frame_coord_to_absolute_coord (x, y: REAL_64) : POINT_MSG
		local
			relative_coord : POINT_MSG
		do
			create relative_coord.make_with_values (x - localized_time_relative_pose.x, y - localized_time_relative_pose.y, 0)
			Result := convert_relative_coordinates_to_absolute_coordinates (localized_time_absolute_point, relative_coord, localized_time_absolute_pose.theta - localized_time_relative_pose.theta)
		end

	convert_robot_frame_orientation_to_absolute_orientation (theta: REAL_64) : REAL_64
		do
			Result := convert_angle_to_range (theta + localized_time_absolute_pose.theta - localized_time_relative_pose.theta)
		end

end -- class
