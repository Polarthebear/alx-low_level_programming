#include "main.h"

/**
 * rev_string - Main entry point
 * @s: string to be reversed
 * Description: Function that reverses a string
 */
void rev_string(char *s)
{
	char temp;

	int a, len, leng;

	len = 0;

	leng = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	leng = len - 1;

	for (a = 0; a < len / 2; a++)
	{
		temp = s[a];
		s[a] = s[leng];
		s[leng--] = temp;
	}
}
