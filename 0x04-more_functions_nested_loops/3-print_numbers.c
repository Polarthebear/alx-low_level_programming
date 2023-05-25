#include "main.h"

/**
 * print_numbers - main entry point
 * Description: function that prints numbers from 0 to 9
 */
void print_numbers(void)
{
	int digit = '0';

	while (digit <= '9')
	{
		_putchar(digit);
		digit++;
	}
	_putchar('\n');
}
