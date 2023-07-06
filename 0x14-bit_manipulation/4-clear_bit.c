#include "main.h"

/**
 * clear_bit - Main entry point
 * @n: pointer
 * @index: index
 * Return: 1 (Success) or -1 (Failure)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
