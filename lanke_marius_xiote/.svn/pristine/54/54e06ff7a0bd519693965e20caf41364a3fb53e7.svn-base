note
	description: "Pose in 3D-space with uncertainty."
	author: "Rusakov Andrey"
	date: "02.04.2015"

class
	POSE_WITH_COVARIANCE_MSG

inherit
	ROS_MESSAGE

create
	make_empty, make_from_pointer, make_with_values, make_from_separate

feature {NONE} -- Initialization.

	make_empty
			-- Create empty`Current'.
		do
			create pose.make_empty
			create covariance.make_empty
		end

	make_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		do
			set_from_pointer (c_ptr)
		end

	make_with_values (a_pose: POSE_MSG; a_covariance: ARRAY[REAL_64])
			-- Create `Current' with values.
		require
			a_covariance.count = 36
		do
			pose := a_pose
			create covariance.make_filled (0.0, 1, 36)
			copy_array_data (covariance.area.base_address, a_covariance.area.base_address, covariance.count)
		end

feature -- Access.

	pose: POSE_MSG
			-- Position and orientation.

	covariance: ARRAY[REAL_64]
			-- Covariance.

feature {ROS_SUBSCRIBER}

	set_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		do
			create pose.make_from_pointer (get_pose_from_c (c_ptr))
			create covariance.make_filled (0.0, 1, 36)
			copy_covariance_data_from_c (covariance.area.base_address, c_ptr)
		end

feature {ROS_MESSAGE}

	allocate_c_msg: POINTER
			-- Pointer to the corresponding ROS message instance in C++.
		local
			pose_ptr: POINTER
		do
			pose_ptr := pose.allocate_c_msg
			Result := c_msg_ptr (pose_ptr, covariance.area.base_address, covariance.count)
			pose.deallocate_c_msg (pose_ptr)
		end

	deallocate_c_msg (a_msg_ptr: POINTER)
		external
			"C++ inline use %"geometry_msgs/PoseWithCovariance.h%""
		alias
			"delete (geometry_msgs::PoseWithCovariance*)$a_msg_ptr;"
		end

feature {NONE} -- Externals.

	copy_array_data (to_array: POINTER; from_array: POINTER; size: INTEGER)
		external
			"C++ inline"
		alias
			"memcpy ((EIF_REAL_64 *)$to_array, $from_array, $size * sizeof (EIF_REAL_64));"
		end

	copy_covariance_data_from_c (eif_array: POINTER; c_ptr: POINTER)
		external
			"C++ inline use %"geometry_msgs/PoseWithCovariance.h%""
		alias
			"[
				int size = ((geometry_msgs::PoseWithCovariance*)$c_ptr)->covariance.size();
				memcpy ((EIF_REAL_64 *)$eif_array, ((geometry_msgs::PoseWithCovariance*)$c_ptr)->covariance.c_array(), size * sizeof (EIF_REAL_64));
			]"
		end

	get_pose_from_c (c_ptr: POINTER): POINTER
		external
			"C++ inline use %"geometry_msgs/PoseWithCovariance.h%""
		alias
			"return &(((geometry_msgs::PoseWithCovariance*)($c_ptr))->pose);"
		end

	c_ros_advertize (a_worker_obj: POINTER; a_queue_size: INTEGER; a_is_latched: BOOLEAN)
		external
			"C++ inline  use %"publisher.h%", %"geometry_msgs/PoseWithCovariance.h%""
		alias
			"((Publisher*)($a_worker_obj))->advertize <geometry_msgs::PoseWithCovariance> ($a_queue_size, $a_is_latched);"
		end

	c_ros_publish (a_worker_obj: POINTER; a_msg_ptr: POINTER)
		external
			"C++ inline use %"publisher.h%", %"geometry_msgs/PoseWithCovariance.h%""
		alias
			"((Publisher*)($a_worker_obj))->publish_message <geometry_msgs::PoseWithCovariance> (*((geometry_msgs::PoseWithCovariance*)$a_msg_ptr));"
		end

	c_msg_ptr (a_pose_ptr, a_covariance_ptr: POINTER; a_data_size: INTEGER): POINTER
		external
			"C++ inline use %"geometry_msgs/PoseWithCovariance.h%""
		alias
			"[
				geometry_msgs::PoseWithCovariance* msg = new geometry_msgs::PoseWithCovariance();
				msg->pose = *((geometry_msgs::Pose*)$a_pose_ptr);
				boost::array<double, 36> cov;
				memcpy (cov.c_array(), (double*)$a_covariance_ptr, $a_data_size * sizeof (double));
				msg->covariance = cov;
				return msg;
			]"
		end

	subscribe_to_ros (a_worker_obj: POINTER; c_topic_name: POINTER; obj: ANY; routine: POINTER)
		external
			"C++ inline use %"subscriber.h%", %"geometry_msgs/PoseWithCovariance.h%""
		alias
			"((Subscriber*)($a_worker_obj))->subscribe<geometry_msgs::PoseWithCovariance, geometry_msgs::PoseWithCovariance::ConstPtr> ($c_topic_name, $obj, $routine);"
		end
end
