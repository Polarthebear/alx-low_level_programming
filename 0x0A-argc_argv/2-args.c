#include "main.h"
#include <stdio.h>

/**
 * main - main entry point
 * @argc: command line argument
 * @argv: argument vector
 * Description: Print all the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
