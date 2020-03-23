#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - Free linked list.
 * @head: Linked list.
 * Return: None.
 */
void free_listint(listint_t *head)
{
	listint_t *last = head;

	while (head)
	{
		last = head;
		head = head->next;
		free(last);
	}
}
