#include "main.h"
#include <stdio.h>

/**
 * main - main entry point
 * Description: Program that prints the alphabet in lowercase
 * Return: Always 0
 */
int main(void)
{
	char print_alphabet = 'a';

	while (print_alphabet <= 'z')
	{
		putchar(print_alphabet);
		print_alphabet++;
	}
	return (0);
}
