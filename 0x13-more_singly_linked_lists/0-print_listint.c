#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Main entry point
 * Description: print all elements of a list
 * @h: pointer to list
 * Return: Number of nodes printed
 */
size_t print_listint(const listint_t *h)
{
	size_t n;

	while (h)
	{
		printf("[%u] %s\n");
	}
	return (n);
}
