#include "lists.h"

/**
 * sum_dlistint - Sum nodes content.
 * @head: Double linked list.
 * Return: Sum result
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
