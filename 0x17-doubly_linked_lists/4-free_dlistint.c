#include "lists.h"

/**
 * free_dlistint - Main entry point
 * Description: free a list
 * @head: *head
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
