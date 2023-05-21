#include <stdio.h>

/**
 * main - Entry point
 * Description: Program that prints all single digits followed by a , and space
 * Return: 0
 */
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
