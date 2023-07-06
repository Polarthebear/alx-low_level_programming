#include "main.h"

/**
 * set_bit - Main entry point
 * Description: set value of bit to 1 at given index
 * @n: pointer
 * @index: index
 * Return: 1 (success) or -1 (fail)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
		return (1);
}
