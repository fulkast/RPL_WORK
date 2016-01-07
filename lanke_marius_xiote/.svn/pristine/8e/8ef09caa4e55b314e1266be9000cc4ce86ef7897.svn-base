note
	description: "Different controllers for different features."
	author: "Xiaote Zhu"

class
	CHANGE_FEATURE_CONTROLLER

inherit
	CANCELLABLE_CONTROL_LOOP

create
	make

feature {NONE} -- Initialization

	make (s_sig: separate STOP_SIGNALER)
			-- Create current and assign given attributes.
		do
			stop_signaler := s_sig
		end

feature -- Access

	change_light_feature (state_sig: separate STATE_SIGNALER; s_sig: separate STOP_SIGNALER; top_leds: separate RGB_COLOR_ACTUATOR)
			-- Change features including light color based on current state.
		require
			not s_sig.is_stop_requested
		do
			if state_sig.is_go then
				top_leds.set_to_yellow
			elseif state_sig.is_wall_following then
				top_leds.set_to_red
			elseif state_sig.is_transiting then
				top_leds.set_to_blue
			elseif state_sig.is_goal_reached then
				top_leds.set_to_green
			elseif state_sig.is_goal_unreachable then
				top_leds.set_to_magenta
			end
		end

end -- class
