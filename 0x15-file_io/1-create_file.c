#include "main.h"
#include "strlen.c"
/**
 * create_file - create a new file and write contents into it
 * @filename: name of the file to be created
 * @text_content: text to write int o file @filename
 * Return: 1 on success else -1
 */
int create_file(const char *filename, char *text_content)
{
	int file_no, success;
	size_t size;

	if (filename == NULL)
		return (NEGATIVE);
	file_no = open(filename, O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (file_no <= NEGATIVE)
	{
		close(file_no);
		return (NEGATIVE);
	}
	if (text_content == NULL)
	{
		close(file_no);
		return (POSITIVE);
	}
	size = _strlen(text_content);
	success = write(file_no, text_content, size);
	if (success <= NEGATIVE)
	{
		close(file_no);
		return (NEGATIVE);
	}
	close(file_no);
	return (POSITIVE);
}
