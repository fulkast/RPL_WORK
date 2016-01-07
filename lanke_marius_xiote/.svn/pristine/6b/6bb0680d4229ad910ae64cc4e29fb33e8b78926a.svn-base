note
	description: "Pose in 3D-space composed of position and orientation."
	author: "Rusakov Andrey"
	date: "30.03.2015"

class
	POSE_MSG

inherit
	ROS_MESSAGE

create
	make_empty, make_from_pointer, make_with_values, make_from_separate

feature {NONE} -- Initialization.

	make_empty
			-- Create empty `Current'.
		do
			create position.make_empty
			create orientation.make_empty
		end

	make_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		do
			set_from_pointer (c_ptr)
		end

	make_with_values (a_position: POINT_MSG; a_orientation: QUATERNION_MSG)
			-- Create `Current' with values.
		do
			position := a_position
			orientation := a_orientation
		end

feature -- Access

	position: POINT_MSG
			-- Position.

	orientation: QUATERNION_MSG
			-- Orientation.

feature {ROS_SUBSCRIBER}

	set_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		do
			create position.make_from_pointer (get_position_from_c (c_ptr))
			create orientation.make_from_pointer (get_orientation_from_c (c_ptr))
		end

feature {ROS_MESSAGE}

	allocate_c_msg: POINTER
			-- Pointer to the corresponding ROS message instance in C++.
		local
			p_ptr, o_ptr: POINTER
		do
			p_ptr := position.allocate_c_msg
			o_ptr := orientation.allocate_c_msg
			Result := c_msg_ptr (p_ptr, o_ptr)
			position.deallocate_c_msg (p_ptr)
			orientation.deallocate_c_msg (o_ptr)
		end

	deallocate_c_msg (a_msg_ptr: POINTER)
		external
			"C++ inline use %"geometry_msgs/Pose.h%""
		alias
			"delete (geometry_msgs::Pose*)$a_msg_ptr;"
		end

feature {NONE} -- Externals

	get_position_from_c (c_ptr: POINTER): POINTER
		external
			"C++ inline use %"geometry_msgs/Pose.h%""
		alias
			"return &(((geometry_msgs::Pose*)($c_ptr))->position);"
		end

	get_orientation_from_c (c_ptr: POINTER): POINTER
		external
			"C++ inline use %"geometry_msgs/Pose.h%""
		alias
			"return &(((geometry_msgs::Pose*)($c_ptr))->orientation);"
		end

	c_msg_ptr (a_position, a_orientation: POINTER): POINTER
		external
			"C++ inline use %"geometry_msgs/Pose.h%""
		alias
			"[
				geometry_msgs::Pose* msg = new geometry_msgs::Pose();
				msg->position = *((geometry_msgs::Point*)$a_position);
				msg->orientation = *((geometry_msgs::Quaternion*)$a_orientation);
				return msg;
			]"
		end

	c_ros_advertize (a_worker_obj: POINTER; a_queue_size: INTEGER; a_is_latched: BOOLEAN)
		external
			"C++ inline  use %"publisher.h%", %"geometry_msgs/Pose.h%""
		alias
			"((Publisher*)($a_worker_obj))->advertize <geometry_msgs::Pose> ($a_queue_size, $a_is_latched);"
		end

	c_ros_publish (a_worker_obj: POINTER; a_msg_ptr: POINTER)
		external
			"C++ inline use %"publisher.h%", %"geometry_msgs/Pose.h%""
		alias
			"((Publisher*)($a_worker_obj))->publish_message <geometry_msgs::Pose> (*((geometry_msgs::Pose*)$a_msg_ptr));"
		end

	subscribe_to_ros (a_worker_obj: POINTER; c_topic_name: POINTER; obj: ANY; routine: POINTER)
		external
			"C++ inline use %"subscriber.h%", %"geometry_msgs/Pose.h%""
		alias
			"((Subscriber*)($a_worker_obj))->subscribe<geometry_msgs::Pose, geometry_msgs::Pose::ConstPtr> ($c_topic_name, $obj, $routine);"
		end
end
