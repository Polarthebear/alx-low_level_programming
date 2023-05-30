#include "main.h"

/**
 * _strlen - main entry point
 * @s: string to be checked
 * Description: Function that checks the length of a string
 * Return: _strlen
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
