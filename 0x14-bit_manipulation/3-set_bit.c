#include "main.h"

/**
 * set_int - main entry point
 * Description: set a bit
 * @n: pointer
 * @index: index
 * Return: 1 (success) -1 (fail)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = ((1UL << index) | *n);
	return (1);
}
