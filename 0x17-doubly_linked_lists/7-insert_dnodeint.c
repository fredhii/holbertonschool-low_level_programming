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
	dlistint_t *new, *tmp;
	unsigned int id = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->next = NULL;
	new->prev = NULL;
	new->n = n;
	if (!h || !(*h))
		*h = new;
	else
	{
		tmp = *h;
		while (idx != id++ && tmp->next)
			tmp = tmp->next;
		if (tmp->next)
			new->prev = tmp->prev;
		else
			new->prev = tmp;
		if (idx == id)
		{
			tmp->next = new;
			new->prev = tmp;
		}
		else if (idx == id - 1)
		{
			if (tmp->prev)
				tmp->prev->next = new;
			else
				*h = new;
			tmp->prev = new;
			new->next = tmp;
		}
		else
			return (free(new), NULL);
	}
	return (new);
}
