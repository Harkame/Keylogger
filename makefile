G++ = g++ -O3 --pedantic-errors -Wall -Wextra -Werror -Wfatal-errors
main: directory keylogger clear

directory:
	rm -rf ./bin/
	mkdir ./bin/

keylogger:
	${G++} ./src/main.cpp -lws2_32 -o ./bin/main.exe;

clear:
	find . -name "*.gch" -type f -delete
