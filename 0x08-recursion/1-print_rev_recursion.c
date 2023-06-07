#include "main.h"

/**
 * _print_rev_recursion - Main entry point
 * @s: string in rev
 * Description: print a string in reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(*s);
		_print_rev_recursion(--s);
	}
}