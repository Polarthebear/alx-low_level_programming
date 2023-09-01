#include "main.h"

/**
 * flip_bits - main entry point
 * Description: count bits to change
 * @n: nubmer 1
 * @m: number 2
 * Return: bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a = 0;
	int num = 0;

	unsigned long int temp;
	unsigned long int uniq = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		temp = uniq >> a;
		if (temp & 1)
		{
			num++;
		}
	}

	return (num);
}
