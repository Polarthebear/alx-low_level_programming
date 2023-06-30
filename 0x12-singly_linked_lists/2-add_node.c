#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - main entry point
 * @head: double pointer to list
 * @str: string to add to node
 * Description: add a node to the beginning of linked list
 * Return: addres of the mew node or NULL(fail)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
