note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_NEW_GAME
inherit
	ETF_NEW_GAME_INTERFACE
		redefine new_game end
create
	make
feature -- command
	new_game(player1: STRING ; player2: STRING)
		require else
			new_game_precond(player1, player2)
    	do
			model.do_action(create {NEW_GAME_ACTION}.make(model, player1, player2))
			etf_cmd_container.on_change.notify ([Current])
    	end

end
