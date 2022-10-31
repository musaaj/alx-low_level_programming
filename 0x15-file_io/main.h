#ifndef MAIN_H
#define MAIN_H
#define NOT_READ 0
#define NOT_WRITE 0

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

size_t read_textfile(char *filename, size_t size);
#endif
