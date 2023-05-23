#include "main.h"

/**
 * print_sign - main entry point
 * @n: char will be checked
 * Description: Function that prints sign of a number
 * Return: 1 if +, 0 if =0, -1 if <0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n != 0 && n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
