note
	description: "Calculation class in local frame."
	author: "Xiaote Zhu"

class
	RELATIVE_SPACE_CALCULATIONS

inherit
	TRIGONOMETRY_MATH

feature -- Access

	get_relative_coordinates (distance, angle: REAL_64): POINT_MSG
			-- Calculate the relative coordinate of a point given its distance to (0, 0) and the angle.
		local
			relative_coord: POINT_MSG
		do
			-- Transform using Rotation Matrix Formulation
			create relative_coord.make_with_values(distance * cosine(angle), distance * sine (angle), 0)
			Result := relative_coord
		end

	convert_relative_coordinates_to_absolute_coordinates (p0, p1: POINT_MSG; theta: REAL_64): POINT_MSG
			-- Calculate the absolute coordinates given p0, the absoluate coordinates of (0, 0), p1, the relative coordinates,
			-- and theta, the angle between the x-axis of the absolute frame and the x-axis of the relative frame.
		local
			absolute_coord: POINT_MSG
		do
			create absolute_coord.make_with_values (p0.x + p1.x * cosine (theta) - p1.y * sine (theta),
														p0.y + p1.x * sine (theta) + p1.y * cosine (theta), 0)
			Result := absolute_coord
		end

	convert_angle_to_range (theta: REAL_64): REAL_64
			-- Convert the angle to the equivalent angle between -pi and pi.
		do
			Result := atan2(sine(theta),cosine(theta))
		end

	calculate_angle_diff (theta1, theta2: REAL_64): REAL_64
			-- Calculate the difference between two angles.
		do
			Result := (convert_angle_to_range (theta2 - theta1)).abs
		end

	get_distance_to_line (p1, p2: POINT_MSG): REAL_64
			-- Calculate the distance from (0,0) to the line represented by the given two points.
		do
			Result := (((p2.y - p1.y) * p1.x - (p2.x - p1.x) * p1.y) / sqrt ((p2.x - p1.x).power(2) + (p2.y - p1.y).power(2))).abs
		end

	get_heading_to_follow_line (p1, p2: POINT_MSG; current_distance, desired_distance: REAL_64): REAL_64
			-- Calculate the heading to maintain a desired distance from the line given by p1, p2.
		local
			v_theta_x, v_theta_y: REAL_64
		do
			v_theta_x := desired_distance * (p2.x - p1.x) + (current_distance - desired_distance) * (p2.y - p1.y)
			v_theta_y := desired_distance * (p2.y - p1.y) + (current_distance - desired_distance) * (p1.x - p2.x)
			Result := atan2 (v_theta_y, v_theta_x)
		end

	get_heading_vector(p1,p2 : POINT_MSG) : POINT_MSG
			-- Generate a difference vector heading from p1 to p2 in the form of a point msg from two point msgs.
		do
			Result := create {POINT_MSG}.make_with_values (p2.x-p1.x, p2.y-p1.y, p2.z-p1.z)
		end

	to_local_coordinates2D(global_vector : POINT_MSG; current_orientation_yaw_angle : REAL_64 ) : POINT_MSG
			-- Translate a global vector into the local coordinate frame defined by current_orientation_yaw_angle
			local
				local_coord: POINT_MSG
				yaw : REAL_64
			do
				yaw := current_orientation_yaw_angle
				create local_coord.make_with_values (global_vector.x * cosine (-yaw) - global_vector.y * sine (-yaw),
													 global_vector.x * sine (-yaw) + global_vector.y * cosine (-yaw),
														 0.0)
				Result := local_coord
			end

	get_dot_product(p1,p2 : POINT_MSG) : REAL_64
			-- Find the dot product between two point msg types
		do
			Result := p1.x+p2.x+p1.y+p2.y+p1.z+p2.z
		end

end -- class
