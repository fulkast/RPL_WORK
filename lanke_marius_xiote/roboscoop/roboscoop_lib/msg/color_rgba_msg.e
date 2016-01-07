note
	description: "RGB color with the alpha component."
	author: "Rusakov Andrey"
	date: "01.04.2015"

class
	COLOR_RGBA_MSG

inherit
	ROS_MESSAGE

create
	make_empty, make_from_pointer, make_with_values, make_from_separate,
	make_red, make_green, make_blue, make_black, make_white, make_yellow

feature {NONE} -- Initialization

	make_empty
			-- Create empty Current.
		do
		end

	make_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		do
			set_from_pointer (c_ptr)
		end

	make_with_values (red, green, blue, alpha: REAL_32)
			-- Create `Current' with values.
		require
			red >= 0.0 and red <= 1.0
			green >= 0.0 and green <= 1.0
			blue >= 0.0 and blue <= 1.0
			alpha >= 0.0 and alpha <= 1.0
		do
			r := red
			g := green
			b := blue
			a := alpha
		end

feature {NONE} -- Predefined colors

	make_black
			-- Create black color.
		do
			make_with_values (0.0, 0.0, 0.0, 1.0)
		end

	make_white
			-- Create white color.
		do
			make_with_values (1.0, 1.0, 1.0, 1.0)
		end

	make_red
			-- Create red color.
		do
			make_with_values (1.0, 0.0, 0.0, 1.0)
		end

	make_green
			-- Create green color.
		do
			make_with_values (0.0, 1.0, 0.0, 1.0)
		end

	make_blue
			-- Create blue color.
		do
			make_with_values (0.0, 0.0, 1.0, 1.0)
		end

	make_yellow
			-- Create blue color.
		do
			make_with_values (1.0, 1.0, 0.0, 1.0)
		end

feature -- Access

	r, g, b, a: REAL_32
			-- Coordinates.

feature {ROS_SUBSCRIBER}

	set_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		do
			r := get_r_from_c (c_ptr)
			g := get_g_from_c (c_ptr)
			b := get_b_from_c (c_ptr)
			a := get_a_from_c (c_ptr)
		end

feature {ROS_MESSAGE}

	allocate_c_msg: POINTER
			-- Pointer to the corresponding ROS message instance in C++.
		do
			Result := c_msg_ptr (r, g, b, a)
		end

	deallocate_c_msg (a_msg_ptr: POINTER)
		external
			"C++ inline use %"std_msgs/ColorRGBA.h%""
		alias
			"delete (std_msgs::ColorRGBA*)$a_msg_ptr;"
		end

feature {NONE} -- Externals

	get_r_from_c (c_ptr: POINTER): REAL_32
		external
			"C++ inline use %"std_msgs/ColorRGBA.h%""
		alias
			"return (float)(((std_msgs::ColorRGBA*)($c_ptr))->r);"
		end

	get_g_from_c (c_ptr: POINTER): REAL_32
		external
			"C++ inline use %"std_msgs/ColorRGBA.h%""
		alias
			"return (float)(((std_msgs::ColorRGBA*)($c_ptr))->g);"
		end

	get_b_from_c (c_ptr: POINTER): REAL_32
		external
			"C++ inline use %"std_msgs/ColorRGBA.h%""
		alias
			"return (float)(((std_msgs::ColorRGBA*)($c_ptr))->b);"
		end

	get_a_from_c (c_ptr: POINTER): REAL_32
		external
			"C++ inline use %"std_msgs/ColorRGBA.h%""
		alias
			"return (float)(((std_msgs::ColorRGBA*)($c_ptr))->a);"
		end

	c_msg_ptr (a_r, a_g, a_b, a_a: REAL_32): POINTER
		external
			"C++ inline use %"std_msgs/ColorRGBA.h%""
		alias
			"[
				std_msgs::ColorRGBA* msg = new std_msgs::ColorRGBA();
				msg->r = $a_r;
				msg->g = $a_g;
				msg->b = $a_b;
				msg->a = $a_a;
				return msg;
			]"
		end

	c_ros_advertize (a_worker_obj: POINTER; a_queue_size: INTEGER; a_is_latched: BOOLEAN)
		external
			"C++ inline  use %"publisher.h%", %"std_msgs/ColorRGBA.h%""
		alias
			"((Publisher*)($a_worker_obj))->advertize <std_msgs::ColorRGBA> ($a_queue_size, $a_is_latched);"
		end

	c_ros_publish (a_worker_obj: POINTER; a_msg_ptr: POINTER)
		external
			"C++ inline use %"publisher.h%", %"std_msgs/ColorRGBA.h%""
		alias
			"((Publisher*)($a_worker_obj))->publish_message <std_msgs::ColorRGBA> (*((std_msgs::ColorRGBA*)$a_msg_ptr));"
		end

	subscribe_to_ros (a_worker_obj: POINTER; c_topic_name: POINTER; obj: ANY; routine: POINTER)
		external
			"C++ inline use %"subscriber.h%", %"std_msgs/ColorRGBA.h%""
		alias
			"((Subscriber*)($a_worker_obj))->subscribe<std_msgs::ColorRGBA, std_msgs::ColorRGBA::ConstPtr> ($c_topic_name, $obj, $routine);"
		end
end
