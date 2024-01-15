#include "main.h"

/**
 * _isupper - main entry point
 * @c: char to be checked
 * Description: function that checks if a char is uppercase
 * Return: 1 if uppercase 0 otherwise
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
