#include "main.h"
#include <string.h>
/**
 * append_text_to_file - appends text content to file
 * @filename: file name
 * @text_content: NULL terminator byte
 * Return: 1 (Success) else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len;
	char *emp = "";

	len = strlen(text_content);
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL && text_content != emp)
		write(fd, text_content, len);
	return (1);
}
