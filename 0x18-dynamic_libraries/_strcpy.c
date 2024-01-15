#include "main.h"

/**
 * *_strcpy - Main entry point
 * @dest: destination
 * @src: source
 * Description: Function that copies the string pointed to by src
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
