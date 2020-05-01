#include "lists.h"

/**
 * print_dlistint - Prints all elements in a double list.
 * @h: Double linked list.
 * Return: Nodes in list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}

	return (i);
}
