#include "main.h"

/**
 * print_rev - main entry point
 * @s: char to be printed in reverse
 * Description: Function that prints a string in reverse
 */
void print_rev(char *s)
{
	int i;
	int len = *s;

	for (i = len; i > 0; i++)
	{
		while (*s != '\0')
		{
			_putchar(*s++);
		}
		_putchar('\n');
	}
}
