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
	dlistint_t *current = *h;
	dlistint_t *new, *aux;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	current = *h;
	if (*h == NULL && idx > 0)
		return (free(new), NULL);
	if (idx == 0)
	{
		if (*h != NULL)
		{
			new->next = *h;
			(*h)->prev = new;
		}
		else
			new->next = NULL;
		*h = new;
		return (new);
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
