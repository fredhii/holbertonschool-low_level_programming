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
	dlistint_t *tmp = NULL, *new = *h;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (!*h || n < 0)
		return (NULL);
	tmp = malloc(sizeof(dlistint_t));
	if (!tmp)
		return (NULL);
	tmp->n = n;
	for (i = 0; new; i++)
	{
		if (idx == i)
		{
			tmp->prev = new->prev;
			tmp->next = new;
			new->prev = tmp;
			tmp->prev->next = tmp;
			return (tmp);
		}
		if (!new->next && idx == i + 1)
			return (free(tmp), add_dnodeint_end(h, n));
		new = new->next;
	}
	free(tmp);
	return (NULL);
}
