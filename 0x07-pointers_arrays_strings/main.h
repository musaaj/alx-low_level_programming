#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include "0-memset.c"
#include "1-memcpy.c"
#include "2-strchr.c"
#include "strlen.c"

char *_memset(char *, int, unsigned int n);
char *_memcpy(char *, char *, unsigned int);
char _strchr(char *, char);
unsigned int _strlen(char *);

#endif
