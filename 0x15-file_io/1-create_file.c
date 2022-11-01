#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of file
 * @text_content: context of file
 * Return: int
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 600);
	if (fd == -1)
		return (-1);
	while (text_content[len])
		len++;
	if (text_content)
	{
		write(fd, text_content, len);
	}
	else
	{
		close(fd);
		return (-1);
	}
	close(fd);

	return (1);
}
