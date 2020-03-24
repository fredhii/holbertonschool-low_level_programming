#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - Inserts a new node.
 * @head: Linked list.
 * @idx: Node to be before new node.
 * @n: New node data.
 * Return: Linked list.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int id;
	listint_t *current = *head;
	listint_t *new;

	if (!head || !*head) /* Validate Empty list */
		return (NULL);
	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);
		new->n = n;
		new->next = current;
		*head = new;
		return (new);
	}
	for (id = 0; current; id++) /* Get node index */
	{
		if (id + 1 == idx)
		{
			new = malloc(sizeof(listint_t));
			if (!new)
				return (NULL);
			new->n = n;
			new->next = current->next;
			current->next = new;
			return (new);
		}
		current = current->next;
	}
	return (NULL);
}
