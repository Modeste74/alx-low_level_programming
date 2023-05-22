#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -fPIC *.c
gcc -shared -o liball.so *.o
