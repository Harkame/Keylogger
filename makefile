MKDIR = mkdir -p
G++ = g++ --pedantic-errors -Wall -Wextra -Werror -Wfatal-errors -O3

mkdir: directory main

directory:
	${MKDIR} ./bin/;

main: keylogger

keylogger:
	${G++} ./src/main.cpp -lws2_32 -o ./bin/main.exe;
