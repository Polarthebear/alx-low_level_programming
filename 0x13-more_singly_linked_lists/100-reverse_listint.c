#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_listint - Main entry point
 * Description: a linked list reversed
 * @head: pointer
 * Return: pointer to node 1
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *old = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = old;
		old = *head;
		*head = next;
	}

	*head = old;

	return (*head);
}
