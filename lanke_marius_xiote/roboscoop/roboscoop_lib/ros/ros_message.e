note
	description: "Interface for ROS messages."
	author: "Rusakov Andrey"
	date: "12.05.2014"

deferred class
	ROS_MESSAGE

inherit
	MESSAGE

feature {ROS_PUBLISHER, ROS_SUBSCRIBER}

	make_empty
			-- Create empty Current.
		deferred
		end

	make_from_separate (m: separate like Current)
			-- Create `Current' by deep copying the separate message.
		local
			sep_ptr: POINTER
		do
			sep_ptr := m.allocate_c_msg
			set_from_pointer (sep_ptr)
			m.deallocate_c_msg (sep_ptr)
		end

feature {ROS_PUBLISHER}

	publish_to_ros (a_worker: POINTER)
			-- Publish message to ROS.
		local
			msg_ptr: POINTER
		do
			msg_ptr := allocate_c_msg
			c_ros_publish (a_worker, msg_ptr)
			deallocate_c_msg (msg_ptr)
		end

	advertize_to_ros (a_publisher: separate ROS_PUBLISHER [like Current]; a_queue_size: INTEGER; a_is_latched: BOOLEAN)
			-- Advertize `a_publisher's C++ object to ROS.
		do
			c_ros_advertize (a_publisher.worker, a_queue_size, a_is_latched)
		end

feature {ROS_SUBSCRIBER}

	subscribe_to_ros (a_worker_obj: POINTER; c_topic_name: POINTER; obj: ANY; routine: POINTER)
			-- Subscribe to `c_topic_name' ROS topic using `a_worker_obj' C++ object.
			-- Callback `routine' will be executed on `obj'.
		deferred
		end

	set_from_pointer (a_ptr: POINTER)
			-- Initialize Current based on C++ representation of the message passed by `a_ptr'.
		deferred
		end

feature {ROS_MESSAGE}

	allocate_c_msg: POINTER
		deferred
		end

	deallocate_c_msg (a_msg_ptr: POINTER)
		deferred
		end

feature {NONE} -- Implementation

	c_ros_advertize (a_worker_obj: POINTER; a_queue_size: INTEGER; a_is_latched: BOOLEAN)
		deferred
		end

	c_ros_publish (a_worker_obj, a_msg_ptr: POINTER)
		deferred
		end

	get_now: REAL_64
		external
			"C++ inline use %"ros/ros.h%""
		alias
			"return (double)ros::Time::now().toSec();"
		end
end
