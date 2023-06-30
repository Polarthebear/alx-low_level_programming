#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Main entry point
 * @h: pointer to list
 * Description: Number of elements in the linked list should be returned
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
