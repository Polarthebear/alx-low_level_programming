#include "main.h"

/**
 * _islower - main entry point
 * @c: char will be checked
 * Description: A function that checks for lowercase character
 * Return: 1 if c is lowercase and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
