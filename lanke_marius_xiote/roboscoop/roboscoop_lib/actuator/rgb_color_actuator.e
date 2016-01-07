note
	description: "Controls RGB component values of the color."
	author: "Rusakov Andrey"
	date: "25.10.2013"

deferred class
	RGB_COLOR_ACTUATOR

feature -- Access.

	set_rgb_brightness (a_red, a_green, a_blue: NUMERIC)
			-- Set brightness for the RGB components with the values `a_red', `a_green', `a_blue'.
		deferred
		end

	set_to_red
			-- Set color to red.
		deferred
		end

	set_to_green
			-- Set color to green.
		deferred
		end

	set_to_blue
			-- Set color to blue.
		deferred
		end

	set_to_yellow
			-- Set color to yellow.
		deferred
		end

	set_to_magenta
			-- Set color to magenta.
		deferred
		end

	set_to_cyan
			-- Set color to cyan.
		deferred
		end

	set_to_white
			-- Set color to white.
		deferred
		end

	set_to_no_color
			-- Turn off all RGB components.
		deferred
		end
end
