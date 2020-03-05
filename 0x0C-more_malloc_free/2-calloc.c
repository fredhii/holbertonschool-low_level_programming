#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory.
 * @nmemb: Elements
 * @size: Memory size
 * Return: Pointer to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *new_memory;

	if (size == 0)
		return (NULL);

	new_memory = malloc(nmemb * size);
	if (new_memory == NULL)
	{
		return (NULL);
	}

	return (new_memory);
}
