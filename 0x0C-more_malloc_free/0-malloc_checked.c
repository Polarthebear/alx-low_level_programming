#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - main entry point
 * @b: bytes
 * Description: Allocate memory using malloc
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *malc;

	malc = malloc(b);

	if (malc == NULL)
		exit(98);

	return (malc);
}
