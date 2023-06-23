#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - main entry point
 * @separator: const char
 * @n: number of arguments
 * Description: print numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list print;

	va_start(print, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(print, int));
		else if (separator && i == 0)
			printf("%d", va_arg(print, int));
		else
			printf("%s%d", separator, va_arg(print, int));
	}

	va_end(print);

	printf("\n");
}
