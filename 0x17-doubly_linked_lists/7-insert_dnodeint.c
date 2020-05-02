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
	dlistint_t *current = *h, *new, *aux;

	if (*h == NULL && idx > 0)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		if (current != NULL)
		{
			new->next = current;
			current->prev = new;
		}
		else
			new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (*h);
	}
	for (id = 0; id < idx - 1; id++)
	{
		if (current == NULL)
			return (free(new), NULL);
		current = current->next;
	}
	if (current == NULL)
		return (free(new), NULL);
	aux = current;
	current = current->next;
	aux->next = new;
	new->next = current;
	new->prev = aux;
	return (new);
}
