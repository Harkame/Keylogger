MKDIR = mkdir -p

mkdir: directory main

directory:
	${MKDIR} ./bin/;

main: keylogger

keylogger:
	g++ ./src/main.cpp -lws2_32 -o ./bin/main.exe;
