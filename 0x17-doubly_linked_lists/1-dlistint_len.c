#include "lists.h"

/**
 * dlistint_len - Measure double linked list length.
 * @h: Double linked list.
 * Return: Nodes in list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;

	return (i);

}
