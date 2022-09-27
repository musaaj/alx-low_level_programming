#ifndef MAIN_H
#define MAIN_H
#define NULL ((char *) 0)

#include "0-memset.c"
#include "1-memcpy.c"
#include "2-strchr.c"

char *_memset(char *, int, unsigned int);
char *_memcpy(char *, char *, unsigned int);
char *_strchr(char *, char);
int _strlen(char *s);

#endif
