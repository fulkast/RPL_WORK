note
	description: "RGB LED on top of the Thymio robot."
	author: "Rusakov Andrey"
	date: "15.10.2013"

class
	THYMIO_TOP_LEDS

inherit
	RGB_COLOR_ACTUATOR

create
	make_with_topic

feature {NONE} -- Initialization

	make_with_topic (topic_name: separate STRING)
			-- Create Current.
		do
			create publisher.make_with_topic (topic_name)
			publisher.advertize (1, False)
		end

feature -- Access

	set_rgb_brightness (a_red, a_green, a_blue: INTEGER_16)
			-- Set brightness for the RGB components of the top LEDs with the values `a_red', `a_green', `a_blue'.
		do
			publisher.publish (create {ASEBA_MSG}.make_with_three_values (a_red, a_green, a_blue))
		end

	set_to_red
			-- <Precursor>
		do
			set_rgb_brightness (32, 0, 0)
		end

	set_to_green
			-- <Precursor>
		do
			set_rgb_brightness (0, 32, 0)
		end

	set_to_blue
			-- <Precursor>
		do
			set_rgb_brightness (0, 0, 32)
		end

	set_to_yellow
			-- <Precursor>
		do
			set_rgb_brightness (32, 32, 0)
		end

	set_to_magenta
			-- <Precursor>
		do
			set_rgb_brightness (32, 0, 32)
		end

	set_to_cyan
			-- <Precursor>
		do
			set_rgb_brightness (0, 32, 32)
		end

	set_to_white
			-- <Precursor>
		do
			set_rgb_brightness (32, 32, 32)
		end

	set_to_no_color
			-- <Precursor>
		do
			set_rgb_brightness (0, 0, 0)
		end

feature {NONE} -- Implementation

	publisher: ROS_PUBLISHER [ASEBA_MSG]
			-- Publisher object.
end
