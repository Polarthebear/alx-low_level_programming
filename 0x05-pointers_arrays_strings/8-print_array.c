#include "main.h"
#include <stdio.h>

/**
 * print_array - Main entry point
 * @a: int to be checked
 * @n: int to be checked
 * Description: Print n elements of an array of integers
 */
void print_array(int *a, int n)
{
		int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
