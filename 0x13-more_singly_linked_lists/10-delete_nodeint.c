#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Main entry point
 * Description: delete node inmlist at nth index
 * @head: pointer
 * @index: index
 * Return: (pass) 1 or (fail) 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = *head;
	listint_t *now = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
			free(current);
		return (1);
	}

	while (i < index - 1)
	{
		if (!current || !(current->next))
			return (-1);
		current = current->next;
		i++;
	}

	now = current->next;
	current->next = now->next;
	free(now);

	return (1);
}
