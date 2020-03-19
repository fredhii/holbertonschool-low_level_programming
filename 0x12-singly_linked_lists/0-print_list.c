#include "lists.h"
#include <stdio.h>
/**
 * print_list - Prints list.
 * @h: Start of linked list
 * Return: Number os nodes.
 */
int print_list(const list_t *h)
{
	int i;

	for (i = 0; h; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
	}

	return (i);
}
