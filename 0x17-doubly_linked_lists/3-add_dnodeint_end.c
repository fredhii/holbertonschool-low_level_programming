#include "lists.h"

/**
 * add_dnodeint_end - Insert a new node to list at the end of list.
 * @head: Double linked list.
 * @n: Data to insert in list
 * Return: Address to new list node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *aux;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		aux = *head;
		while (aux->next)
			aux = aux->next;
		aux->next = new;
		new->prev = aux;
	}

	return (new);
}
