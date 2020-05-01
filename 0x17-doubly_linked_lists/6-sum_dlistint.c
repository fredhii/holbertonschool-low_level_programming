#include "lists.h"

/**
 * sum_dlistint - Sum nodes content.
 * @head: Double linked list.
 * Return: Sum result
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	while (head->prev)
		head = head->prev;

	return (sum);
}
