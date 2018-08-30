G++ = g++ -O3 --pedantic-errors -Wall -Wextra -Werror -Wfatal-errors
main: directory keylogger

directory:
	if not exist bin mkdir bin


keylogger:
	${G++} ./src/main.cpp -lws2_32 -o ./bin/main.exe;
