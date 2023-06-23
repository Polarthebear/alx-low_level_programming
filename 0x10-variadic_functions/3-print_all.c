#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - main entry point
 * @format: types of arguments
 * Description: prints anything
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sepa = "";

	va_list any;

	va_start(any, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sepa, va_arg(any, int));
					break;
				case 'i':
					printf("%s%d", sepa, va_arg(any, int));
					break;
				case 'f':
					printf("%s%f", sepa, va_arg(any, double));
					break;
				case 's':
					str = va_arg(any, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sepa, str);
					break;
				default:
					i++;
					continue;
			}
			sepa = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(any);
}
