note
	description: "Summary description for {PLAY_ACTION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PLAY_ACTION

inherit
	TICTACTOE_ACTION

create
	make

feature { NONE } -- props

	player_name: STRING
	position: INTEGER

feature { NONE } -- state

	action_failed: BOOLEAN

feature { ANY } -- constructors (actions are instantiated by clients)

	make(a_target: TICTACTOE; a_player_name: STRING; a_position: INTEGER)
		do
			set_target(a_target)
			player_name := a_player_name
			position := a_position
		end

feature { HISTORICAL } -- commands

	clear_history: BOOLEAN
		do
			Result := not target.round_is_in_progress
		end

	remember: BOOLEAN = true

	apply
		do
			target.try_move(player_name, position)
			action_failed := target.no_error
		end

	undo
		do
			if action_failed then
				target.clear_position(position)
				target.switch_turn
			end
			target.clear_err
		end

end
