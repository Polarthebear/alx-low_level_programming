#include "main.h"

/**
 * _strpbrk - Main entry point
 * @s: char
 * @accept: char pointer
 * Description: Search for string in a set of bytes
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
}
