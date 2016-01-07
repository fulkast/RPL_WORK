note
	description: "Abstract class for robot."
	author: "Xiaote Zhu"

deferred class
	ROBOT

feature -- Access

	robot_state: separate STATE_SIGNALER
			-- Robot current state.

	get_odometry_signaler : separate ODOMETRY_SIGNALER
			-- Get current state of the odometry
		deferred
		end

	get_diff_drive : separate DIFFERENTIAL_DRIVE
			-- Get differential drive.
		deferred
		end

	get_range_sensors : separate RANGE_GROUP
			-- Get range sensors.
		deferred
		end

	get_range_group_wrapper : separate RANGE_GROUP_WRAPPER
			-- Get range group wrapper.
		deferred
		end

	get_top_leds : separate THYMIO_TOP_LEDS
			-- Get top leds.
		deferred
		end

end --class
