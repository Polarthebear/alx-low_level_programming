#include <stdio.h>
#include "lists.h"

/**
 * listint_len - main entry point
 * Description: return number of elements
 * @h: linked list
 * Return: nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
