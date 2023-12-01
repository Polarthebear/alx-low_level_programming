#include "main.h"
#include <stdlib.h>
#include <stdio.h>

void close(int fd);
char *make_buff(char *file);

/**
 * make_buffer - Main entry point
 * Description: allocate bytes (1024) for buffer
 * @file: name of buffer
 * Return: pointer to allocated buffer
 */
char *make_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buff);
}

/**
 * close - Main entry point
 * @fd: file descriptor that must be closed
 */
void close(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 * main - Main entry point
 * Description: Copies from one file to another
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int w, r, to, from;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = make_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		w = write(to, buff, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		r = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	free(buff);
	close(from);
	close(to);

	return (0);
}
