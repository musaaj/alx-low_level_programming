#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c -FPIC opp.c
gcc -shared -o "100-operations.so" opp.o
