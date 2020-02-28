G++ = g++
OPTIONS = -std=c++17 -O3 -W -Wall -Weffc++ -Werror -pedantic

main: keylogger

keylogger:
	${G++} ${OPTIONS} ./src/main.cpp -lws2_32 -o main.exe
