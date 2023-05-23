#include "main.h"

/**
 * _isalpha - main entry point
 * @c: char will be checked
 * Description: A function that checks if a charcter is lower or uppercase
 * Return: 1 if c is upper or lowercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
