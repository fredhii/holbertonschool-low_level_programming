#include <stdlib.h>
#include "holberton.h"
/**
 * _strdup - Duplicates a string
 * @str: string to duplicate
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
	int i, length;
	char *new_str;

	if (str == NULL)
		return (NULL);

	for (length = 0; str[length]; length++)
	{}
	new_str = malloc(sizeof(char) * length + 1);
	if (new_str == NULL)
		return (NULL);

	for (i = 0; *str; i++)
	{
		new_str[i] = *str;
		str++;
	}
	return (new_str);
}
