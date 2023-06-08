#include "main.h"

/**
 * _sqrt_recursion - Main entry point
 * @n: number
 * Description: Return the natural square root of a number
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	int i;

	i = 0;

	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (n);
	return (_sqrt_recursion(n, i + 1));
}
