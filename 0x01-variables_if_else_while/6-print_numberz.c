#include <stdio.h>

/**
 * main - main function
 * Description: Program that prints all single digits fro 0 witout using char
 * Return: 0
 */
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
