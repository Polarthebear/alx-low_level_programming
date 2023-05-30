#include "main.h"
#include <string.h>

/**
 * print_rev - main entry point
 * @s: char to be printed in reverse
 * Description: Function that prints a string in reverse
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	while (*s != '\0')
	{
		len++;
		i++;
	}
	s--;
	for (i = len; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');

}
