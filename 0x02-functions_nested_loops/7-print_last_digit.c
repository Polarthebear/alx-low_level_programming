#include "main.h"

/**
 * print_last_digit - print the last digit number
 * @n: char to be checked
 * Description: Function to print the last digit of a number
 * Return: 0
 */
int print_last_digit(int n)
{
	int m;

	if (n < 0)
	{
		m = -1 * (n % 10);
		_putchar(m + '0');
		return (m);
	}
	else if (n > 0)
	{
		m = n % 10;
		_putchar(m + '0');
		return (m);
	}
}
