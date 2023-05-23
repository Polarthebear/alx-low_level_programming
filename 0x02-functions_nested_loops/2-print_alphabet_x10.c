#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabets 10 times
 * Description: Program that prints lowercase alphabets 10 times
 */
void print_alphabet_x10(void)
{
	int i = 0;
		while (i <= 10)
		{
			char print_alphabet = 'a';

			while (print_alphabet <= 'z')
			{
				_putchar(print_alphabet);
				print_alphabet++;
			}
			_putchar('\n');
			i++;
		}
}
