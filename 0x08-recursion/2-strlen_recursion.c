#include "main.h"

/**
 * _strlen_recursion - Main entry point
 * @s: string
 * Description: Return the length of a string
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;

	if (*s != '\0')
	{
		_strlen_recursion(++s);
		i++;
	}
	else
		return (1);
}
