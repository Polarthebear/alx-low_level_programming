#include "main.h"

/**
 * print_binary - main entry point
 * Description: print binary version of a decimal
 * @n: number
 */
void print_binary(unsigned long int n)
{
	int a = 0;
	int num = 0;

	unsigned long int temp;

	for (a = 63; a >= 0; a--)
	{
		temp = n >> a;

		if (temp & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
		{
			_putchar('0');
		}
	}
	if (!num)
	{
		_putchar('0');
	}
}
