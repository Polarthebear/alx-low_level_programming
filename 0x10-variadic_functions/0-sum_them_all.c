#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - main entry point
 * @n: number of arguments
 * Description: function to sum up all its parameters
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned char x = 0;
	int sum = 0;
	va_list ptr;

	va_start(ptr, n);

	for (int i = 0; i < n; i++)
		sum += va_arg(ptr, int);
	va_end(ptr);

	return (sum);
}
