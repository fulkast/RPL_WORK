note
	description: "Publishes messages to particular ROS topic."
	author: "Rusakov Andrey"
	date: "30.08.2013"
	modified: "03.06.2014"

class
	ROS_PUBLISHER [M -> ROS_MESSAGE create make_empty end]

inherit
	PUBLISHER
	BARRIER

create
	make_with_topic

feature {NONE} -- Initialization

	make_with_topic (a_topic_name: separate STRING)
			-- Create Current with given topic name.
		local
			c_topic_name: C_STRING
		do
			create topic_name.make_from_separate (a_topic_name)
			create c_topic_name.make (topic_name)
			worker := c_ros_new_worker
			c_ros_set_topic_name (worker, c_topic_name.item)
		end

feature -- Access

	topic_name: STRING
			-- Topic name to publish to.

	advertize (queue_size: INTEGER; is_latched: BOOLEAN)
			-- Advertize topic and message type in ROS.
		do
			advertize_with_message (create {M}.make_empty, Current, queue_size, is_latched)
		end

	publish (msg: separate M)
			-- Publish `msg' to ROS.
		do
			msg.publish_to_ros (worker)
			synchronize (msg)
		end

feature {NONE} -- Implementation

	advertize_with_message (msg: separate M; pub: separate ROS_PUBLISHER [M]; queue_size: INTEGER; is_latched: BOOLEAN)
			-- Advertize `pub' with particular message type of `msg', `queue_size' and `is_latched' latching mode to ROS.
		do
			msg.advertize_to_ros (pub, queue_size, is_latched)
		end

feature {ROS_MESSAGE}

	worker: POINTER
			-- Pointer to the C++ object.

feature {NONE} -- Externals

	c_ros_new_worker: POINTER
		external
			"C++ inline use %"publisher.h%""
		alias
			"return new Publisher ();"
		end

	c_ros_set_topic_name (a_worker_obj: POINTER; a_topic_name: POINTER)
		external
			"C++ inline use %"publisher.h%""
		alias
			"((Publisher*)($a_worker_obj))->set_topic_name($a_topic_name);"
		end
end

