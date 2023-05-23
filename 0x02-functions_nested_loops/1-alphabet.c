#include "main.h"

/**
 * print_alphabet - prints aplhabtes in lowercase
 * Description: Program that prints the alphabet in lowercase
 */
void print_alphabet(void)
{
	char print_alphabet = 'a';

	while (print_alphabet <= 'z')
	{
		_putchar(print_alphabet);
		print_alphabet++;
	}
	_putchar('\n');
}
