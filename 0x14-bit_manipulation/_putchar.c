#include "main.h"
#include <unistd.h>

/**
 * _putchar - main entry point
 * Description: write to stdout
 * @c: character
 * Return: 1 (success) -1 (fail)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
