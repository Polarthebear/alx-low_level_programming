#include "main.h"

/**
 * factorial - Main entry point
 * @n: integer to be inputted
 * Description: Returns the factoriaal of n
 * Return: -1 if <0 & factorial(n) > 0
 */
int factorial(int n)
{
	if (n < 0)

		return (-1);

	if (n == 0 || n == 1)

		return (1);

	return (n * factorial(n - 1));
}
