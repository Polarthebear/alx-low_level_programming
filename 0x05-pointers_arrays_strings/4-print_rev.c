#include "main.h"
#include <string.h>

/**
 * print_rev - main entry point
 * @s: char to be printed in reverse
 * Description: Function that prints a string in reverse
 */
void print_rev(char *s)
{
	int a, b, leng;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	leng = a;

	for (b = leng - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}

	_putchar('\n');
}
