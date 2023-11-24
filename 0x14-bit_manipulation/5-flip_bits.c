#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * @n: number 1
 * @m: number 2
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int excl = n ^ m;
	unsigned long int curr;
	int i, c = 0;

	for (i = 63; i >= 0; i--)
	{
		curr = excl >> i;
		if (curr & 1)
		{
			c++;
		}
	}

	return (c);
}
