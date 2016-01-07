note
	description: "Example class of the Thymio-II robot."
	author: "Rusakov Andrey"
	date: "05.09.2013"

class
	THYMIO_ROBOT

inherit
	BARRIER
	SEPARATE_STRING_MAKER

create
	make

feature {NONE} -- Initialization

	make
			-- Create a robot.
		do
			-- Initialize sensors.
			create range_sensors.make ({THYMIO_TOPICS}.prox_horizontal)
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

feature {BEHAVIOUR} -- Robot parts

	range_sensors: separate THYMIO_RANGE_GROUP
			-- Horizontal range sensors.

	ground_sensors: separate THYMIO_GROUND_GROUP
			-- Ground sensors.

	odometry_signaler: separate ODOMETRY_SIGNALER
			-- Current state of the odometry.

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

	robot_state: separate STATE_SIGNALER
			-- Robot current state.

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
