#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Main entry point
 * @head: list to be freed
 * Description: Free a linked list
 */
void free_list(list_t *head)
{
	list_t *temp_node;

	while (head)
	{
		temp_node = head->next;
		free(head->str);
		free(head);
		head = temp_node;
	}
}
