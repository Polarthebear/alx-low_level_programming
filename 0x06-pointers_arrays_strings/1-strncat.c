#include "main.h"

/**
 * _strncat - Main entry point
 * @dest: destination
 * @src: source
 * @n: bytes
 * Description: Function that concatenates two strings
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
