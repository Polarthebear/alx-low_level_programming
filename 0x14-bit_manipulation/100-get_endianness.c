#include "main.h"

/**
 * get_endianness - main entry point
 * Description: check if the machine is a big or little endian
 * Return: 1 (little) or 0 (big)
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *c = (char *) &n;

	return (*c);
}
