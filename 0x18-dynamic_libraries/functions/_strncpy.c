#include "main.h"

/**
 * _strncpy - Main entry point
 * @dest: destination
 * @src: source
 * @n: integer
 * Description: Function that copies a string
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
			a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
