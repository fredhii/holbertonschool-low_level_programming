#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - Adds a new node.
 * @head: Linked list.
 * @n: Number to add.
 * Return: New linked list.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = new;

	return (new);
}
