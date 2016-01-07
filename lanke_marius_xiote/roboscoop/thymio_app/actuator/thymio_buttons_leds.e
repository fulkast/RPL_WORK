note
	description: "A group of 4 red LEDs corresponding to the buttons on top of the Thymio robot."
	author: "Rusakov Andrey"
	date: "15.10.2013"

class
	THYMIO_BUTTONS_LEDS

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

	set_leds_brightness (a_leds: separate ARRAY[INTEGER_16])
			-- Set brightness for buttons' LEDs with the values from `a_leds'.
		do
			publisher.publish (create {ASEBA_MSG}.make_from_values (a_leds, 0, 0.0))
		end

feature {NONE} -- Implementation

	publisher: ROS_PUBLISHER [ASEBA_MSG]
			-- Publisher object.

end
