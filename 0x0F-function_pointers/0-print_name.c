#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Main entry point
 * @name: name of user
 * @f: function pointer
 * Description: function that prints a name
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
