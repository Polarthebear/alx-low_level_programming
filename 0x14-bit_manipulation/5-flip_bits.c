#include "main.h"

/**
 * flip_bits - main entry point
 * Description: count bits to change
 * @n: #1
 * @m: #2
 * Return: bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	int value = 0;
	unsigned long int temp;
	unsigned long int exc = a ^ b;

	for (i = 63; i >= 0; i--)
	{
		temp = exc >> i;
		if (temp & 1)
			value++;
	}

	return (value);
}
