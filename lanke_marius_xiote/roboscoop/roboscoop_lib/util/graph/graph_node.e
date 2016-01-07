note
	description : "Node of the graph."
	author		: "Rusakov Andrey"
	date        : "04.02.2015"

class
	GRAPH_NODE

create
	make

feature {NONE} -- Initialization

	make
			-- Create with no neighbours.
		do
			create {ARRAYED_LIST[like Current]}neighbours.make(0)
		end

feature -- Access

	neighbours: LIST[like Current]
			-- Nodes connected with Current.

	is_connected (n: like Current): BOOLEAN
			-- Is `another' connected with Current.
		do
			Result := neighbours.has (n) and n.neighbours.has (Current)
		end

	connect (n: like Current)
			-- Add `n' to neighbours of Current if not present.
		do
			if  not neighbours.has (n) then
				neighbours.extend (n)
			end
			if not n.neighbours.has (Current) then
				n.neighbours.extend (Current)
			end
		end

	disconnect (n: like Current)
			-- Remove `n' from neighbours of Current if present.
		do
			if  neighbours.has (n) then
				neighbours.start
				neighbours.prune (n)
			end
			if  n.neighbours.has (Current) then
				n.neighbours.start
				n.neighbours.prune (Current)
			end
		end

	disconnect_all_neighbours
			-- Remove all the neighbours of Current.
		do
			from
				neighbours.start
			until
				neighbours.after
			loop
				disconnect (neighbours.item)
			end
		end
end
