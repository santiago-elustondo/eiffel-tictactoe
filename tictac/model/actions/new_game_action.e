note
	description: "Summary description for {NEW_GAME_ACTION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	NEW_GAME_ACTION

inherit
	TICTACTOE_ACTION

create
	make

feature { NONE } -- props

	x_name: STRING
	o_name: STRING


feature { ANY } -- constructors (actions are instantiated by clients)

	make(a_target: TICTACTOE; a_x_name: STRING; a_o_name: STRING)
		do
			set_target(a_target)
			x_name := a_x_name
			o_name := a_o_name
		end

feature { HISTORICAL } -- commands

	clear_history: BOOLEAN = true

	apply
		do
			target.new_game(x_name, o_name)
		end

	undo
		do	end

end
