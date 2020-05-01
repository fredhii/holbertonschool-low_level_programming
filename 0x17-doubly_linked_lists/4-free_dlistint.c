#include "lists.h"

/**
 * free_dlistint - Erase a List.
 * @head: Double linked list.
 */
void free_dlistint(dlistint_t *head)
{
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
