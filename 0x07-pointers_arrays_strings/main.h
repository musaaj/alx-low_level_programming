#ifndef MAIN_H
#define MAIN_H
#define NULL ((void *) 0)

#include "0-memset.c"
#include "1-memcpy.c"
#include "2-strchr.c"
#include "3-strspn.c"
#include "4-strpbrk.c"

char *_memset(char *, int, unsigned int);
char *_memcpy(char *, char *, unsigned int);
char *_strchr(char *, char);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);

#endif
