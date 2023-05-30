#include "main.h"

/**
 * swap_int - Main entry point
 * @a: int to be swapped with @b
 * @b: int to be swapped with @a
 * Description: Function that swaps two integers
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
