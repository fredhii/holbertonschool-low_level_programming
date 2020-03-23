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

	/* Get node index */
	for (id = 0; current != NULL; id++)
	{
		if (idx == id)
			break;
		current = current->next;
	}
	/* Insert new node */
	if (current != NULL)
	{
		new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);
		new->n = n;
		new->next = current->next;
		current->next = new;
		return (new);
	}

	return (NULL);
}
