#include "main.h"

/**
 * reverse_array - Main entry point
 * @a: int to be checked
 * @n: int to be checked
 * Description: Function that reverses an array of ints
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
