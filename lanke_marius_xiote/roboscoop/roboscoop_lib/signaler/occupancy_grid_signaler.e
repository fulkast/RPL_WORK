note
	description: "2D grid map with occupancy information for each cell."
	author: "Rusakov Andrey"
	date: "18.03.2015"

class
	OCCUPANCY_GRID_SIGNALER

inherit
	OCCUPANCY_GRID_LISTENER
	DOUBLE_MATH
		export
			{NONE} all
		end

create
	make_with_topic

feature {NONE} -- Initilization

	make_with_topic (topic_name: separate STRING)
			-- Create Current.
		do
			create subscriber.make
			create state.make_empty
			subscribe_occupancy_grid (subscriber, Current, topic_name)
		end

feature -- Access

	state: OCCUPANCY_GRID_MSG
			-- Current data.

	occupancy (x_idx, y_idx: INTEGER): INTEGER_8
			-- Occupancy of a cell with coordinates x, y.
		require
			x_idx > 0 and x_idx.to_natural_32 <= state.info.width
			y_idx > 0 and y_idx.to_natural_32 <= state.info.height
		do
			Result := state.data[(y_idx - 1) * state.info.width.to_integer_32 + x_idx]
		end

	update_occupancy_grid (grid: separate OCCUPANCY_GRID_MSG)
			-- Update current state with the message's values.
		do
			create state.make_from_separate (grid)
		end

	inflate (size: REAL_64)
			-- Inflated the grid's obstacle.
		local
			s: ARRAY[INTEGER_8]
			dx, i, j, n, m: INTEGER
			w, h: INTEGER
		do
			w := state.info.width.to_integer_32
			h := state.info.height.to_integer_32

			create s.make_filled (0, 1, state.data.count)
			dx := (size / state.info.resolution - epsilon).ceiling

			from
				i := 1
			until
				i > w
			loop
				from
					j := 1
				until
					j > h
				loop
					if occupancy (i, j) > occupancy_threshold then
						from
							n := 0
						until
							n > dx
						loop
							from
								m := 0
							until
								m > dx
							loop
								if distance (i, j, i + n, j + m) < dx then
									set_occupied (s, i + n, j + m)
									set_occupied (s, i + n, j - m)
									set_occupied (s, i - n, j + m)
									set_occupied (s, i - n, j - m)
								end
								m := m + 1
							end
							n := n + 1
						end
					end
					j := j + 1
				end
				i := i + 1
			end

			from
				i := 1
			until
				i > state.data.count
			loop
				state.data[i] := state.data[i].max (s[i])
				i := i + 1
			end
		end

feature -- Constants

	occupancy_threshold: INTEGER = 50
			-- Occupancy threshold for each cell.

feature {NONE} -- Implementation

	epsilon: REAL_64 = 0.000001
			-- Precision tolerance

	set_occupied (d: like state.data; x_idx, y_idx: INTEGER)
			-- Occupy a cell if its indices are valid.
		do
			if 	is_valid_index (x_idx, y_idx) then
				d[(y_idx - 1) * state.info.width.to_integer_32 + x_idx] := 100
			end
		end

	is_valid_index (x_idx, y_idx: INTEGER): BOOLEAN
			-- Are indices within the grid?
		do
			Result := x_idx > 0 and x_idx.to_natural_32 <= state.info.width and y_idx > 0 and y_idx.to_natural_32 <= state.info.height
		end

	distance (x1_idx, y1_idx, x2_idx, y2_idx: INTEGER): REAL_64
			--
		do
			Result := sqrt (((0).max((x1_idx - x2_idx).abs - 1)).power(2) + ((0).max((y1_idx - y2_idx).abs - 1)).power(2))
		end

	subscriber: separate ROS_SUBSCRIBER [OCCUPANCY_GRID_MSG]
			-- Subscriber object.

	subscribe_occupancy_grid (a_sub: separate ROS_SUBSCRIBER [OCCUPANCY_GRID_MSG];
							a_listener: separate OCCUPANCY_GRID_LISTENER; a_topic: separate STRING)
			-- Subscriber for odometry update.
		do
			a_sub.subscribe (a_topic, agent a_listener.update_occupancy_grid)
		end
end
