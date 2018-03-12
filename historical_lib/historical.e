note
	description: "Summary description for {HISTORICAL}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	HISTORICAL[ACTION_TYPE -> ACTION[ANY]]

feature { NONE }
	history:HISTORY[ACTION_TYPE]

feature { NONE }

	make
		do
			init_history
		end

	init_history
		do
			create history.make
		end

feature { ANY }

	do_action(action: ACTION_TYPE)
		do
			action.apply
			if action.clear_history then
				history.clear_all
			else
				if action.remember then
					history.add(action)
				end
			end
		end

	undo_action
		do
			if history.has_past then
				history.pop_past.undo
			end
		end

	redo_action
		do
			if history.has_future then
				history.pop_future.apply
			end
		end

end
