#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - Inserts a new node.
 * @head: Linked list.
 * @idx: Node to be before new node.
 * @n: New node data.
 * Return: Linked list.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int id;
	listint_t *current = *head;
	listint_t *new;

	if (head == NULL) /* Validate Empty list */
		return (NULL);
	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	for (id = 0; id < idx; id++) /* Get node index */
	{
		current = current->next;
		if (current == NULL)
			return (NULL)
	}
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = current->n;
	new->next = current->next;
	current->n = n;
	current->next = new;
	return (new);
}
