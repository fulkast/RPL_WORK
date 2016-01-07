note
	description: "Group of sensors subscribed to the same topic under different frame ids."
	author: "Rusakov Andrey"
	date: "16.04.2015"

class
	GROUP_SIGNALER [M -> STAMPED_MSG create make_empty, make_from_pointer, make_from_separate end]

create
	make_with_topic

feature {NONE} -- Initialization

	make_with_topic (topic_name: separate STRING)
			-- Create an array of sensors and register them.
		do
			create order_map.make (0)
			create sensors.make (0)
			create subscriber.make
			subscribe (subscriber, Current, topic_name)
		end

feature -- Access

	sensors: ARRAYED_LIST[M]
			-- List of sensors in order of their registration.

	register_sensor (a_frame_id: separate STRING)
			-- Add a sensor with a frame_id.
		local
			s: STRING
		do
			create s.make_from_separate (a_frame_id)
			if not order_map.has (s) then
				order_map.put (order_map.count + 1, s)
				sensors.extend (create {M}.make_empty)
			end
		end

	update (msg: separate M)
			-- Update current state with the values from `msg'.
		local
			s: STRING
		do
			create s.make_from_separate (msg.header.frame_id)
			if order_map.has (s) then
				sensors[order_map[s]] := create {M}.make_from_separate (msg)
--				io.put_string ("Update Group Signaler "+ s +"%N")
			end
		end

	get_by_frame_id (a_frame_id : separate STRING): M
			-- Get a range by the key, if no such a key, return an empty object.
		local
			k: STRING
		do
			create Result.make_empty
			create k.make_from_separate (a_frame_id)
			if order_map.has (k) then
				if attached sensors[order_map[k]] as r then
					Result := r
				end
			end
		end

feature {NONE} -- Implementation

	order_map: STRING_TABLE[INTEGER]
			-- Map of frame_ids to corresponding indices in `sensors' list.

	subscriber: separate ROS_SUBSCRIBER [M]
			-- Subscriber object.

	subscribe (a_sub: separate ROS_SUBSCRIBER[M]; a_listener: separate GROUP_SIGNALER[M]; a_topic: separate STRING)
			-- Subscriber for range sensors update.
		do
			a_sub.subscribe (a_topic, agent a_listener.update)
		end
end
