#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Main entry point
 * Description: inserts new node at a given position
 * @n: data
 * @idx: index
 * @head: pointer
 * Return: pointer to new node or NULL(fail)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *add;
	listint_t *current = *head;
	unsigned int a;

	add = malloc(sizeof(listint_t));
	if (!add || !head)
		return (NULL);

	add->n = n;
	add->next = NULL;

	if (idx == 0)
	{
		add->next = *head;
		*head = add;
		return (add);
	}

	for (a = 0; current && a < idx; a++)
	{
		if (a == idx - 1)
		{
			add->next = current->next;
			current->next = add;
			return (add);
		}
		else
			current = current->next;
	}

	return (NULL);
}
