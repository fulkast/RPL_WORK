note
	description: "A point message printer using class of POINT_MSG"
	author: "Lanke Frank Tarimo Fu"
	date: "09.11.15"

class
	POINT_MSG_PUBLISHER

inherit
	TASK_MSG_PUBLISHERS[POINT_MSG]

create

	make_with_attributes

feature {NONE}

	make_with_attributes(tp_name : STRING)
		do
			point_color := create {COLOR_RGBA_MSG}.make_red
				-- Color of the point displayed
			size := create {VECTOR_3D_MSG}.make_empty
				-- Size of the point displayed
			message_2_send := create {MARKER_MSG}.make_empty
				-- Initialize the message to send
			publisher := create {ROS_PUBLISHER[MARKER_MSG]}.make_with_topic (tp_name)
				-- Create the publisher with the default values set above
			publisher.advertize (1, true)
				-- Advertisze
		end

feature	-- Access

	update_msg(position :  POINT_MSG)
		-- Update the message to be sent
	do
		message_2_send := create {MARKER_MSG}.make_with_values (
								create {HEADER_MSG}.make_with_values (0, 0, {MAP_TOPICS}.odometry_frame),
		  						create {POSE_MSG}.make_with_values (
		  							create{POINT_MSG}.make_with_values (position.x, position.y, position.z),
									create {QUATERNION_MSG}.make_empty),
								size,
								point_color,"","",
		 						1, 1 ,1 , life_time)
	end

	set_color(color : COLOR_RGBA_MSG)
		-- Set color of the point displayed
	do
		point_color := color
	end

	set_duration(time_length : REAL_64)
		-- Set the publishing duration
	do
		life_time := time_length
	end

	set_size (length,width,height : REAL_64)
		-- Set size of the point displayed
	do
		size := create {VECTOR_3D_MSG}.make_with_values (length, width, height)
	end

feature {NONE} -- Implementation

	point_color : COLOR_RGBA_MSG
		-- 	Color of the point
	life_time   : REAL_64
		-- Duration of the point
	size        : VECTOR_3D_MSG
		-- Size of the point

end -- class
