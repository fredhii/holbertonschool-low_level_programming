#include "holberton.h"
#include <stdlib.h>
/**
 * saved_data - Copy an array into a new array.
 * @previous: Array to copy
 * Return: New array.
 */
char *saved_data(char *previous)
{
	int size, i;
	char *new;

	for (size = 0; previous[size] != '\0'; size++)
		;
	new = malloc(sizeof(char) * size);
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	for (i = 0; *previous; i++)
	{
		new[i] = *previous;
		previous++;
	}

	return (new);
}
/**
 * restore_data - Copy data from one array to other.
 * @s1: Array to insert info
 * @s2: Array to copy
 * Return: Pointer to new memory allocation.
 */
char *restore_data(char *s1, char *s2)
{
	int i;

	for (i = 0; *s2; i++)
	{
		s1[i] = *s2;
		s2++;
	}

	return (s1);
}
/**
 * _realloc - Reallocates a memory block.
 * @ptr: Memory
 * @old_size: Old memory size
 * @new_size: New memory size
 * Return: Pointer to new memory allocation.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *backup;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr != NULL)
	{
		backup = saved_data(ptr);
		free(ptr);
		ptr = malloc(new_size);
		if (ptr == NULL)
		{
			free(ptr);
			return (NULL);
		}
		ptr = restore_data(ptr, backup);

	}
	else
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
		{
			free(ptr);
			return (NULL);
		}
	}

	return (ptr);
}
