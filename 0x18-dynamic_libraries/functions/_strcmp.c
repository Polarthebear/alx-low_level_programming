#include "main.h"

/**
 * _strcmp - Main entry point
 * @s1: String 1
 * @s2: String 2
 * Description: Function that compares two strings
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
