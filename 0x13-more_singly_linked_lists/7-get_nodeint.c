#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - Gets number in selected node.
 * @head: Linked list.
 * @index: Selected node.
 * Return: Number in selected node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;
	listint_t *current = head;

	for (n = 0; current != NULL; n++)
	{
		if (index == n)
			break;
		current = current->next;
	}
	if (current == NULL)
		return (NULL);

	return (current);
}
