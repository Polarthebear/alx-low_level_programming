#include "main.h"

/**
 * print_line - main entry point
 * @n: n variable
 * Description: print straight line in the terminal
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i > 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
