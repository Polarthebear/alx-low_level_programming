#include <stdio.h>

/**
 * main - main fuunction
 * Description: Program prints the alphabet in lowercase then '\n'
 * Return: 0
 */
int main(void)
{

	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
