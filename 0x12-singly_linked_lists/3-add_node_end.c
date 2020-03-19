#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a new node in the list.
 * @head: linked list
 * @str: string to add
 * Return: Address to node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int size;
	list_t *new;
	list_t *last = *head;

	for (size = 0; str[size]; size++)
		;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = size;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new;

	return (new);
}
