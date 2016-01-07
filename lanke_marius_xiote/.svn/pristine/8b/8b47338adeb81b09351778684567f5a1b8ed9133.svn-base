note
	description: "Signaler for pose communication."
	author: "Xiaote Zhu"

class
	POSE_2D_SIGNALER

inherit
	POSE_2D_LISTENER

create
	make_with_topic

feature {NONE} -- Initilization

	make_with_topic (topic_name: separate STRING)
			-- Create Current.
		do
			create data.make_empty
			create subscriber.make
			subscribe_pose_2d (subscriber, Current, topic_name)
		end

feature -- Access

	data: POSE_2D_MSG
			-- Pose.

	update_pose_2d (msg: separate POSE_2D_MSG)
			-- Update current state with the values from `msg'.
		do
			create data.make_from_separate (msg)
		end

feature {NONE} -- Implementation

	subscriber: separate ROS_SUBSCRIBER [POSE_2D_MSG]
			-- Subscriber object.

	subscribe_pose_2d (a_sub: separate ROS_SUBSCRIBER [POSE_2D_MSG];
							a_listener: separate POSE_2D_LISTENER; a_topic: separate STRING)
			-- Subscriber for odometry update.
		do
			a_sub.subscribe (a_topic, agent a_listener.update_pose_2d)
		end
end
