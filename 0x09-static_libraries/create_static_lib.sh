#!/bin/bash
gcc -c -Wall -Werror -wextra -pedantic -std=gnu89 *.c
ar rc liball.a *.o
randlib liball.a
