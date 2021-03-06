#include "lists.h"

/**
 * add_dnodeint - Insert a new node to list.
 * @head: Double linked list.
 * @n: Data to insert in list
 * Return: Address to new list node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;

	new->prev = NULL;

	if (!*head)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}

	return (new);

}
