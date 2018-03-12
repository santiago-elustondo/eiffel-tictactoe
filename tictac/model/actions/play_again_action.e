note
	description: "Summary description for {PLAY_ACTION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PLAY_AGAIN_ACTION

inherit
	TICTACTOE_ACTION

create
	make

feature { ANY } -- constructors (actions are instantiated by clients)

	make(a_target: TICTACTOE)
		do
			set_target(a_target)
		end

feature { HISTORICAL } -- commands

	clear_history: BOOLEAN = true

	apply
		do
			target.new_round
		end

	undo
		do end

end
