#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint2 - Free linked list.
 * @head: Linked list.
 * Return: None.
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	while ((current = *head) != NULL)
	{
		*head = current->next;
		free(current);
	}
	*head = NULL;
}
