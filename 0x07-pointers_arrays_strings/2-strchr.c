#include "main.h"

/**
 * _strchr - main entry point
 * @s - char to be checked
 * @c - char to be located
 * Description: Function that locates a char in a string
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
