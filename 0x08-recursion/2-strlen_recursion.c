#include "main.h"

/**
 * _strlen_recursion - Main entry point
 * @s: string
 * Description: Return the length of a string
 * Return: i
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
