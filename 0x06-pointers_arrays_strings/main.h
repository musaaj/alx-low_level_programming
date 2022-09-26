#ifndef MAIN_H
#define MAIN_H
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strlen(char *);
int _strcmp(char *, char *);
void reverse_array(int *, int);
char *string_toupper(char *);
char *cap_string(char *);
int is_seperator(char);
char *leet(char *);
char *replace(char *dest, char *chk, char rplc);
#endif
