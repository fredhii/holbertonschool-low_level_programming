#include <stdlib.h>
#include "holberton.h"
/**
 * argstostr - Concatenate arguments
 * @ac: Number of arguments
 * @av: Arguments content
 * Return: Pointer to concatenation
 */
char *argstostr(int ac, char **av)
{
	int i, size = 0, k, l, m = 0;
	char *concat;


	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (k = 0; av[i][k]; k++)
			;
		size += k + 1;
	}
	concat = malloc(sizeof(char) * size + 1);
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
