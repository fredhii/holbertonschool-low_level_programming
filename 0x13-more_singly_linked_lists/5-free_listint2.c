#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - Free linked list.
 * @head: Linked list.
 * Return: None.
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
