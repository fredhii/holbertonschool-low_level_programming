#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a new node in the list.
 * @head: linked list
 * @str: string to add
 * Return: Number os nodes.
 */
list_t *add_node(list_t **head, const char *str)
{
	int size;
	list_t *new;

	for (size = 0; str[size]; size++)
		;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = size;
	new->next = *head;
	*head = new;

	return (new);
}
