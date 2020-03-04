#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * _strlen - Prints string length
 * @s: String
 * Return: String length
 */
int _strlen(char *s)
{
	return (*s ? 1 + _strlen(s + 1) : 0);
}
/**
 * argstostr - Concatenate arguments
 * @ac: Number of arguments
 * @av: Arguments content
 * Return: Pointer to concatenation
 */
char *argstostr(int ac, char **av)
{
	int i, size = 1, k, l, m = 0;
	char *concat;


	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		size += _strlen(av[i]);
	}
	concat = malloc(sizeof(char) * size);
	if (concat == NULL)
		return (NULL);

	for (k = 0; k < ac; k++)
	{
		for (l = 0; av[k][l]; l++)
		{
			concat[m] = av[k][l];
			m++;
		}
		concat[m] = '\n';
		m++;
	}
	concat[m] = '\0';

	return (concat);
}
