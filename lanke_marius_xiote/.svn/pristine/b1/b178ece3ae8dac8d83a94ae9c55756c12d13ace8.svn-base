note
	description: "Test behavior when the robot explores the surface."
	author: "Rusakov Andrey"
	date: "29.08.2013"

class
	WANDER_BEHAVIOUR

inherit
	BEHAVIOUR

create
	make_with_attributes

feature {NONE} -- Initialization

	make_with_attributes (odom_sig: separate ODOMETRY_SIGNALER; r_group: separate PERIMETER_OBSTACLE_DETECTOR;
				g_group: separate LIFTABLE; d_drive: separate DIFFERENTIAL_DRIVE; s_player: separate SOUND_PLAYER)
			-- Create `Current' with given attributes.
		do
			create stop_sig.make
			create discover_sig
			odometry_sig := odom_sig
			range_group := r_group
			ground_group := g_group
			diff_drive := d_drive
			sound_player := s_player
		end

feature -- Access

	start
			-- Start the behaviour.
		local
			a, b, c, d: separate WANDER_CONTROLLER
		do
			create a.make (stop_sig)
			create b.make (stop_sig)
			create c.make (stop_sig)
			create d.make (stop_sig)

			sep_stop (stop_sig, False)
			sep_start (a, b, c, d)
		end

	stop
			-- Stop the behaviour.
		do
			sep_stop (stop_sig, True)
		end

feature {NONE} -- Implementation

	range_group: separate PERIMETER_OBSTACLE_DETECTOR
			-- Horizontal range sensors.

	ground_group: separate LIFTABLE
			-- Ground sensors.

	odometry_sig: separate ODOMETRY_SIGNALER
			-- Current state of the odometry.

	discover_sig: separate WANDER_SIGNALER
			-- Current state of the behavior.

	stop_sig: separate STOP_SIGNALER
			-- Signaler for stopping the behaviour.

	diff_drive: separate DIFFERENTIAL_DRIVE
			-- Object to control robot's speed.

	sound_player: separate SOUND_PLAYER
			-- Publishes sound events.

	sep_start (a, b, c, d: separate WANDER_CONTROLLER)
			-- Start controllers asynchronously.
		do
			a.repeat_until_stop_requested (
				agent a.go (discover_sig, odometry_sig, range_group, ground_group, stop_sig, diff_drive, sound_player))
			c.repeat_until_stop_requested (
				agent c.turn_when_obstacle_aside (discover_sig, odometry_sig, range_group, ground_group, stop_sig, diff_drive, sound_player))
			d.repeat_until_stop_requested (
				agent d.stop_when_lifted (discover_sig, odometry_sig, ground_group, stop_sig, diff_drive, sound_player))
			b.repeat_until_stop_requested (
				agent b.stop_when_obstacle_huge (discover_sig, odometry_sig, range_group, ground_group, stop_sig, diff_drive, sound_player))
		end

	sep_stop (s_sig: separate STOP_SIGNALER; val: BOOLEAN)
			-- Signal behavior for a stop.
		do
			s_sig.set_stop_requested (val)
		end
end
