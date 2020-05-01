#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node.
 * @head: Double linked list.
 * @index: Position
 * Return: 1 Success, -1 Failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux;
	unsigned int count;

	if (*head == NULL)
		return (-1);
	aux = *head;
	for (count = 0; aux != NULL && count < index; count++)
		aux = aux->next;
	if (aux == NULL)
		return (-1);
	if (count == index)
	{
		if ((*head)->next == NULL)
		{
			*head = NULL;
			free(aux);
			return (1);
		}
		if (aux == (*head))
		{
			(*head) = (*head)->next;
			(*head)->prev = NULL;
			free(aux);
			return (1);
		}
		if (aux->next == NULL)
		{
			aux->prev->next = NULL;
			free(aux);
			return (1);
		}
		aux->next->prev = aux->prev;
		aux->prev->next = aux->next;
		free(aux);
		return (1);
	}
	return (-1);
}
