#include "lists.h"

/**
 * get_nodeint_at_index - Main entry point
 * Description: return the node for index in a list
 * @head: node 1
 * @index: node index
 * Return: pointer to indexed node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int num = 0;

	while (current && num < index)
	{
		current = current->next;
		num++;
	}
	return (current ? current : NULL);
}
