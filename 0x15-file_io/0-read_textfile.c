#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: a pointer pointing to the file
 * @letters: the number of the file the function to read and print
 *
 * Return: if the function fails and filename is NULL -0
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}
