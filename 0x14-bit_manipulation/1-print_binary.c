#include "main.h"

/**
 * print_binary - print the binary version of a decimal
 * @n: number being printed
 */
void print_binary(unsigned long int n)
{
	unsigned long int now;
	int i, c = 0;

	for (i = 63; i >= 0; i--)
	{
		now = n >> i;


		if (now & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
		{
			_putchar('0');
		}
	}
	if (!c)
	{
		_putchar('0');
	}
}
