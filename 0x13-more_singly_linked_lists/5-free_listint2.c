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
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
