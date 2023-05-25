#include "main.h"

/**
 * more_numbers - main entry point
 * Description: Function that prints 0 to 14 10 times
 */
void more_numbers(void)
{
	int times, digit;

	int times = '0';

	while (times < '10')
	{
		int digit = '0';

		while (digit < '15')
		{
			_putchar(digit);
			digit++;
		}
	_putchar(times);
	times++;
	}
	_putchar('\n');
}
