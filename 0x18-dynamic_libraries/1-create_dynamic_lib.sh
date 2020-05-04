#!/bin/bash
gcc -fPIC -Wall -pedantic -Werror -Wextra -c *.c
gcc -shared -Wl,-soname,liball.so -o liball.so *.o
