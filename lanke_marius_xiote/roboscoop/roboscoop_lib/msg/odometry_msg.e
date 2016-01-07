note
	description: "Odometry info including pose and velocity."
	author: "Rusakov Andrey"
	date: "02.04.2015"

class
	ODOMETRY_MSG

inherit
	STAMPED_MSG

create
	make_empty, make_from_pointer, make_with_values, make_from_separate

feature {NONE} -- Initialization.

	make_empty
			-- Create empty`Current'.
		do
			create header.make_empty
			create child_frame_id.make_empty
			create pose.make_empty
			create twist.make_empty
		end

	make_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		do
			set_from_pointer (c_ptr)
		end

	make_with_values (a_header: HEADER_MSG; a_child_frame_id: STRING; a_pose: POSE_WITH_COVARIANCE_MSG; a_twist: TWIST_WITH_COVARIANCE_MSG)
			-- Create `Current' with values.
		do
			header := a_header
			child_frame_id := a_child_frame_id
			pose := a_pose
			twist := a_twist
		end

feature -- Access.

	child_frame_id: STRING_8
			-- Coordinate frame for twist information.

	pose: POSE_WITH_COVARIANCE_MSG
			-- Position and orientation.

	twist: TWIST_WITH_COVARIANCE_MSG
			-- Velocity.

feature {ROS_SUBSCRIBER}

	set_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		do
			create header.make_from_pointer (get_header_from_c (c_ptr))
			child_frame_id := get_child_frame_id_from_c (c_ptr)
			create pose.make_from_pointer (get_pose_from_c (c_ptr))
			create twist.make_from_pointer (get_twist_from_c (c_ptr))
		end

feature {ROS_MESSAGE}

	allocate_c_msg: POINTER
			-- Pointer to the corresponding ROS message instance in C++.
		local
			header_ptr, pose_ptr, twist_ptr: POINTER
			child_frame: C_STRING
		do
			header_ptr := header.allocate_c_msg
			pose_ptr := pose.allocate_c_msg
			twist_ptr := twist.allocate_c_msg
			create child_frame.make (child_frame_id)
			Result := c_msg_ptr (header_ptr, pose_ptr, twist_ptr, child_frame.item)
			header.deallocate_c_msg (header_ptr)
			pose.deallocate_c_msg (pose_ptr)
			twist.deallocate_c_msg (twist_ptr)
		end

	deallocate_c_msg (a_msg_ptr: POINTER)
		external
			"C++ inline use %"nav_msgs/Odometry.h%""
		alias
			"delete (nav_msgs::Odometry*)$a_msg_ptr;"
		end

feature {NONE} -- Externals.

	get_header_from_c (c_ptr: POINTER): POINTER
		external
			"C++ inline use %"nav_msgs/Odometry.h%""
		alias
			"return &(((nav_msgs::Odometry*)($c_ptr))->header);"
		end

	get_child_frame_id_from_c (c_ptr: POINTER): STRING_8
		external
			"C++ inline use %"nav_msgs/Odometry.h%", %"eif_plug.h%""
		alias
			"[
				std::string frame_id = (std::string)(((nav_msgs::Odometry*)($c_ptr))->child_frame_id);
				return eif_string ((char*)frame_id.c_str());
			]"
		end

	get_pose_from_c (c_ptr: POINTER): POINTER
		external
			"C++ inline use %"nav_msgs/Odometry.h%""
		alias
			"return &(((nav_msgs::Odometry*)($c_ptr))->pose);"
		end

	get_twist_from_c (c_ptr: POINTER): POINTER
		external
			"C++ inline use %"nav_msgs/Odometry.h%""
		alias
			"return &(((nav_msgs::Odometry*)($c_ptr))->twist);"
		end

	c_ros_advertize (a_worker_obj: POINTER; a_queue_size: INTEGER; a_is_latched: BOOLEAN)
		external
			"C++ inline  use %"publisher.h%", %"nav_msgs/Odometry.h%""
		alias
			"((Publisher*)($a_worker_obj))->advertize <nav_msgs::Odometry> ($a_queue_size, $a_is_latched);"
		end

	c_ros_publish (a_worker_obj: POINTER; a_msg_ptr: POINTER)
		external
			"C++ inline use %"publisher.h%", %"nav_msgs/Odometry.h%""
		alias
			"((Publisher*)($a_worker_obj))->publish_message <nav_msgs::Odometry> (*((nav_msgs::Odometry*)$a_msg_ptr));"
		end

	c_msg_ptr (a_header_ptr, a_pose_ptr, a_twist_ptr, a_child_frame_id_ptr: POINTER): POINTER
		external
			"C++ inline use %"nav_msgs/Odometry.h%""
		alias
			"[
				nav_msgs::Odometry* msg = new nav_msgs::Odometry();
				msg->header = *((std_msgs::Header*)$a_header_ptr);
				msg->child_frame_id = std::string((char*)$a_child_frame_id_ptr);
				msg->pose = *((geometry_msgs::PoseWithCovariance*)$a_pose_ptr);
				msg->twist = *((geometry_msgs::TwistWithCovariance*)$a_twist_ptr);
				return msg;
			]"
		end

	subscribe_to_ros (a_worker_obj: POINTER; c_topic_name: POINTER; obj: ANY; routine: POINTER)
		external
			"C++ inline use %"subscriber.h%", %"nav_msgs/Odometry.h%""
		alias
			"((Subscriber*)($a_worker_obj))->subscribe<nav_msgs::Odometry, nav_msgs::Odometry::ConstPtr> ($c_topic_name, $obj, $routine);"
		end
end
