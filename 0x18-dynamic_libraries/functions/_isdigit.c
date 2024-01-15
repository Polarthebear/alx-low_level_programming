#include "main.h"

/**
 * _isdigit - main entry point
 * @c: int to be ckecked
 * Description: runs through 0 to 9  & checks for a digit
 * Return: 1 if digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
