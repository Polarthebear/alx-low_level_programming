#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Main entry point
 * @array: pointer of type int to an array
 * @size: size of the array
 * @action: pointer to function
 * Description: Function that executes a function as a parameter.
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		while (size > 0)
		{
			action(*array);
			array++;
		}
	}
}
