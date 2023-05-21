#include <stdio.h>

/**
 * main - Entry point for main function
 * Description: Program that prints all base 16 numbers in lowercase
 * Return: 0
 */
int main(void)
{
	int num = '0';
	char ch = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
