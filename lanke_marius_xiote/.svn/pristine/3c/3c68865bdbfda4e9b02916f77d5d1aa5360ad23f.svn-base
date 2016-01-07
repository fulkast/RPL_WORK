note
	description: "Summary description for {BOOL_SIGNALER}."
	author: ""

class
	BOOL_SIGNALER

inherit
	BOOL_LISTENER

create
	make_with_topic

feature {NONE} -- Initilization

	make_with_topic (topic_name: separate STRING)
			-- Create Current.
		do
			create data.make_empty
			create subscriber.make
			subscribe_state (subscriber, Current, topic_name)
		end

feature -- Access


	data: BOOL_MSG
			-- State.

	update_state (msg: separate BOOL_MSG)
			-- Update current state with the values from `odom'.
		do
			create data.make_from_separate (msg)
		end

feature {NONE} -- Implementation

	subscriber: separate ROS_SUBSCRIBER [BOOL_MSG]
			-- Subscriber object.

	subscribe_state (a_sub: separate ROS_SUBSCRIBER [BOOL_MSG];
							a_listener: separate BOOL_LISTENER; a_topic: separate STRING)
			-- Subscriber for odometry update.
		do
			a_sub.subscribe (a_topic, agent a_listener.update_state)
		end
end

