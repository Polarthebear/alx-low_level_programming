#include "main.h"

int _primer(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - Main entry point
 * @s: string
 * Description: Check the string for palindrome
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (_primer(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - Main entry point
 * @s: string
 * Description: Return string length
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * _primer - Main entry point
 * @s: string
 * @i: integer
 * @len: string length
 * Description: recursively checking characters for palindrome
 * Return: 1 if palindrome, 0 if not
 */
int _primer(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (_primer(s, i + 1, len - 1));
}

