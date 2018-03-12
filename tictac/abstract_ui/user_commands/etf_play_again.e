note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_PLAY_AGAIN
inherit
	ETF_PLAY_AGAIN_INTERFACE
		redefine play_again end
create
	make
feature -- command
	play_again
    	do
			model.do_action(create {PLAY_AGAIN_ACTION}.make(model))
			etf_cmd_container.on_change.notify ([Current])
    	end

end
