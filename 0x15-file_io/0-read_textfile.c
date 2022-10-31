#include "main.h"
#include "strlen.c"
/**
 * read_textfile - read and print content of a text file to stdout
 * @filename: name of file to read from
 * @size: number of char to read
 * Return: number of char read or 0 if it fail
 */
size_t read_textfile(char *filename, size_t size)
{
	int success, file_no;
	size_t file_size;
	char *buffer;

	if (filename == NULL)
		return (NOT_READ);
	buffer = malloc(sizeof(char) * size);
	if (!buffer)
		return (NOT_READ);
	file_no = open(filename, O_RDONLY);
	if (file_no < NOT_READ)
	{
		free(buffer);
		close(file_no);
		return (NOT_READ);
	}
	success = read(file_no, buffer, size);
	if (success < NOT_READ)
	{
		free(buffer);
		close(file_no);
		return (NOT_READ);
	}
	file_size = _strlen(buffer);
	if (file_size < size)
		size = file_size;
	success = write(STDIN_FILENO, buffer, size);
	if (success < NOT_WRITE)
	{
		free(buffer);
		close(file_no);
		return (NOT_WRITE);
	}
	free(buffer);
	close(file_no);
	return (success);
}
