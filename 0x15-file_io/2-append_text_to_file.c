#include "main.h"
#include "strlen.c"
/**
 * append_text_to_file - append text to a file
 * @filename: name of file to append to
 * @text_content: text to append to file named @filename
 * Return: 1 on success else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_no, success;
	size_t size;

	if (filename == NULL)
		return (NEGATIVE);
	if (text_content == NULL)
		return (POSITIVE);
	file_no = open(filename, O_APPEND);
	if (file_no <= NEGATIVE)
		return (NEGATIVE);
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
