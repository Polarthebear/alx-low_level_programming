#include "main.h"

/**
 * puts_half - main entry point
 * @str: char to be checked
 * Description: print half a string
 */
void puts_half(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		;

	a++;

	for (a /= 2; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
