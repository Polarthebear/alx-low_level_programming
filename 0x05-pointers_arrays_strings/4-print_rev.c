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

	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	leng = i;

	for (b = leng - 1; b >= 0; b--)
	{
	_putchar(s[b]);
	}

	_putchar('\n');
}
