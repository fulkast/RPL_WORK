note
	description: "Reflected and ambient values registered by emitting and receiving back the signal. NOT INCLUDED IN ROS."
	author: "Rusakov Andrey"
	date: "08.04.2015"

class
	REFLECTED_AMBIENT_MSG

inherit
	STAMPED_MSG

create
	make_empty, make_from_pointer, make_with_values, make_from_separate

feature {NONE} -- Initialization.

	make_empty
			-- Create empty`Current'.
		do
			create header.make_empty
			reflected := -1
		end

	make_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		do
			set_from_pointer (c_ptr)
		end

	make_with_values (a_header: HEADER_MSG; a_reflected_min, a_reflected_max, a_ambient_min, a_ambient_max, a_reflected, a_ambient: REAL_32)
			-- Create `Current' with values.
		do
			header := a_header
			reflected_min := a_reflected_min
			reflected_max := a_reflected_max
			ambient_min := a_ambient_min
			ambient_max := a_ambient_max
			reflected := a_reflected
			ambient := a_ambient
		end

feature -- Access

	reflected_min, reflected_max: REAL_32
			-- Min and max reflected values in device-specific units. Anything outside of this interval should be ignored.

	ambient_min, ambient_max: REAL_32
			-- Min and max ambient values in device-specific units. Anything outside of this interval should be ignored.

	reflected: REAL_32
			-- Reflected signal value in device-specific units.

	ambient: REAL_32
			-- Ambient signal value in device-specific units.

feature {ROS_SUBSCRIBER}

	set_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		do
			create header.make_from_pointer (get_header_from_c (c_ptr))
			reflected_min := get_reflected_min_from_c (c_ptr)
			reflected_max := get_reflected_max_from_c (c_ptr)
			ambient_min := get_ambient_min_from_c (c_ptr)
			ambient_max := get_ambient_max_from_c (c_ptr)
			reflected := get_reflected_from_c (c_ptr)
			ambient := get_ambient_from_c (c_ptr)
		end

feature {ROS_MESSAGE}

	allocate_c_msg: POINTER
			-- Pointer to the corresponding ROS message instance in C++.
		local
			header_ptr: POINTER
		do
			header_ptr := header.allocate_c_msg
			Result := c_msg_ptr (header_ptr, reflected_min, reflected_max, ambient_min, ambient_max, reflected, ambient)
			header.deallocate_c_msg (header_ptr)
		end

	deallocate_c_msg (a_msg_ptr: POINTER)
		external
			"C++ inline use %"roboscoop_ros/RS_ReflectedAmbient.h%""
		alias
			"delete (roboscoop_ros::RS_ReflectedAmbient*)$a_msg_ptr;"
		end

feature {NONE} -- Externals.

	get_header_from_c (c_ptr: POINTER): POINTER
		external
			"C++ inline use %"roboscoop_ros/RS_ReflectedAmbient.h%""
		alias
			"return &(((roboscoop_ros::RS_ReflectedAmbient*)($c_ptr))->header);"
		end

	get_reflected_min_from_c (c_ptr: POINTER): REAL_32
		external
			"C++ inline use %"roboscoop_ros/RS_ReflectedAmbient.h%""
		alias
			"return (float)(((roboscoop_ros::RS_ReflectedAmbient*)($c_ptr))->reflected_min);"
		end

	get_reflected_max_from_c (c_ptr: POINTER): REAL_32
		external
			"C++ inline use %"roboscoop_ros/RS_ReflectedAmbient.h%""
		alias
			"return (float)(((roboscoop_ros::RS_ReflectedAmbient*)($c_ptr))->reflected_max);"
		end

	get_ambient_min_from_c (c_ptr: POINTER): REAL_32
		external
			"C++ inline use %"roboscoop_ros/RS_ReflectedAmbient.h%""
		alias
			"return (float)(((roboscoop_ros::RS_ReflectedAmbient*)($c_ptr))->ambient_min);"
		end

	get_ambient_max_from_c (c_ptr: POINTER): REAL_32
		external
			"C++ inline use %"roboscoop_ros/RS_ReflectedAmbient.h%""
		alias
			"return (float)(((roboscoop_ros::RS_ReflectedAmbient*)($c_ptr))->ambient_max);"
		end

	get_reflected_from_c (c_ptr: POINTER): REAL_32
		external
			"C++ inline use %"roboscoop_ros/RS_ReflectedAmbient.h%""
		alias
			"return (float)(((roboscoop_ros::RS_ReflectedAmbient*)($c_ptr))->reflected);"
		end

	get_ambient_from_c (c_ptr: POINTER): REAL_32
		external
			"C++ inline use %"roboscoop_ros/RS_ReflectedAmbient.h%""
		alias
			"return (float)(((roboscoop_ros::RS_ReflectedAmbient*)($c_ptr))->ambient);"
		end

	c_ros_advertize (a_worker_obj: POINTER; a_queue_size: INTEGER; a_is_latched: BOOLEAN)
		external
			"C++ inline  use %"publisher.h%", %"roboscoop_ros/RS_ReflectedAmbient.h%""
		alias
			"((Publisher*)($a_worker_obj))->advertize <roboscoop_ros::RS_ReflectedAmbient> ($a_queue_size, $a_is_latched);"
		end

	c_ros_publish (a_worker_obj: POINTER; a_msg_ptr: POINTER)
		external
			"C++ inline use %"publisher.h%", %"roboscoop_ros/RS_ReflectedAmbient.h%""
		alias
			"((Publisher*)($a_worker_obj))->publish_message <roboscoop_ros::RS_ReflectedAmbient> (*((roboscoop_ros::RS_ReflectedAmbient*)$a_msg_ptr));"
		end

	c_msg_ptr (a_header_ptr: POINTER; a_reflected_min, a_reflected_max, a_ambient_min, a_ambient_max, a_reflected, a_ambient: REAL_32): POINTER
		external
			"C++ inline use %"roboscoop_ros/RS_ReflectedAmbient.h%""
		alias
			"[
				roboscoop_ros::RS_ReflectedAmbient* msg = new roboscoop_ros::RS_ReflectedAmbient();
				msg->header = *((std_msgs::Header*)$a_header_ptr);
				msg->reflected_min = $a_reflected_min;
				msg->reflected_max = $a_reflected_max;
				msg->ambient_min = $a_ambient_min;
				msg->ambient_max = $a_ambient_max;
				msg->reflected = $a_reflected;
				msg->ambient = $a_ambient;
				return msg;
			]"
		end

	subscribe_to_ros (a_worker_obj: POINTER; c_topic_name: POINTER; obj: ANY; routine: POINTER)
		external
			"C++ inline use %"subscriber.h%", %"roboscoop_ros/RS_ReflectedAmbient.h%""
		alias
			"((Subscriber*)($a_worker_obj))->subscribe<roboscoop_ros::RS_ReflectedAmbient, roboscoop_ros::RS_ReflectedAmbient::ConstPtr> ($c_topic_name, $obj, $routine);"
		end
end
