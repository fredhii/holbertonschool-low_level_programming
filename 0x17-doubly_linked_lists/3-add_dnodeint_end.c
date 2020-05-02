#include "lists.h"

/**
 * add_dnodeint_end - Insert a new node to list at the end of list.
 * @head: Double linked list.
 * @n: Data to insert in list
 * Return: Address to new list node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *tmp = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->next = NULL;
	new->prev = NULL;
	new->n = n;
	if (!new)
		return (NULL);

	if (!head || !(*head))
	{
		*head = new;
		return (new);
	}
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;

		new->prev = tmp;
		tmp->next = new;

		return (new);
	}

	return (NULL);
}
