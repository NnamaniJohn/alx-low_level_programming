#include "main.h"

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: name of file
 * @letters: number of letters read or write
 * Return: number of letters read or write
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf[102400];
	ssize_t let;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	read(fd, buf, letters);
	close(fd);
	let = write(STDOUT_FILENO, buf, letters);
	if (let == -1 || let < (ssize_t) letters)
		return (0);
	return (let);
}
