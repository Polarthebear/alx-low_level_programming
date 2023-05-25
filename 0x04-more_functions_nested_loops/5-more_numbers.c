#include "main.h"

/**
 * more_numbers - main entry point
 * Description: Function that prints 0 to 14 10 times
 */
void more_numbers(void)
{
	long int times = '0';

	while (times <= '10')
	{
		long int digit = '0';

		while (digit <= '14')
		{
			_putchar(digit);
			digit++;
		}
	_putchar(times);
	times++;
	}
	_putchar('\n');
}
