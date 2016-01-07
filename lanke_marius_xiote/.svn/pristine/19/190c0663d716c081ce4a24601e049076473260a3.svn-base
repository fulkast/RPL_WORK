note
	description: 	"[
						Group of Thymio's ground range sensors.
						Detects whether the robot is lifted over the ground.
					]"
	author: "Rusakov Andrey"
	date: "08.09.2014"

class
	THYMIO_GROUND_GROUP

inherit
	GROUP_SIGNALER [REFLECTED_AMBIENT_MSG]
	LIFTABLE

create
	make

feature {NONE} -- Initialization.

	make (topic_name: separate STRING)
			-- Create Current.
		do
			make_with_topic (topic_name)
			register_grounds
		end

	register_grounds
			-- Register Thymio ground sensors by their frame ids.
		do
			register_sensor ({THYMIO_TOPICS}.prox_ground_link_0)
			register_sensor ({THYMIO_TOPICS}.prox_ground_link_1)
		end

feature -- Access

	lifting_tolerance: INTEGER = 300
			-- With the value less than tolerance considered to be lifted.

	is_lifted: BOOLEAN
			-- Is considered to be lifted?
		local
			i: INTEGER
		do
			from
				i := sensors.lower
			until
				i > sensors.upper or Result
			loop
				if 	sensors[i].reflected >= 0 and
					sensors[i].reflected < lifting_tolerance then
					Result := True
				end
				i := i + 1
			end
		end
end
