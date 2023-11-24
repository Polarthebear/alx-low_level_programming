#include "main.h"

/**
 * get_bit - return bit value at index in a decimal number
 * @n: number
 * @index: index
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
	{
		return (-1);
	}

	bit_value = (n >> index) & 1;

	return (bit_value);
}

