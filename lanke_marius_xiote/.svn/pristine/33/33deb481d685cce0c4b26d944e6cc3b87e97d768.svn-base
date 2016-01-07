note
	description: "Class of the Thymio-II robot."
	author: "Xiaote Zhu"

class
	THYMIO_ROBOT

inherit
	ROBOT
	BARRIER
	SEPARATE_STRING_MAKER

create
	make

feature {NONE} -- Initialization

	make (robot_params: separate ROBOT_PARAMETERS)
			-- Create a robot.
		do
			-- Initialize sensors.
			create range_sensors.make ({THYMIO_TOPICS}.prox_horizontal)
			create range_group_wrapper.make (robot_params)
			create ground_sensors.make ({THYMIO_TOPICS}.prox_ground)
			create odometry_signaler.make_with_topic ({THYMIO_TOPICS}.odometry)

			-- Initialize actuators.
			create diff_drive.make_with_topic ({THYMIO_TOPICS}.velocity)
			create sound_player.make_with_topic ({THYMIO_TOPICS}.sound)
			create top_leds.make_with_topic ({THYMIO_TOPICS}.top_leds)
			create buttons_leds.make_with_topic ({THYMIO_TOPICS}.buttons_leds)
			create circle_leds.make_with_topic ({THYMIO_TOPICS}.circle_leds)

			-- Initialize state.
			create robot_state.make
		end

feature -- Constants

	robot_base_size: REAL_64 = 0.11
			-- Robot's width.

	default_linear_speed: REAL_64 = 0.08
			-- Default linear speed of the robot.

feature -- Access

	get_odometry_signaler : separate ODOMETRY_SIGNALER
		do
			Result := odometry_signaler
		end

	get_diff_drive : separate THYMIO_DIFFERENTIAL_DRIVE
		do
			Result := diff_drive
		end

	get_range_sensors : separate THYMIO_RANGE_GROUP
		do
			Result := range_sensors
		end

	get_range_group_wrapper : separate THYMIO_RANGE_GROUP_WRAPPER
		do
			Result := range_group_wrapper
		end

	get_top_leds : separate THYMIO_TOP_LEDS
		do
			Result := top_leds
		end

feature {NONE} -- Robot parts

	range_sensors: separate THYMIO_RANGE_GROUP
			-- Horizontal range sensors.

	range_group_wrapper: separate THYMIO_RANGE_GROUP_WRAPPER
			-- Wrapper on range sensors.

	ground_sensors: separate THYMIO_GROUND_GROUP
			-- Ground sensors.

	diff_drive: separate THYMIO_DIFFERENTIAL_DRIVE
			-- Differential drive.

	sound_player: separate THYMIO_SOUND_PLAYER
			-- Built-in sound player.

	top_leds: separate THYMIO_TOP_LEDS
			-- RGB LEDs on the top.

	buttons_leds: separate THYMIO_BUTTONS_LEDS
			-- 4 Red LEDs on the buttons.

	circle_leds: separate THYMIO_CIRCLE_LEDS
			-- 8 Orange LEDS around the buttons.

	odometry_signaler: separate ODOMETRY_SIGNALER
			-- Current state of the odometry.

feature {NONE} -- Behaviors

	start_behavior (b: separate BEHAVIOUR)
			-- Launch `b'.
		do
			b.start
			io.put_string ("Behaviour started%N")
		end

	stop_behavior (b: separate BEHAVIOUR)
			-- Terminate `b'.
		do
			b.stop
			synchronize (b)
			io.put_string ("Behaviour requested for a stop%N")
		end

	light_up_leds (top: separate THYMIO_TOP_LEDS;
					buttons: separate THYMIO_BUTTONS_LEDS;
					circle: separate THYMIO_CIRCLE_LEDS)
			-- Turn on some LED lights.
		do
			top.set_to_blue
			buttons.set_leds_brightness (<<0,32,0,32>>)
			circle.set_leds_brightness (<<0,32,0,32,0,32,0,32>>)
		end

	light_down_leds (top: separate THYMIO_TOP_LEDS;
					buttons: separate THYMIO_BUTTONS_LEDS;
					circle: separate THYMIO_CIRCLE_LEDS)
			-- Turn on some LED lights.
		do
			top.set_to_red
			buttons.set_leds_brightness (<<32,0,32,0>>)
			circle.set_leds_brightness (<<32,0,32,0,32,0,32,0>>)
		end

end -- class

