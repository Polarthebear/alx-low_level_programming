#include "main.h"

/**
 * more_numbers - main entry point
 * Description: prints 0 to 14, 10 times
 */
void more_numbers(void)
{
	int t, d;

	for (t = 0; t < 10; t++)
	{
		for (d = 0; d <= 14 ; d++)
		{
			if (d >= 10)
				_putchar(d / 10 + '0');
			_putchar(d % 10 + '0');
		}
		_putchar('\n');
	}
}
