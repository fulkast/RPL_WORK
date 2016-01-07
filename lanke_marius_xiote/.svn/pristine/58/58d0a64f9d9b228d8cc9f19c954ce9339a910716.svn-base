note
	description: "Range to the object registered by emitting and receiving back the signal."
	author: "Rusakov Andrey"
	date: "08.04.2015"

class
	RANGE_MSG

inherit
	STAMPED_MSG

create
	make_empty, make_from_pointer, make_with_values, make_from_separate

feature {NONE} -- Initialization.

	make_empty
			-- Create empty`Current'.
		do
			create header.make_empty
			range := -1.0
		end

	make_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		do
			set_from_pointer (c_ptr)
		end

	make_with_values (a_header: HEADER_MSG; a_radiation_type: NATURAL_8;
						a_field_of_view, a_min_range, a_max_range, a_range: REAL_32)
			-- Create `Current' with values.
		do
			header := a_header
			radiation_type := a_radiation_type
			field_of_view := a_field_of_view
			min_range := a_min_range
			max_range := a_max_range
			range := a_range
		end

feature -- Constants

	type_ultrasound: NATURAL_8 = 0
	type_infrared: NATURAL_8 = 1
			-- Available radiation types.

feature -- Access

	radiation_type: NATURAL_8
			-- Radiation type (IR, sound, etc.).

	field_of_view: REAL_32
			-- Field of view in radians.
			-- Direction corresponds to X-axis and varies between -field_of_view/2 to field_of_view/2.

	min_range, max_range: REAL_32
			-- Min and max values in meters. Anything outside of this interval should be ignored.

	range: REAL_32
			-- Measured range value.

	is_valid_range: BOOLEAN
			-- Is range value between min and max?
		do
			Result := range >= min_range and range <= max_range
		end

feature {ROS_SUBSCRIBER}

	set_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		do
			create header.make_from_pointer (get_header_from_c (c_ptr))
			radiation_type := get_radiation_type_from_c (c_ptr)
			field_of_view := get_field_of_view_type_from_c (c_ptr)
			min_range := get_min_range_from_c (c_ptr)
			max_range := get_max_range_from_c (c_ptr)
			range := get_range_from_c (c_ptr)
		end

feature {ROS_MESSAGE}

	allocate_c_msg: POINTER
			-- Pointer to the corresponding ROS message instance in C++.
		local
			header_ptr: POINTER
		do
			header_ptr := header.allocate_c_msg
			Result := c_msg_ptr (header_ptr, radiation_type, field_of_view, min_range, max_range, range)
			header.deallocate_c_msg (header_ptr)
		end

	deallocate_c_msg (a_msg_ptr: POINTER)
		external
			"C++ inline use %"sensor_msgs/Range.h%""
		alias
			"delete (sensor_msgs::Range*)$a_msg_ptr;"
		end

feature {NONE} -- Externals.

	get_header_from_c (c_ptr: POINTER): POINTER
		external
			"C++ inline use %"sensor_msgs/Range.h%""
		alias
			"return &(((sensor_msgs::Range*)($c_ptr))->header);"
		end

	get_radiation_type_from_c (c_ptr: POINTER): NATURAL_8
		external
			"C++ inline use %"sensor_msgs/Range.h%""
		alias
			"return (uint8_t)(((sensor_msgs::Range*)($c_ptr))->radiation_type);"
		end

	get_field_of_view_type_from_c (c_ptr: POINTER): REAL_32
		external
			"C++ inline use %"sensor_msgs/Range.h%""
		alias
			"return (float)(((sensor_msgs::Range*)($c_ptr))->field_of_view);"
		end

	get_min_range_from_c (c_ptr: POINTER): REAL_32
		external
			"C++ inline use %"sensor_msgs/Range.h%""
		alias
			"return (float)(((sensor_msgs::Range*)($c_ptr))->min_range);"
		end

	get_max_range_from_c (c_ptr: POINTER): REAL_32
		external
			"C++ inline use %"sensor_msgs/Range.h%""
		alias
			"return (float)(((sensor_msgs::Range*)($c_ptr))->max_range);"
		end

	get_range_from_c (c_ptr: POINTER): REAL_32
		external
			"C++ inline use %"sensor_msgs/Range.h%""
		alias
			"return (float)(((sensor_msgs::Range*)($c_ptr))->range);"
		end

	c_ros_advertize (a_worker_obj: POINTER; a_queue_size: INTEGER; a_is_latched: BOOLEAN)
		external
			"C++ inline  use %"publisher.h%", %"sensor_msgs/Range.h%""
		alias
			"((Publisher*)($a_worker_obj))->advertize <sensor_msgs::Range> ($a_queue_size, $a_is_latched);"
		end

	c_ros_publish (a_worker_obj: POINTER; a_msg_ptr: POINTER)
		external
			"C++ inline use %"publisher.h%", %"sensor_msgs/Range.h%""
		alias
			"((Publisher*)($a_worker_obj))->publish_message <sensor_msgs::Range> (*((sensor_msgs::Range*)$a_msg_ptr));"
		end

	c_msg_ptr (a_header_ptr: POINTER; a_radiation_type: NATURAL_8;
						a_field_of_view, a_min_range, a_max_range, a_range: REAL_32): POINTER
		external
			"C++ inline use %"sensor_msgs/Range.h%""
		alias
			"[
				sensor_msgs::Range* msg = new sensor_msgs::Range();
				msg->header = *((std_msgs::Header*)$a_header_ptr);
				msg->radiation_type = $a_radiation_type;
				msg->field_of_view = $a_field_of_view;
				msg->min_range = $a_min_range;
				msg->max_range = $a_max_range;
				msg->range = $a_range;
				return msg;
			]"
		end

	subscribe_to_ros (a_worker_obj: POINTER; c_topic_name: POINTER; obj: ANY; routine: POINTER)
		external
			"C++ inline use %"subscriber.h%", %"sensor_msgs/Range.h%""
		alias
			"((Subscriber*)($a_worker_obj))->subscribe<sensor_msgs::Range, sensor_msgs::Range::ConstPtr> ($c_topic_name, $obj, $routine);"
		end
end
