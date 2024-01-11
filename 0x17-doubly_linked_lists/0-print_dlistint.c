#include "lists.h"

/**
 * print_dlistint - main entry point
 * Description: Function that prints all the
 * elemnts of a dlistint_t list
 * @h: head
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int  n = 0;

	if (h == NULL)
		return (n);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		print("%d\n", h->n);
		n++;
		h = h->next;
	}

	return (n);
}
