#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Main entry point
 * Description: Add node to end of linked list
 * @n: data to insert
 * @head: pointer
 * Return: pointer to new node or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end;
	listint_t *temp_end = *head;

	end = malloc(sizeof(listint_t));
	if (!end)
		return (NULL);

	end->n = n;
	end->next = NULL;

	if (*head == NULL)
	{
		*head = end;
		return (end);
	}

	while (temp_end->next)
		temp_end = temp_end->next;

	temp_end->next = end;

	return (end);
}
