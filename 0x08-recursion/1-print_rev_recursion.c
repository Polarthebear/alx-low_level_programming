#include "main.h"

/**
 * _print_rev_recursion - Main entry point
 * @s: string in rev
 * Description: print a string in reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
