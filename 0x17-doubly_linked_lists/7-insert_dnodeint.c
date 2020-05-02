#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert new node.
 * @h: Double linked list.
 * @idx: Position
 * @n: New data
 * Return: Address to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int id;
	dlistint_t *new;

	if ((*h == NULL && idx > 0) || n < 0)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *h;
		(*h)->prev = new;
		*h = new;
		return (new);
	}
	for (id = 0; id < idx - 1; id++)
	{
		*h = (*h)->next;
		if (*h == NULL && idx - id > 0)
			return (free(new), NULL);
	}
	new->next = (*h)->next;
	(*h)->next = new;
	while ((*h)->prev)
		*h = (*h)->prev;
	return (new);
}
