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
	while (c >= '0')
	{
		_putchar("%d\n", c);
		return (0);
	}
}
