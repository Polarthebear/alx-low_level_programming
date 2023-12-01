#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Main entry point
 * Description: Read text file to STDOUT
 * @filename: name of text file
 * @letters: number of letters
 * Return: number of bytes (Success) or 0 (Fail)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t t;
	ssize_t w;
	ssize_t fd;
	char *buff;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	t = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, t);

	free(buff);
	close(fd);
	return (w);
}
