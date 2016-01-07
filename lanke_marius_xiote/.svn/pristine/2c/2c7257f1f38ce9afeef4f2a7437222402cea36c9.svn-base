note
	description: "Pose information in 3D."
	author: "Rusakov Andrey"
	date: "04.06.2014"

class
	POSE_SIGNALER

inherit
	POSE_LISTENER

create
	make_with_topic

feature {NONE} -- Initilization

	make_with_topic (topic_name: separate STRING)
			-- Create Current.
		do
			create data.make_empty
			create subscriber.make
			subscribe_pose (subscriber, Current, topic_name)
		end

feature -- Access

	data: POSE_STAMPED_MSG
			-- Pose.

	x: REAL_64
			-- X coordinate.
		do
			Result := data.pose.position.x
		end

	y: REAL_64
			-- Y coordinate.
		do
			Result := data.pose.position.y
		end

	z: REAL_64
			-- Z coordinate.
		do
			Result := data.pose.position.z
		end

	timestamp: REAL_64
			-- Timestamp.
		do
			Result := data.header.timestamp
		end

	theta: REAL_64
			-- Heading (in 2D only).
		do
			Result := data.pose.orientation.theta
		end

	set_position (a_x, a_y, a_z: REAL_64)
			-- Update with values.
		do
			create data.make_with_values (
					create {HEADER_MSG}.make_empty,
					create {POSE_MSG}.make_with_values (
							create {POINT_MSG}.make_with_values (a_x, a_y, a_z),
							create {QUATERNION_MSG}.make_empty))
		end

	update_pose (msg: separate POSE_STAMPED_MSG)
			-- Update current state with the values from `pose'.
		do
			create data.make_from_separate (msg)
		end

feature {NONE} -- Implementation

	subscriber: separate ROS_SUBSCRIBER [POSE_STAMPED_MSG]
			-- Subscriber object.

	subscribe_pose (a_sub: separate ROS_SUBSCRIBER [POSE_STAMPED_MSG];
							a_listener: separate POSE_LISTENER; a_topic: separate STRING)
			-- Subscriber for odometry update.
		do
			a_sub.subscribe (a_topic, agent a_listener.update_pose)
		end
end
