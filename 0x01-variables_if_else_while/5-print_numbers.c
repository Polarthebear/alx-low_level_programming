#include <stdio.h>

/**
 * main - main function
 * Description: Program that prints all single digit # from 0
 * Followed by a new line
 * Return: 0
 */
int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
