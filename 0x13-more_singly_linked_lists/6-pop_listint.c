#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Main entry point
 * Description: delete head node
 * @head: pointer
 * Return: 0 if list empty or data inside elements
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int i;

	if (!head || !*head)
		return (0);

	i = (*head)->n;
	current = (*head)->next;
	free(*head);
	*head = current;

	return (i);
}
