#include "main.h"

/**
 * print_binary - main entry point
 * Description: print the binary representation of a number
 * @n: number
 */
void print_binary(unsigned long int n)
{
	int i = 0;
	int value = 0;
	unsigned long int temp;

	for (i = 63; i >= 0; i--)
	{
		temp = n >> i;

		if (temp & 1)
		{
			_putchar('1');
			value++;
		}
		else if (temp)
			_putchar('0');
	}
	if (!temp)
		_putchar('0');
}
