#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: name of file
 * @letters: number of letters read or write
 * Return: number of letters read or write
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd;
	char *buf;
	ssize_t let;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters + 1);
	if (buf == NULL)
		return (0);
	rd = read(fd, buf, letters);
	if (rd == -1)
		return (0);
	buf[letters] = '\0';
	let = write(STDOUT_FILENO, buf, rd);
	if (let == -1)
		return (0);
	close(fd);
	free(buf);
	return (let);
}
