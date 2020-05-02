#include "lists.h"

/**
 * create_dnode - Allocates memory for node
 * @n: Number to insert in node
 * Return: Pointer to new node
 */
dlistint_t *create_dnode(const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->next = NULL;
	new->prev = NULL;
	new->n = n;

	return (new);
}

/**
 * insert_dnodeint_at_index - Insert new node.
 * @h: Double linked list.
 * @idx: Position
 * @n: New data
 * Return: Address to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *tmp = NULL;
	unsigned int i = 0;

	new = create_dnode(n);
	if (!new)
		return (NULL);
	if (!h || !(*h))
		*h = new;
	else
	{
		tmp = *h;
		while (idx != i++ && tmp->next)
			tmp = tmp->next;
		if (tmp->next)
			new->prev = tmp->prev;
		else
			new->prev = tmp;
		if (idx == i)
		{
			tmp->next = new;
			new->prev = tmp;
		}
		else if (idx == i - 1)
		{
			if (tmp->prev)
				tmp->prev->next = new;
			else
				*h = new;
			tmp->prev = new;
			new->next = tmp;
		}
		else
		{
			free(new);
			return (NULL);
		}
	}
	return (new);
}
