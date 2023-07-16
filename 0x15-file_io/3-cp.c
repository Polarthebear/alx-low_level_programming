#include "main.h"
#include <stdlib.h>
#include <stdio.h>

void closes(int fd);
char *create(char *file);

/**
 * create - Main entry point
 * @file: name ofbuffer file
 * Description: distribute 1024 bytes
 * Return: pointer to new buffer
 */
char *create(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close - main entry point
 * @fd: file descriptor
 * Description: close the descriptors
 */
void closes(int fd)
{
	int clos;

	clos = close(fd);

	if (clos == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - main entry point
 * Description: copy contents from one file to another
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Success(0)
 */
int main(int argc, char *argv[])
{
	int rd, wr, fr, t;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create(argv[2]);
	fr = open(argv[1], O_RDONLY);
	rd = read(fr, buffer, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fr == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wr = write(t, buffer, rd);
		if (t == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		rd = read(fr, buffer, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);

	free(buffer);
	closes(fr);
	closes(t);

	return (0);
}
