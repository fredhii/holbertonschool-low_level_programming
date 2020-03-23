#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - Sums (n) data in nodes.
 * @head: Linked list.
 * Return: Data sum.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
