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
	int n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n);
}
