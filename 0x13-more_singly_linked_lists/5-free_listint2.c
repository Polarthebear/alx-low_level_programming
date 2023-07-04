#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Main entry point
 * Description: Frees a linked list
 * @head: pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}

	*head = NULL;
}
