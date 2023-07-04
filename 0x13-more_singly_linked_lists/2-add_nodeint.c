#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - main entry point
 * Description: add a new node at the beginning of a list
 * @n: insert
 * @head: pointer
 * Return: pointer to new node or NULL(fail)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));
	if (!add)
		return (NULL);

	add->n = n;
	add->next = *head;
	*head = add;


	return (add);
}
