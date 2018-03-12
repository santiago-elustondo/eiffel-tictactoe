note
	description: "Summary description for {TICTACTOE_GAME}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TICTACTOE

inherit
	HISTORICAL[TICTACTOE_ACTION]
		redefine out, make end
	ETF_MODEL
		redefine out end

create
	make

feature { NONE } --constants
	BLANK_CHAR: CHARACTER = '_';
	X_CHAR: CHARACTER = 'X';
	O_CHAR: CHARACTER = 'O';

feature { NONE } --user messages
	msg_err_ok: STRING = "ok"
	msg_err_no_such_player: STRING = "no such player"
	msg_err_wrong_turn: STRING = "not this player's turn"
	msg_err_taken: STRING = "button already taken"
	msg_err_winner: STRING = "there is a winner"
	msg_err_same_name: STRING = "names of players must be different"
	msg_err_first_char: STRING = "name must start with A-Z or a-z"
	msg_err_finished: STRING = "game is finished"
	msg_err_not_finished: STRING = "finish this game first"
	msg_inst_start: STRING = "start new game"
	msg_inst_play_again: STRING = "play again or start new game"
	msg_inst_plays_next(c:CHARACTER): STRING
		require char_is_valid: is_player_char(c)
		do Result := name_for_char(c) + " plays next" end

feature { NONE } --state
	x_name: STRING;
	o_name: STRING;
	x_score: INTEGER;
	o_score: INTEGER;
	current_turn: CHARACTER;
	board: ARRAY[CHARACTER];
	err_msg: STRING;

feature { ANY } --constructors

	make
		do
			Precursor
			waiting_state
		end

feature { ACTION } --mutators (should be made available as ACTIONs)

	waiting_state
		do
			x_name := ""
			o_name := ""
			x_score := 0
			o_score := 0
			clear_board
			new_round(false)
			clear_err
		end

	new_game(a_x_name: STRING; a_o_name: STRING)
		do
			if a_x_name ~ a_o_name then
				set_err(msg_err_same_name)
			elseif not a_x_name.at(1).is_alpha or not a_o_name.at(1).is_alpha then
				set_err(msg_err_first_char)
			else
				x_name := a_x_name
				o_name := a_o_name
				x_score := 0
				o_score := 0
				new_round(false)
			end
		end

	new_round(ensure_round_finished:BOOLEAN)
		do
			if ensure_round_finished and round_is_in_progress then
				set_err(msg_err_not_finished)
			else
				clear_board
				current_turn := who_starts
				clear_err
			end
		end

	try_move (name: STRING; position: INTEGER)
		do
			if not round_is_in_progress then
				set_err(msg_err_finished)
			elseif not is_player_name(name) then
				set_err(msg_err_no_such_player)
			elseif char_for_name(name) /= current_turn then
				set_err(msg_err_wrong_turn)
			elseif board[position] /= BLANK_CHAR then
				set_err(msg_err_taken)
			else
				board[position] := char_for_name(name)
				clear_err
				if is_winner(char_for_name(name)) then
					increment_score(char_for_name(name))
					set_err(msg_err_winner)
				end
				switch_turn
				--save_state
			end
		end

	clear_position(a_position: INTEGER)
		do
			board[a_position] := BLANK_CHAR
		end

	switch_turn
		do
			if current_turn = X_CHAR then
				current_turn := O_CHAR
			else
				current_turn := X_CHAR
			end
		end

	increment_score (c:CHARACTER)
		require
			char_is_valid: is_player_char(c)
		do
			if c = X_CHAR then
				x_score := x_score + 1
			else
				o_score := o_score + 1
			end
		end

	clear_board
		do
			board := create {ARRAY[CHARACTER]}.make_filled (BLANK_CHAR, 1, 9)
		end

	set_err (msg: STRING)
		do
			err_msg := msg
		end

	clear_err
		do
			err_msg := msg_err_ok
		end

feature { ACTION } --queries

	get_err_msg: STRING
		do
			Result := err_msg
		end

	in_play: BOOLEAN
		do
			Result := round_is_in_progress
		end

	who_starts: CHARACTER
		local
			num_rounds_played: INTEGER
			half_of_rounds_played: REAL_64
			even_num_of_rounds_played: BOOLEAN
		do
			num_rounds_played
				:= x_score + o_score
			half_of_rounds_played
				:= num_rounds_played / 2
			even_num_of_rounds_played
				:= half_of_rounds_played.floor * 2 = num_rounds_played
			if even_num_of_rounds_played  then
				Result := X_CHAR
			else
				Result := O_CHAR
			end
		end

	is_winner (c: CHARACTER): BOOLEAN
		require
			char_is_valid: is_player_char(c)
		local
			hor_1st_row: BOOLEAN
			hor_2nd_row: BOOLEAN
			hor_3rd_row: BOOLEAN
			vert_1st_col: BOOLEAN
			vert_2st_col: BOOLEAN
			vert_3st_col: BOOLEAN
			diag_ne_sw: BOOLEAN
			diag_se_nw: BOOLEAN
		do
			hor_1st_row := board[1] = c and board[2] = c and board [3] = c
			hor_2nd_row := board[4] = c and board[5] = c and board [6] = c
			hor_3rd_row := board[7] = c and board[8] = c and board [9] = c
			vert_1st_col:= board[1] = c and board[4] = c and board [7] = c
			vert_2st_col:= board[2] = c and board[5] = c and board [8] = c
			vert_3st_col:= board[3] = c and board[6] = c and board [9] = c
			diag_ne_sw  := board[1] = c and board[5] = c and board [9] = c
			diag_se_nw  := board[7] = c and board[5] = c and board [3] = c
			Result := hor_1st_row or hor_2nd_row or hor_3rd_row or
					  vert_1st_col or vert_2st_col or vert_3st_col or
					  diag_ne_sw or diag_se_nw
		end

	no_error: BOOLEAN
		do
			Result := err_msg ~ msg_err_ok
		end

	winner_exists: BOOLEAN
		do
			Result := is_winner(X_CHAR) or is_winner(O_CHAR)
		end

	players_exist: BOOLEAN
		do
			Result := not x_name.is_empty and not o_name.is_empty
		end

	is_player_char(c: CHARACTER): BOOLEAN
		do
			Result := c = X_CHAR or c = O_CHAR
		end

	round_is_in_progress: BOOLEAN
		do
			Result := players_exist and not winner_exists
		end

	name_for_char (c: CHARACTER): STRING
		require
			char_is_valid: is_player_char(c)
		do
			if c = X_CHAR then Result := x_name
			else Result := o_name end
		end

	is_player_name (name: STRING): BOOLEAN
		do
			Result := x_name ~ name or o_name ~ name
		end

	char_for_name (name: STRING): CHARACTER
		require
			name_exists: is_player_name(name)
		do
			if x_name ~ name then
				Result := X_CHAR
			else
				Result := O_CHAR
			end
		end

	next_instruction: STRING
		do
			if not players_exist then
				Result := msg_inst_start
			elseif not winner_exists then
				Result := msg_inst_plays_next (current_turn)
			else
				Result := msg_inst_play_again
			end
		end

	board_as_string: STRING
		local
			row_1st: STRING
			row_2nd: STRING
			row_3rd: STRING
		do
			row_1st := board[1].out + board[2].out + board[3].out
			row_2nd := board[4].out + board[5].out + board[6].out
			row_3rd := board[7].out + board[8].out + board[9].out
			Result := "  " + row_1st + "%N" +
					  "  " + row_2nd + "%N" +
					  "  " + row_3rd + "%N"
		end

feature { ANY } -- output {ETF_MODEL}

	out: STRING
		local
			double_space_before_arrow: BOOLEAN
		do
			double_space_before_arrow := next_instruction ~ msg_inst_start
			create Result.make_empty
			Result.append("  " + err_msg)
			if double_space_before_arrow then
				Result.append(":  => ")
			else
				Result.append(": => ")
			end
			Result.append(next_instruction + "%N")
			Result.append(board_as_string)
			Result.append("  " + x_score.out + ": score for %"" + x_name +"%" (as X)" + "%N")
			Result.append("  " + o_score.out + ": score for %"" + o_name +"%" (as O)" + "")
		end
end
