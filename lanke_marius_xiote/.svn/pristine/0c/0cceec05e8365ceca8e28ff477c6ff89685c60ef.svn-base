note
	description: "Single scan from a planar laser range-sensor."
	author: "Rusakov Andrey"
	date: "08.04.2015"

class
	LASER_SCAN_MSG

inherit
	STAMPED_MSG

create
	make_empty, make_from_pointer, make_with_values, make_from_separate

feature {NONE} -- Initialization.

	make_empty
			-- Create empty`Current'.
		do
			create header.make_empty
			create ranges.make_empty
			create intensities.make_empty
		end

	make_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		do
			set_from_pointer (c_ptr)
		end

	make_with_values (a_header: HEADER_MSG; a_angle_min, a_angle_max, a_angle_increment, a_time_increment, a_scan_time,
						a_range_min, a_range_max: REAL_32; a_ranges, a_intensities: ARRAY[REAL_32])
			-- Create `Current' with values.
		do
			header := a_header
			angle_min := a_angle_min
			angle_max := a_angle_max
			angle_increment := a_angle_increment
			time_increment := a_time_increment
			scan_time := a_scan_time
			range_min := a_range_min
			range_max := a_range_max
			create ranges.make_filled (-1, 1, a_ranges.count)
			copy_float_array_data (ranges.area.base_address, a_ranges.area.base_address, a_ranges.count)
			create intensities.make_filled (-1, 1, a_intensities.count)
			copy_float_array_data (intensities.area.base_address, a_intensities.area.base_address, a_intensities.count)
		end

feature -- Access

	angle_min, angle_max: REAL_32
			-- Min and max angle values in radians.

	angle_increment: REAL_32
			-- Angular distance between measurements in radians.

	time_increment: REAL_32
			-- Time between measurements in seconds.

	scan_time: REAL_32
			-- Time between scans in seconds.

	range_min, range_max: REAL_32
			-- Min and max values in meters. Anything outside of this interval should be ignored.

	ranges: ARRAY[REAL_32]
			-- Range values in meters.

	intensities: ARRAY[REAL_32]
			-- Intensity values in device-specific units, use an empty arrays if unavailable.

feature {ROS_SUBSCRIBER}

	set_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		do
			angle_min := get_angle_min_from_c (c_ptr)
			angle_max := get_angle_max_from_c (c_ptr)
			angle_increment := get_angle_increment_from_c (c_ptr)
			time_increment := get_time_increment_from_c (c_ptr)
			scan_time := get_scan_time_from_c (c_ptr)
			range_min := get_range_min_from_c (c_ptr)
			range_max := get_range_max_from_c (c_ptr)
			create header.make_from_pointer (get_header_from_c (c_ptr))
			create ranges.make_filled (-1, 1, get_ranges_count_from_c (c_ptr))
			create intensities.make_filled (-1, 1, get_intensities_count_from_c (c_ptr))
			copy_ranges_from_c (ranges.area.base_address, c_ptr, ranges.count)
			copy_intensities_from_c (intensities.area.base_address, c_ptr, intensities.count)
		end

feature {ROS_MESSAGE}

	allocate_c_msg: POINTER
			-- Pointer to the corresponding ROS message instance in C++.
		local
			header_ptr: POINTER
		do
			header_ptr := header.allocate_c_msg
			Result := c_msg_ptr (header_ptr, angle_min, angle_max, angle_increment, time_increment, scan_time, range_min, range_max,
									ranges.area.base_address, intensities.area.base_address, ranges.count, intensities.count)
			header.deallocate_c_msg (header_ptr)
		end

	deallocate_c_msg (a_msg_ptr: POINTER)
		external
			"C++ inline use %"sensor_msgs/LaserScan.h%""
		alias
			"delete (sensor_msgs::LaserScan*)$a_msg_ptr;"
		end

feature {NONE} -- Externals.

	copy_float_array_data (to_array: POINTER; from_array: POINTER; size: INTEGER)
		external
			"C++ inline"
		alias
			"memcpy ((EIF_REAL_32 *)$to_array, $from_array, $size * sizeof (EIF_REAL_32));"
		end

	get_header_from_c (c_ptr: POINTER): POINTER
		external
			"C++ inline use %"sensor_msgs/LaserScan.h%""
		alias
			"return &(((sensor_msgs::LaserScan*)($c_ptr))->header);"
		end

	get_angle_min_from_c (c_ptr: POINTER): REAL_32
		external
			"C++ inline use %"sensor_msgs/LaserScan.h%""
		alias
			"return (float)(((sensor_msgs::LaserScan*)($c_ptr))->angle_min);"
		end

	get_angle_max_from_c (c_ptr: POINTER): REAL_32
		external
			"C++ inline use %"sensor_msgs/LaserScan.h%""
		alias
			"return (float)(((sensor_msgs::LaserScan*)($c_ptr))->angle_max);"
		end

	get_angle_increment_from_c (c_ptr: POINTER): REAL_32
		external
			"C++ inline use %"sensor_msgs/LaserScan.h%""
		alias
			"return (float)(((sensor_msgs::LaserScan*)($c_ptr))->angle_increment);"
		end

	get_time_increment_from_c (c_ptr: POINTER): REAL_32
		external
			"C++ inline use %"sensor_msgs/LaserScan.h%""
		alias
			"return (float)(((sensor_msgs::LaserScan*)($c_ptr))->time_increment);"
		end

	get_scan_time_from_c (c_ptr: POINTER): REAL_32
		external
			"C++ inline use %"sensor_msgs/LaserScan.h%""
		alias
			"return (float)(((sensor_msgs::LaserScan*)($c_ptr))->scan_time);"
		end

	get_range_min_from_c (c_ptr: POINTER): REAL_32
		external
			"C++ inline use %"sensor_msgs/LaserScan.h%""
		alias
			"return (float)(((sensor_msgs::LaserScan*)($c_ptr))->range_min);"
		end

	get_range_max_from_c (c_ptr: POINTER): REAL_32
		external
			"C++ inline use %"sensor_msgs/LaserScan.h%""
		alias
			"return (float)(((sensor_msgs::LaserScan*)($c_ptr))->range_max);"
		end

	get_ranges_count_from_c (c_ptr: POINTER): INTEGER
		external
			"C++ inline use %"sensor_msgs/LaserScan.h%""
		alias
			"return (int)(((sensor_msgs::LaserScan*)($c_ptr))->ranges.size());"
		end

	get_intensities_count_from_c (c_ptr: POINTER): INTEGER
		external
			"C++ inline use %"sensor_msgs/LaserScan.h%""
		alias
			"return (int)(((sensor_msgs::LaserScan*)($c_ptr))->intensities.size());"
		end

	copy_ranges_from_c (eif_array: POINTER; c_ptr: POINTER; size: INTEGER)
		external
			"C++ inline use %"sensor_msgs/LaserScan.h%""
		alias
			"memcpy ((EIF_REAL_32 *)$eif_array, (((sensor_msgs::LaserScan*)($c_ptr))->ranges.data()), $size * sizeof (EIF_REAL_32));"
		end

	copy_intensities_from_c (eif_array: POINTER; c_ptr: POINTER; size: INTEGER)
		external
			"C++ inline use %"sensor_msgs/LaserScan.h%""
		alias
			"memcpy ((EIF_REAL_32 *)$eif_array, (((sensor_msgs::LaserScan*)($c_ptr))->intensities.data()), $size * sizeof (EIF_REAL_32));"
		end

	c_ros_advertize (a_worker_obj: POINTER; a_queue_size: INTEGER; a_is_latched: BOOLEAN)
		external
			"C++ inline  use %"publisher.h%", %"sensor_msgs/LaserScan.h%""
		alias
			"((Publisher*)($a_worker_obj))->advertize <sensor_msgs::LaserScan> ($a_queue_size, $a_is_latched);"
		end

	c_ros_publish (a_worker_obj: POINTER; a_msg_ptr: POINTER)
		external
			"C++ inline use %"publisher.h%", %"sensor_msgs/LaserScan.h%""
		alias
			"((Publisher*)($a_worker_obj))->publish_message <sensor_msgs::LaserScan> (*((sensor_msgs::LaserScan*)$a_msg_ptr));"
		end

	c_msg_ptr (a_header_ptr: POINTER; a_angle_min, a_angle_max, a_angle_increment, a_time_increment, a_scan_time,a_range_min, a_range_max: REAL_32;
				a_ranges_ptr, a_intensities_ptr: POINTER; a_ranges_count, a_intensities_count: INTEGER): POINTER
		external
			"C++ inline use %"sensor_msgs/LaserScan.h%""
		alias
			"[
				sensor_msgs::LaserScan* msg = new sensor_msgs::LaserScan();
				msg->header = *((std_msgs::Header*)$a_header_ptr);
				msg->angle_min = $a_angle_min;
				msg->angle_max = $a_angle_max;
				msg->angle_increment = $a_angle_increment;
				msg->time_increment = $a_time_increment;
				msg->scan_time = $a_scan_time;
				msg->range_min = $a_range_min;
				msg->range_max = $a_range_max;
				msg->ranges = std::vector<float>((float*)$a_ranges_ptr, (float*)$a_ranges_ptr + $a_ranges_count);
				msg->intensities = std::vector<float>((float*)$a_intensities_ptr, (float*)$a_intensities_ptr + $a_intensities_count);
				return msg;
			]"
		end

	subscribe_to_ros (a_worker_obj: POINTER; c_topic_name: POINTER; obj: ANY; routine: POINTER)
		external
			"C++ inline use %"subscriber.h%", %"sensor_msgs/LaserScan.h%""
		alias
			"((Subscriber*)($a_worker_obj))->subscribe<sensor_msgs::LaserScan, sensor_msgs::LaserScan::ConstPtr> ($c_topic_name, $obj, $routine);"
		end
end
