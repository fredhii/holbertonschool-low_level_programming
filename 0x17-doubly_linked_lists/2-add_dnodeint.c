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
	new->prev = *head;
	new->prev = NULL;
	*head = new;

	return (new);

}
