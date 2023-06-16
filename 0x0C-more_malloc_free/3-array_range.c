#include "main.h"
#include <stdlib.h>

/**
 * array_range - Main entry point
 * @min: Minimum
 * @max: Maximum
 * Description: Function that creates an array of integers
 * Return: null if min > max
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
