note
	description: "Current position, pose and speed in 3D."
	author: "Rusakov Andrey"
	date: "07.05.2015"

class
	ODOMETRY_SIGNALER

inherit
	ODOMETRY_LISTENER

create
	make_with_topic

feature {NONE} -- Initilization

	make_with_topic (topic_name: separate STRING)
			-- Create Current.
		do
			create data.make_empty
			create subscriber.make
			subscribe_odometry (subscriber, Current, topic_name)
		end

feature -- Access


	data: ODOMETRY_MSG
			-- Odometry.

	x: REAL_64
			-- X coordinate.
		do
			Result := data.pose.pose.position.x
		end

	y: REAL_64
			-- Y coordinate.
		do
			Result := data.pose.pose.position.y
		end

	z: REAL_64
			-- Z coordinate.
		do
			Result := data.pose.pose.position.z
		end

	timestamp: REAL_64
			-- Timestamp.
		do
			Result := data.header.timestamp
		end

	theta: REAL_64
			-- Heading (in 2D only).
		do
			Result := data.pose.pose.orientation.theta
		end

	vx: REAL_64
			-- Linear speed (in 2D only).
		do
			Result := data.twist.twist.linear.x
		end

	vtheta: REAL_64
			-- Angular speed (in 2D only).
		do
			Result := data.twist.twist.angular.z
		end

	is_moving: BOOLEAN
			-- Does robot have speed?
		do
			Result := data.twist.twist.linear.x > 0.0 or data.twist.twist.angular.z > 0.0
		end

	is_twisting: BOOLEAN
			-- Does robot have angular speed?
		do
			Result := data.twist.twist.angular.z > 0.0
		end

	update_odometry (msg: separate ODOMETRY_MSG)
			-- Update current state with the values from `odom'.
		do
			create data.make_from_separate (msg)
		end

feature {NONE} -- Implementation

	subscriber: separate ROS_SUBSCRIBER [ODOMETRY_MSG]
			-- Subscriber object.

	subscribe_odometry (a_sub: separate ROS_SUBSCRIBER [ODOMETRY_MSG];
							a_listener: separate ODOMETRY_LISTENER; a_topic: separate STRING)
			-- Subscriber for odometry update.
		do
			a_sub.subscribe (a_topic, agent a_listener.update_odometry)
		end
end
