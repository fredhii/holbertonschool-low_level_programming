#include "lists.h"

/**
 * add_dnodeint - Insert a new node to list.
 * @head: Double linked list.
 * @n: Data to insert in list
 * Return: Address to new list node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->next = NULL;
	new->prev = NULL;
	new->n = n;

	if (!head || !(*head))
	{
		*head = new;
		return (new);
	}
	else
	{
		tmp = *head;
		tmp->prev = new;
		*head = new;
		new->next = tmp;
		return (new);
	}

	return (NULL);

}
