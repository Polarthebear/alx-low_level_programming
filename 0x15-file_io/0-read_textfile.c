#include "main.h"


/**
 * read_textfile - main entry point
 * Description: read the text file and print to STDOUT
 * @filename: file being read
 * @letters: letters to be read
 * Return: 0 (Fail) or bytes (Success)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t t, w, fd;
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
