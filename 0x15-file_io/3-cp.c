#include "cp.h"
#include "strlen.c"

/**
 * main - main entry of our program
 * @argc: number of command line agurment passed
 * @argv: array of command line argument passed
 * Return: 0 on success else any positive error number
 */
int main(int argc, char *argv[])
{
	char *buffer;
	int size;

	if (argc != 3)
	{
		_puts("Usage: cp file_from file_to\n");
		exit(97);
	}
	size = get_file_size(argv[1]);
	buffer = read_file(argv[1], size);
	if (buffer == NULL)
	{
		_puts("Error: can't read from file ");
		_puts(argv[1]);
		_puts("\n");
		exit(98);

	}
	write_to_file(argv[2], buffer);
	free(buffer);
	return (0);
}

/**
 * read_file - read contents of a file into a buffer
 * @filename: name of the file to read from
 * @size: number of bytes to read
 * Return: 0 on success else nagative error number
 */
char *read_file(char *filename, size_t size)
{
	int file_no, success;
	char *buffer;

	if (filename == NULL)
		return (NULL);
	buffer = malloc(sizeof(char) * size);
	if (buffer == NULL)
		return (NULL);
	file_no = open(filename, O_RDONLY);
	if (file_no < 0)
	{
		free(buffer);
		return (NULL);
	}
	success = read(file_no, buffer, size);
	if (success < 0)
	{
		free(buffer);
		close(file_no);
		return (NULL);
	}
	success = close(file_no);
	if (success < 0)
	{
		free(buffer);
		return (NULL);
	}
	else
	{
		return (buffer);
	}
}

/**
 * get_file_size - get size of a file in bytes
 * @filename: name of file to get size of
 * Return: size of @filename in bytes on success else -1
 */
int get_file_size(char *filename)
{
	int file_no, success;
	struct stat file_info;

	if (filename == NULL)
		return (-1);
	file_no = open(filename, O_RDONLY);
	if (file_no < 0)
		return (-1);
	success = fstat(file_no, &file_info);
	if (success < 0)
	{
		close(file_no);
		return (-1);
	}
	return (file_info.st_size);
}

/**
 * write_to_file - overwrite a given file with new data
 * @filename: name of file to overwrite
 * @buffer: data to write to @filename
 * Return: number of bytes writen on success else -1
 */
int write_to_file(char *filename, char *buffer)
{
	int file_no, success, size;
	char pad;

	if ((filename == NULL) || (buffer == NULL))
		exit(98);
	file_no = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_no < 0)
	{
		_puts("Error: can't write file ");
		_puts(filename);
		_puts("\n");	
		exit(99);
	}
	size = _strlen(buffer);
	success = write(file_no, buffer, size);
	if (success < 0)
	{
		_puts("Error: can't write file ");
		_puts(filename);
		_puts("\n");	
		exit(99);
	}
	success = close(file_no);
	if (success < 0)
	{
		pad = (char) (file_no + 48);
		_puts("Error: can't close fd ");
		_puts(&pad);
		_puts("\n");
		exit(100);
	}
	return (size);
}

/**
 * _puts - print string to stdout
 * @buffer: string to print
 * Return: number of char printed on success else -1;
 */
int _puts(char *buffer)
{
	int size, success;
	
	if (buffer == NULL)
		return (-1);
	size = _strlen(buffer);
	success = write(STDERR_FILENO, buffer, size);
	if (success < 0)
		return (-1);
	return (success);
}
