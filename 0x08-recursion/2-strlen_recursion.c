#include "main.h"

/**
 * _strlen_recursion - Main entry point
 * @s: string
 * Description: Return the length of a string
 * Return: i
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;

	if (*s)
	{
		i++;
		i = _strlen_recursion(s + 1);
	}
		return (i);
}
