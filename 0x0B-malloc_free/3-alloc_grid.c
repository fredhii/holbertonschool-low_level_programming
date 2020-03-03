#include <stdlib.h>
#include "holberton.h"
/**
 * alloc_grid - Create two dimentional array
 * @width: array width
 * @height: array height
 * Return: Pointer to two dimentional array
 */
int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **new_arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	new_arr = malloc(sizeof(int *) * height);

	if (new_arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		new_arr[i] = malloc(sizeof(int) * width);
		if (new_arr[i] == NULL)
		{
			for (k = 0; new_arr[k]; k++)
			{
				free(new_arr[k]);
			}
			free(new_arr);
			return (NULL);
		}
	}
	for (j = 0; new_arr[j]; j++)
	{
		for (i = 0; new_arr[j][i]; i++)
			new_arr[j][i] = 0;
	}
	return (new_arr);
}
