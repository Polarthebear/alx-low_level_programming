#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - main entry point
 * Description: free a linked list
 * @h: pointer
 * Return: elements in frees list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t a = 0;
	int i;
	listint_t *current;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		i = *h - (*h)->next;

		if (i > 0)
		{
			current = (*h)->next;
			free(*h);
			*h = current;
			a++;
		}
		else
		{
			free(*h);
			*h = NULL;
			a++;
			break;
		}
	}

	*h = NULL;

	return (a);
}
