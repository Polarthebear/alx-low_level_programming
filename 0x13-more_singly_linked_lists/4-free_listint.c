#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Main entry point
 * Description: Free a linked list
 * @head: list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
