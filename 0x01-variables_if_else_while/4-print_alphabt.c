#include <stdio.h>

/**
 * main - main function
 * Description: Program that prints all lowercase alphabets except e and q
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
			ch++;
		}
	}
	putchar('\n');
	return (0);
}
