#include "main.h"

/**
 * get_endianness - check machine for big or little endian
 * Return: 0 (Big) or 1 (Little)
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
