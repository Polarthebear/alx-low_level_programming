#include "main.h"
#include <stdio.h>

/**
 * _abs - main entry point
 * @c: char to be checked
 * Description: Function that will compute the absolute value of an int
 * Return: 0
 */
int _abs(int c)
{
	if (c >= 0)
	{
		return (c);
	}
	return (-c);
}
