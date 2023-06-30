#include <stdio.h>
#include "lists.h"

/**
 * print_list - main entry point
 * @h: pointer to list
 * Description: prints the elements of the linked list
 * Return: Number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}

	return (n);
}
