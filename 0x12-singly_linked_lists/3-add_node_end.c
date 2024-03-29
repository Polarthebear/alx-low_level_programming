#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Main entry point
 * @head: double pointer to list
 * @str: string
 * Description: Add new node to end of a linked list
 * Return: addres of new element or NULL(fail)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *curr_node = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (curr_node->next)
		curr_node = curr_node->next;

	curr_node->next = new_node;

	return (new_node);
}
