note
	description: "Summary description for {ACTION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	ACTION[TARGET_MODEL]

feature --private
	target: TARGET_MODEL

feature
	set_target(a_target: TARGET_MODEL)
		do target := a_target end

	clear_history:BOOLEAN
		deferred end
	remember: BOOLEAN
		deferred end
	apply
		deferred end
	undo
		deferred end

end
