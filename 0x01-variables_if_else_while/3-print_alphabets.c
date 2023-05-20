#include <stdio.h>

/**
 * main - main function
 * Description: prints alphabets in lowercase then uppercase then \n
 * Return: 0
 */
int main(void)
{
	char ch = 'a';
	char c = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
