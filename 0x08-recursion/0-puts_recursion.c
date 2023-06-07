#include "main.h"

/**
 * _puts_recursion - Main entry point
 * @s: Recursive char
 * Description: Function that prints a string
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(+s);
	}
}
