#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * argstostr - Concatenate arguments
 * @ac: Number of arguments
 * @av: Arguments content
 * Return: Pointer to concatenation
 */
char *argstostr(int ac, char **av)
{
	int i, length, size = 0, k, l, m = 0;
	char *concat;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (length = 0; av[i][length]; length++)
			;
		length++;
		size += length;
	}

	concat = malloc(sizeof(char) * size);

	if (concat == NULL)
		return (NULL);

	for (k = 0; k < ac; k++)
	{
		for (l = 0; av[k][l] != '\0'; l++, m++)
		{
			concat[m] = av[k][l];
		}
		concat[m++] = '\n';
	}
	concat[m] = '\0';

	return (concat);
}
