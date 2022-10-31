#include "main.h"

/**
 * append_text_to_file - function that creates a file
 * @filename: name of file
 * @text_content: context of file
 * Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	while (text_content[len])
		len++;
	write(fd, text_content, len + 1);
	close(fd);

	return (1);
}
