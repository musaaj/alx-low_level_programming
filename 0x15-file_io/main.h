#ifndef MAIN_H
#define MAIN_H
#define NOT_READ 0
#define NOT_WRITE 0
#define NEGATIVE -1
#define POSITIVE 1

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

size_t read_textfile(char *filename, size_t size);
size_t _strlen(char *str);
int create_file(const char *filename, char *text_content);
#endif
