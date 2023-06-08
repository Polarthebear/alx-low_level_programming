#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - Main entry point
 * @n: input integer
 * Description: Returns 1 if input number is a prime
 * Return: 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - main entry point
 * @n: input integer
 * @i: integer
 * Description: calculates, recursively, if a number is prime
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
