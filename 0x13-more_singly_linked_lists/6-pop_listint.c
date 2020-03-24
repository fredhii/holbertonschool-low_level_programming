#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - Deletes first node.
 * @head: Linked list.
 * Return: Number that was allocated in node 1.
 */
int pop_listint(listint_t **head)
{
	int number;
	listint_t *previous = *head;

	if (*head == NULL)
		return (0);

	number = previous->n;

	*head = previous->next;
	free(previous);

	return (number);
}
