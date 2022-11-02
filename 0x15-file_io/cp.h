#ifndef CP_H
#define CP_H
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
char *read_file(char *filename, size_t size);
int get_file_size(char *filename);
int write_to_file(char *filename, char *buffer);
int _puts(char *buffer);
#endif
