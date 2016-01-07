note
	description: "Behavior that changes robot's features."
	author: "Xiaote Zhu"

class
	CHANGE_FEATURE_BEHAVIOR

inherit
	BEHAVIOUR

create
	make_with_attributes

feature {NONE} -- Initialization

	make_with_attributes (robot: separate THYMIO_ROBOT)
			-- Create current with given attributes.
		do
			create stop_sig.make
			state_sig := robot.robot_state
			top_leds := robot.top_leds
		end


feature -- Access

	start
			-- Start the behaviour.
		local
			a: separate CHANGE_FEATURE_CONTROLLER
		do
			create a.make (stop_sig)

			sep_stop (stop_sig, False)
			sep_start (a)
		end

	stop
			-- Stop the behaviour.
		do
			sep_stop (stop_sig, True)
		end

feature {NONE} -- Implementation

	stop_sig: separate STOP_SIGNALER
			-- Signaler for stopping the behaviour.

	state_sig: separate STATE_SIGNALER
			-- Robot current state.

	top_leds: separate THYMIO_TOP_LEDS
			-- RGB LEDs on the top.

	sep_start (a: separate CHANGE_FEATURE_CONTROLLER)
			-- Start controllers asynchronously.
		do
			a.repeat_until_stop_requested (
				agent a.change_light_feature (state_sig, stop_sig, top_leds))
		end

	sep_stop (s_sig: separate STOP_SIGNALER; val: BOOLEAN)
			-- Signal behavior for a stop.
		do
			s_sig.set_stop_requested (val)
		end

end -- class
