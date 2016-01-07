note
	description: "Eiffel representation of ROS AsebaEvent message type."
	author: "Rusakov Andrey"
	date: "02.04.2015"

class
	ASEBA_MSG

inherit
	ROS_MESSAGE

create
	make_empty, make_from_pointer, make_from_values, make_from_separate,
	make_with_one_value, make_with_two_values, make_with_three_values

feature {NONE} -- Initialization

	make_empty
			-- Create empty `Current'.
		do
			create data.make_empty
		end

	make_from_values (a_data: separate ARRAY[INTEGER_16]; a_source: NATURAL_16; a_timestamp: REAL_64)
			-- Create `Current' with the values of `data'.
		do
			create data.make_filled (0, 1, a_data.count)
			copy_array_data (data.area.base_address, a_data.area.base_address, data.count)
			source := a_source
			timestamp := a_timestamp
		end

	make_with_one_value (value: INTEGER_16)
			-- Create `Current' with `value'.
		do
			timestamp := get_now
			create data.make_filled (0, 1, 1)
			data[1] := value
		end

	make_with_two_values (value_first, value_second: INTEGER_16)
			-- Create `Current' with `value_first' and `value_second'.
		do
			timestamp := get_now
			create data.make_filled (0, 1, 2)
			data[1] := value_first
			data[2] := value_second
		end

	make_with_three_values (value_first, value_second, value_third: INTEGER_16)
			-- Create `Current' with `value_first', `value_second' and `value_third'.
		do
			timestamp := get_now
			create data.make_filled (0, 1, 3)
			data[1] := value_first
			data[2] := value_second
			data[3] := value_third
		end

	make_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		do
			set_from_pointer (c_ptr)
		end

feature -- Access

	timestamp: REAL_64
			-- Time stamp.

	source: NATURAL_16
			-- Source of the message (e.g., 0 = computer, 1 = robot).

	data: ARRAY [INTEGER_16]
			-- Message data.

feature {ROS_SUBSCRIBER}

	set_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		do
			timestamp := get_timestamp_from_c (c_ptr)
			source := get_source_from_c (c_ptr)
			create data.make_filled (0, 1, get_data_size_from_c (c_ptr))
			copy_array_data_from_c (data.area.base_address, c_ptr, get_data_size_from_c (c_ptr))
		end

feature {ROS_MESSAGE}

	allocate_c_msg: POINTER
			-- Pointer to the corresponding ROS message instance in C++.
		do
			Result := c_msg_ptr (timestamp, source, data.area.base_address, data.count)
		end

	deallocate_c_msg (a_msg_ptr: POINTER)
		external
			"C++ inline use %"asebaros/AsebaEvent.h%""
		alias
			"delete (asebaros::AsebaEvent*)$a_msg_ptr;"
		end

feature {NONE} -- Externals

	copy_array_data (to_array: POINTER; from_array: POINTER; size: INTEGER)
		external
			"C++ inline"
		alias
			"memcpy ((EIF_INTEGER_16 *)$to_array, $from_array, $size * sizeof (EIF_INTEGER_16));"
		end

	get_timestamp_from_c (c_ptr: POINTER): REAL_64
		external
			"C++ inline use %"asebaros/AsebaEvent.h%""
		alias
			"return (double)(((asebaros::AsebaEvent*)($c_ptr))->stamp.toSec());"
		end

	get_source_from_c (c_ptr: POINTER): NATURAL_16
		external
			"C++ inline use %"asebaros/AsebaEvent.h%""
		alias
			"return (double)((asebaros::AsebaEvent*)$c_ptr)->source;"
		end

	get_data_size_from_c (c_ptr: POINTER): INTEGER
		external
			"C++ inline use %"asebaros/AsebaEvent.h%""
		alias
			"return (int)(((asebaros::AsebaEvent*)($c_ptr))->data.size());"
		end

	copy_array_data_from_c (eif_array: POINTER; c_ptr: POINTER; size: INTEGER)
		external
			"C++ inline use %"asebaros/AsebaEvent.h%""
		alias
			"memcpy ((EIF_INTEGER_16 *)$eif_array, (((asebaros::AsebaEvent*)($c_ptr))->data.data()), $size * sizeof (EIF_INTEGER_16));"
		end

	c_ros_advertize (a_worker_obj: POINTER; a_queue_size: INTEGER; a_is_latched: BOOLEAN)
		external
			"C++ inline  use %"publisher.h%", %"asebaros/AsebaEvent.h%""
		alias
			"((Publisher*)($a_worker_obj))->advertize <asebaros::AsebaEvent> ($a_queue_size, $a_is_latched);"
		end

	c_ros_publish (a_worker_obj, a_msg_ptr: POINTER)
		external
			"C++ inline use %"publisher.h%", %"asebaros/AsebaEvent.h%""
		alias
			"((Publisher*)($a_worker_obj))->publish_message <asebaros::AsebaEvent> (*((asebaros::AsebaEvent*)$a_msg_ptr));"
		end

	c_msg_ptr (a_timestamp: REAL_64; a_source: NATURAL_16; a_data: POINTER; a_size: INTEGER): POINTER
		external
			"C++ inline use %"asebaros/AsebaEvent.h%""
		alias
			"[
				asebaros::AsebaEvent* msg = new asebaros::AsebaEvent();
				msg->stamp = ros::Time($a_timestamp);
				msg->source = $a_source;
				msg->data = std::vector<int16_t>((int16_t*)$a_data, (int16_t*)$a_data + $a_size);
				return msg;
			]"
		end

	subscribe_to_ros (a_worker_obj: POINTER; c_topic_name: POINTER; obj: ANY; routine: POINTER)
		external
			"C++ inline use %"subscriber.h%", %"asebaros/AsebaEvent.h%""
		alias
			"((Subscriber*)($a_worker_obj))->subscribe<asebaros::AsebaEvent, asebaros::AsebaEvent::ConstPtr> ($c_topic_name, $obj, $routine);"
		end
end
