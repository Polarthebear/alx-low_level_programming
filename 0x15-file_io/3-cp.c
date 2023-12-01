#include "main.h"
#include <stdlib.h>
#include <stdio.h>

void close(int fd);
char *make_buff(char *file);

/**
 * make_buff - MAin entry point
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
