#include "lists.h"
#include <stdio.h>
/**
 * list_len - Count number of elements in a linked list.
 * @h: linked list
 * Return: elements in linked list.
 */
int list_len(const list_t *h)
{
	int i;

	for (i = 0; h; i++)
		h = h->next;

	return (i);
}
