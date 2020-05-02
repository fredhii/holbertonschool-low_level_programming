#include "lists.h"

/**
 * free_dlistint - Erase a List.
 * @head: Double linked list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
