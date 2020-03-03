#include <stdlib.h>
#include "holberton.h"
/**
 * str_concat - Concatenate two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *new_str;

	if (s2 == NULL)
	{
		s2 = malloc(1);
		*s2 = '\0';
	}
	if (s1 == NULL)
	{
		s1 = malloc(1);
		*s1 = '\0';
	}
	for (k = 0; s1[k]; k++)
	{}
	for (l = 0; s2[l]; l++)
	{}
	new_str = malloc(sizeof(char) * (k + l));
	if (new_str == NULL)
		return (NULL);

	for (i = 0; *s1; i++)
	{
		new_str[i] = *s1;
		s1++;
	}
	for (j = 0; *s2; j++, i++)
	{
		new_str[i] = *s2;
		s2++;
	}

	return (new_str);
}
