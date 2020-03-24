#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - Free linked list.
 * @head: Linked list.
 * Return: None.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *del;

	current = *head;
	while (current != NULL && head != NULL)
	{
		del = current;
		current = current->next;
		free(del);
	}
	*head = NULL;
}
