#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * looped_listint_len - Main entry point
 * Description: unique nodes are counted
 * @head: pointer
 * Return: 0
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *fast;

	const listint_t *slow;

	size_t n = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	fast = head->next;
	slow = (head->next)->next;

	while (slow)
	{
		if (fast == slow)
		{
			fast = head;
			while (fast != slow)
			{
				n++;
				fast = fast->next;
				slow = slow->next;
			}

			fast = fast->next;
			while (fast != slow)
			{
				n++;
				fast = fast->next;
			}
			return (n);
		}
		fast = fast->next;
		slow = (slow->next)->next;
	}
	return (0);
}


/**
 * print_listint_safe - Main entry point
 * @head: pointer
 * Description: prints the list in a safe way
 * Return: nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;

	int index = 0;

	n = looped_listint_len(head);

	if (n == 0)
	{
		for (;head != NULL; n++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < n; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("->[%p] %d\n", (void *)head, head->n);
	}
	return (n);
}

