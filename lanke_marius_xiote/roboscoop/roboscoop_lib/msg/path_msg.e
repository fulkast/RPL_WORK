note
	description: "Ordered list of poses."
	author: "Rusakov Andrey"
	date: "20.11.2013"
	modified: "01.11.2014"

class
	PATH_MSG

inherit
	STAMPED_MSG

create
	make_empty, make_from_pointer, make_with_values, make_from_separate

feature {NONE} -- Initialization

	make_empty
			-- Create empty`Current'.
		do
			create header.make_empty
			create poses.make_empty
		end

	make_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		do
			set_from_pointer (c_ptr)
		end

	make_with_values (a_header: HEADER_MSG; a_poses: ARRAY[POSE_STAMPED_MSG])
			-- Create `Current' with values.
		do
			header := a_header
			poses := a_poses
		end

feature -- Access

	poses: ARRAY[POSE_STAMPED_MSG]
			-- List of poses representing the path.

feature {ROS_SUBSCRIBER}

	set_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		local
			size, i: INTEGER
		do
			create header.make_from_pointer(get_header_from_c (c_ptr))
			size := get_poses_count_from_c (c_ptr)
			from
				create poses.make_filled (create {POSE_STAMPED_MSG}.make_empty , 1, size)
				i := 0
			until
				i >= size
			loop
				poses[i + 1] := (create {POSE_STAMPED_MSG}.make_from_pointer (get_pose_element_ptr_from_c (c_ptr, i)))
				i := i + 1
			end
		end

feature {ROS_MESSAGE}

	allocate_c_msg: POINTER
			-- Pointer to the corresponding ROS message instance in C++.
		local
			header_ptr, pose_ptr: POINTER
			i: INTEGER
		do
			header_ptr := header.allocate_c_msg
			Result := c_msg_ptr (header_ptr)
			from
				i := poses.lower
			until
				i > poses.upper
			loop
				pose_ptr := poses[i].allocate_c_msg
				c_ros_add_pose_to_path (Result, pose_ptr)
				poses[i].deallocate_c_msg (pose_ptr)
				i := i + 1
			end
			header.deallocate_c_msg (header_ptr)
		end

	deallocate_c_msg (a_msg_ptr: POINTER)
		external
			"C++ inline use %"nav_msgs/Path.h%""
		alias
			"delete (nav_msgs::Path*)$a_msg_ptr;"
		end

feature {NONE} -- Externals

	get_header_from_c (c_ptr: POINTER): POINTER
		external
			"C++ inline use %"nav_msgs/Path.h%""
		alias
			"return &(((nav_msgs::Path*)($c_ptr))->header);"
		end

	get_poses_count_from_c (c_ptr: POINTER): INTEGER
		external
			"C++ inline use %"nav_msgs/Path.h%""
		alias
			"return (int)(((nav_msgs::Path*)($c_ptr))->poses.size());"
		end

	get_pose_element_ptr_from_c (c_ptr: POINTER; a_index: INTEGER): POINTER
		external
			"C++ inline use %"nav_msgs/Path.h%""
		alias
			"return &(((nav_msgs::Path*)($c_ptr))->poses[$a_index]);"
		end

	c_ros_advertize (a_worker_obj: POINTER; a_queue_size: INTEGER; a_is_latched: BOOLEAN)
		external
			"C++ inline  use %"publisher.h%", %"nav_msgs/Path.h%""
		alias
			"((Publisher*)($a_worker_obj))->advertize <nav_msgs::Path> ($a_queue_size, $a_is_latched);"
		end

	c_ros_publish (a_worker_obj: POINTER; a_msg_ptr: POINTER)
		external
			"C++ inline use %"publisher.h%", %"nav_msgs/Path.h%""
		alias
			"((Publisher*)($a_worker_obj))->publish_message <nav_msgs::Path> (*(nav_msgs::Path*)($a_msg_ptr));"
		end

	c_msg_ptr (a_header_ptr: POINTER): POINTER
		external
			"C++ inline use %"nav_msgs/Path.h%""
		alias
			"[
				nav_msgs::Path* msg = new nav_msgs::Path();
				msg->header = *((std_msgs::Header*)$a_header_ptr);
				return msg;
			]"
		end

	c_ros_add_pose_to_path (a_path_ptr, a_pose_ptr: POINTER)
		external
			"C++ inline use %"nav_msgs/Path.h%""
		alias
			"[
				nav_msgs::Path* path = ((nav_msgs::Path*)($a_path_ptr));
				path->poses.push_back(*((geometry_msgs::PoseStamped*)$a_pose_ptr));
			]"
		end

	subscribe_to_ros (a_worker_obj: POINTER; c_topic_name: POINTER; obj: ANY; routine: POINTER)
		external
			"C++ inline use %"subscriber.h%", %"nav_msgs/Path.h%""
		alias
			"((Subscriber*)($a_worker_obj))->subscribe<nav_msgs::Path, nav_msgs::Path::ConstPtr> ($c_topic_name, $obj, $routine);"
		end
end
