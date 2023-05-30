#include "main.h"

/**
 * puts2 - main entry point
 * @str: string to be checked
 * Description: Print every other character
 */
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
			_putchar(str[a]);
	}
	_putchar('\n');
}
