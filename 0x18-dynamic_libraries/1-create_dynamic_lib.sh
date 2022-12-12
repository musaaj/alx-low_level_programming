#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c -FPIC *.c
gcc -shared -o liball.so *.o
rm *.o
