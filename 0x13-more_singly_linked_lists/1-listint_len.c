#include "lists.h"
/**
 * listint_len - Prints list length.
 * @h: Linked list.
 * Return: Number of nodes in list.
 */
int listint_len(const listint_t *h)
{
	int nodes;

	for (nodes = 0; h; nodes++)
		h = h->next;

	return (nodes);
}
