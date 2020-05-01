#include "lists.h"

/**
 * get_dnodeint_at_index - Get index.
 * @head: Double linked list.
 * @index: node to return.
 * Return: Node at given index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; head; n++)
	{
		if (index == n)
			break;
		head = head->next;
	}
	if (head == NULL)
		return (NULL);

	return (head);
}
