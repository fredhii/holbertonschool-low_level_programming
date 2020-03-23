#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - Adds a new node.
 * @head: Linked list.
 * @n: Number to add.
 * Return: Number of nodes in list.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
