#include "lists.h"

/**
 * sum_listint - Main entry point
 * Description: calculate the sum
 * @head: node 1
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int add = 0;

	while (current)
	{
		add += current->n;
		current = current->next;
	}

	return (add);
}
