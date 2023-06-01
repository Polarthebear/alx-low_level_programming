#include "main.h"

/**
 * _strcat - Main entry point
 * @dest: destination
 * @src: source
 * Description: Function that concatinates two strings
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;
		for (b = 0; src[b] != '\0'; b++)
		{
			dest[a] = src[b];
		}
	dest[a] = '\0';
	return (dest);
}
