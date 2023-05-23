#include "main.h"

/**
 * main - main entry point
 * print_alphabet: Program that prints the alphabet in lowercase
 * Return: Always 0
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
