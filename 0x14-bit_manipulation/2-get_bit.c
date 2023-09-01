#include "main.h"

/**
 * get_bit - main entry point
 * Description: print the value of bit at index of decimal
 * @n: number
 * @index: index
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value_bit;

	if (index > 63)
	{
		return (-1);
	}

	value_bit = (n >> index) & 1;

	return (value_bit);
}
