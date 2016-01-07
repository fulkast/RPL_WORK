note
	description: "Controls linear and angular velocity."
	author: "Rusakov Andrey"
	date: "29.08.2013"

deferred class
	DIFFERENTIAL_DRIVE

inherit
	ACTUATOR

feature -- Access

	base_size: REAL_64
			-- Distance between wheels (m).

	max_linear_speed: REAL_64
			-- Max speed for each wheel (m/s).

	set_velocity (a_vx: REAL_64; a_vtheta: REAL_64)
			-- Set speed.
		deferred
		end

	stop
			-- Set zero speed.
		deferred
		end
end

