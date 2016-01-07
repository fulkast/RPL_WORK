note
	description: "Summary description for {POINT_MSG_PUBLISHER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	POINT_MSG_PUBLISHER

inherit
	TASK_MSG_PUBLISHERS[POINT_MSG]

create
	make_with_attributes
feature
	make_with_attributes(tp_name : STRING)
		do
			message_2_send := create {MARKER_MSG}.make_empty
			publisher := create {ROS_PUBLISHER[MARKER_MSG]}.make_with_topic (tp_name)
			publisher.advertize (1, true)
			point_color := create {COLOR_RGBA_MSG}.make_white
			size        := create {VECTOR_3D_MSG}.make_with_values (0.002, 0.002, 0.002)
			life_time   := 100

		end

feature
	update_msg(position : POINT_MSG)

	do
		message_2_send := create {MARKER_MSG}.make_with_values (create {HEADER_MSG}.make_with_values (0, 0, "map"),
		create {POSE_MSG}.make_with_values (
		create{POINT_MSG}.make_with_values (position.x, position.y, position.z)
		, create {QUATERNION_MSG}.make_empty),size,
		point_color,"sph","round",
		1 , 2 , 0, life_time)
	end

	set_color(color : COLOR_RGBA_MSG)
	do
		point_color := color
	end

	set_duration(time_length : REAL_64)
	do
		life_time := time_length
	end

	set_size (length,width,height : REAL_64)
	do
		size := create {VECTOR_3D_MSG}.make_with_values (length, width, height)
	end

feature {NONE}

	point_color : COLOR_RGBA_MSG
	life_time   : REAL_64
	size        : VECTOR_3D_MSG
end
