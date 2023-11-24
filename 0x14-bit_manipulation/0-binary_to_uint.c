#include "main.h"

/**
 * binary_to_uint - Covert number to unsigned int from binary
 * @b: string with binary num
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int deci = 0;
	int i = 0;

	if (!b)
	{
		return (0);
	}
	for (i; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		deci = 2 * deci + (b[i] - '0');
	}

	return (deci);
}
