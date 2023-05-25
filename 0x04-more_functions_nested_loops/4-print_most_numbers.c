#include "main.h"

/**
 * print_most_numbers - main entry point
 * Description: Function printing all single digits except 2 and 4
 */
void print_most_numbers(void)
{
	int digit = '0';

	while (digit <= '9')
	{
		if (digit != '2' && digit != '4')
		{
			_putchar(digit);
		}
		digit++;
	}
	_putchar('\n');
}
