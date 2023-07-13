#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Main entry point
 * @filename: name of file being read
 * @letters: number of letters
 * Return: if NULL/fail (0)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t a;
	ssize_t t;
	char *buffer;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) *letters);
	t = read(fd, buffer, letters);
	a = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fd);
	return (a);
}
