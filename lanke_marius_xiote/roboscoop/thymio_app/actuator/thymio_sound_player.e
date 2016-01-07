note
	description: "Thymio's built-in sound player."
	author: "Rusakov Andrey"
	date: "17.09.2013"

class
	THYMIO_SOUND_PLAYER

inherit
	SOUND_PLAYER

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

	start_sound (sound_id: INTEGER_16)
			-- Start playing sound with the given `sound_id'.
		do
			publisher.publish(create {ASEBA_MSG}.make_with_two_values (0, sound_id))
		end

	start_system_sound (sound_id: INTEGER_16)
			-- Start playing sound with the given `sound_id'.
		require else
			sound_id >= -1
			sound_id <= 7
		do
			publisher.publish(create {ASEBA_MSG}.make_with_two_values (1, sound_id))
		end

	stop_sound
			-- Stop playing sounds. (pass sound_id = -1).
		do
			start_sound (-1)
		end

feature {NONE} -- Implementation

	publisher: ROS_PUBLISHER [ASEBA_MSG]
			-- Publisher object.
end
