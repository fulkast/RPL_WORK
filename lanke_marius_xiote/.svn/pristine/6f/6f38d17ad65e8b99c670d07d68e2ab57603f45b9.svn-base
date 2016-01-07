note
	description: "Pose with a timestamp."
	author: "Rusakov Andrey"
	date: "20.11.2013"

class
	POSE_STAMPED_MSG

inherit
	STAMPED_MSG

create
	make_empty, make_from_pointer, make_with_values, make_from_separate

feature {NONE} -- Initialization

	make_empty
			-- Create empty`Current'.
		do
			create header.make_empty
			create pose.make_empty
		end

	make_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		do
			set_from_pointer (c_ptr)
		end

	make_with_values (a_header: HEADER_MSG; a_pose: POSE_MSG)
			-- Create `Current' with values.
		do
			header := a_header
			pose := a_pose
		end

feature -- Access

	pose: POSE_MSG
			-- Position and orientation.

feature {ROS_SUBSCRIBER}

	set_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		do
			create header.make_from_pointer (get_header_from_c (c_ptr))
			create pose.make_from_pointer (get_pose_from_c (c_ptr))
		end

feature {ROS_MESSAGE}

	allocate_c_msg: POINTER
			-- Pointer to the corresponding ROS message instance in C++.
		local
			header_ptr, pose_ptr: POINTER
		do
			header_ptr := header.allocate_c_msg
			pose_ptr := pose.allocate_c_msg
			Result := c_msg_ptr (header_ptr, pose_ptr)
			header.deallocate_c_msg (header_ptr)
			pose.deallocate_c_msg (pose_ptr)
		end

	deallocate_c_msg (a_msg_ptr: POINTER)
		external
			"C++ inline use %"geometry_msgs/PoseStamped.h%""
		alias
			"delete (geometry_msgs::PoseStamped*)$a_msg_ptr;"
		end

feature {NONE} -- Externals

	get_header_from_c (c_ptr: POINTER): POINTER
		external
			"C++ inline use %"geometry_msgs/PoseStamped.h%""
		alias
			"return &(((geometry_msgs::PoseStamped*)($c_ptr))->header);"
		end

	get_pose_from_c (c_ptr: POINTER): POINTER
		external
			"C++ inline use %"geometry_msgs/PoseStamped.h%""
		alias
			"return &(((geometry_msgs::PoseStamped*)($c_ptr))->pose);"
		end

	c_ros_advertize (a_worker_obj: POINTER; a_queue_size: INTEGER; a_is_latched: BOOLEAN)
		external
			"C++ inline  use %"publisher.h%", %"geometry_msgs/PoseStamped.h%""
		alias
			"((Publisher*)($a_worker_obj))->advertize <geometry_msgs::PoseStamped> ($a_queue_size, $a_is_latched);"
		end

	c_ros_publish (a_worker_obj: POINTER; a_msg_ptr: POINTER)
		external
			"C++ inline use %"publisher.h%", %"geometry_msgs/PoseStamped.h%""
		alias
			"((Publisher*)($a_worker_obj))->publish_message <geometry_msgs::PoseStamped> (*((geometry_msgs::PoseStamped*)$a_msg_ptr));"
		end

	c_msg_ptr (a_header_ptr, a_pose_ptr: POINTER): POINTER
		external
			"C++ inline use %"geometry_msgs/PoseStamped.h%""
		alias
			"[
				geometry_msgs::PoseStamped* msg = new geometry_msgs::PoseStamped();
				msg->header = *((std_msgs::Header*)$a_header_ptr);
				msg->pose = *((geometry_msgs::Pose*)$a_pose_ptr);
				return msg;
			]"
		end

	subscribe_to_ros (a_worker_obj: POINTER; c_topic_name: POINTER; obj: ANY; routine: POINTER)
		external
			"C++ inline use %"subscriber.h%", %"geometry_msgs/PoseStamped.h%""
		alias
			"((Subscriber*)($a_worker_obj))->subscribe<geometry_msgs::PoseStamped, geometry_msgs::PoseStamped::ConstPtr> ($c_topic_name, $obj, $routine);"
		end
end
