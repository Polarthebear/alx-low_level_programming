#include "main.h"
#include <unistd.h>
/**
 * _putchar - write to standar output
 * @c: char to print
 * Return: 1 (Success) or -1 (Fail)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

