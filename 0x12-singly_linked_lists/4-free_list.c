#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_list - Free nodes from linked list.
 * @head: linked list
 * Return: None.
 */
void free_list(list_t *head)
{
	list_t *last = head;

	while (head)
	{
		last = head;
		head = head->next;
		free(last->str);
		free(last);
	}
}
