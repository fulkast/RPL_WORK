note
	description: "Class to execute WANDER_BEHAVIOR functionality."
	author: "Rusakov Andrey"
	date: "04.08.2013"

class
	WANDER_CONTROLLER
inherit
	CANCELLABLE_CONTROL_LOOP

create
	make

feature {NONE} -- Initialization

	make (s_sig: separate STOP_SIGNALER)
			-- Create Current and assign given attributes.
		do
			stop_signaler := s_sig
		end

feature {WANDER_BEHAVIOUR} -- Control

	go (d_sig: separate WANDER_SIGNALER; o_sig: separate ODOMETRY_SIGNALER; r_sig: separate PERIMETER_OBSTACLE_DETECTOR;
		g_sig: separate LIFTABLE; s_sig: separate STOP_SIGNALER;
		drive: separate DIFFERENTIAL_DRIVE; player: separate SOUND_PLAYER)
			-- Move robot, if stopped and no obstacle observed.
		require
			((not o_sig.is_moving or o_sig.is_twisting) and
			not g_sig.is_lifted and
			not r_sig.is_obstacle and
			not d_sig.is_go_pending) or s_sig.is_stop_requested
		do
			if s_sig.is_stop_requested then
				drive.stop
			else
				d_sig.clear_all_pendings
				d_sig.set_is_go_pending (True)
				drive.set_velocity (0.03, 0.0)
				io.put_string ("Current state: GO%N")
			end
		end

	stop_when_obstacle_huge (d_sig: separate WANDER_SIGNALER;
								o_sig: separate ODOMETRY_SIGNALER; r_sig: separate PERIMETER_OBSTACLE_DETECTOR;
								g_sig: separate LIFTABLE; s_sig: separate STOP_SIGNALER;
								drive: separate DIFFERENTIAL_DRIVE; player: separate SOUND_PLAYER)
			-- Stop if obstacle occured.
		require
			(o_sig.is_moving and
			r_sig.is_obstacle_huge and
			not g_sig.is_lifted and
			not d_sig.is_huge_pending)or s_sig.is_stop_requested
		do
			if s_sig.is_stop_requested then
				drive.stop
			else
				if (r_sig.is_obstacle_in_front and o_sig.vx > 0.0) or (r_sig.is_obstacle_at_back and o_sig.vx < 0.0) then
					d_sig.clear_all_pendings
					d_sig.set_is_huge_pending (True)
					drive.stop
					player.stop_sound
					player.start_system_sound (3)
					io.put_string ("Current state: HUGE%N")
				end
			end
		end

	turn_when_obstacle_aside (d_sig: separate WANDER_SIGNALER;
								o_sig: separate ODOMETRY_SIGNALER; r_sig: separate PERIMETER_OBSTACLE_DETECTOR;
								g_sig: separate LIFTABLE; s_sig: separate STOP_SIGNALER;
								drive: separate DIFFERENTIAL_DRIVE; player: separate SOUND_PLAYER)
			-- Try to avoid the obstacle.
		require
			(not g_sig.is_lifted and
			r_sig.is_obstacle and
			not d_sig.is_turn_pending and
			not r_sig.is_obstacle_huge) or s_sig.is_stop_requested
		local
			vxsign, vthetasign: INTEGER
		do
			if s_sig.is_stop_requested then
				drive.stop
			else
				if r_sig.is_obstacle_in_front then
					if r_sig.is_obstacle_mostly_at_left then
						vxsign := 1
						vthetasign := -1
					elseif r_sig.is_obstacle_mostly_at_right then
						vxsign := 1
						vthetasign := 1
					end
				elseif r_sig.is_obstacle_at_back then
					if r_sig.is_obstacle_mostly_at_left then
						vxsign := -1
						vthetasign := -1
					elseif r_sig.is_obstacle_mostly_at_right then
						vxsign := -1
						vthetasign := 1
					end
				end
				d_sig.clear_all_pendings
				d_sig.set_is_turn_pending (True)
				drive.set_velocity (0.0 * vxsign, 0.5 * vthetasign)
				io.put_string ("Current state: TURN%N")
			end
		end

	stop_when_lifted (d_sig: separate WANDER_SIGNALER; o_sig: separate ODOMETRY_SIGNALER;
						g_sig: separate LIFTABLE; s_sig: separate STOP_SIGNALER;
						drive: separate DIFFERENTIAL_DRIVE; player: separate SOUND_PLAYER)
			-- Stop if doesn't see the surface.
		require
			(o_sig.is_moving and
			g_sig.is_lifted and
			not d_sig.is_lifted_pending) or s_sig.is_stop_requested
		do
			if s_sig.is_stop_requested then
				drive.stop
			else
				d_sig.clear_all_pendings
				d_sig.set_is_lifted_pending (True)
				drive.stop
				player.stop_sound
				player.start_system_sound (5)
				io.put_string ("Current state: LIFTED%N")
			end
		end
end
