#include "main.h"

/**
 * _puts - main entry point
 * @str: string to be printed out
 * Description: Function that prints a string to stdout
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
