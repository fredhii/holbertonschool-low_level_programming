#include <stdio.h>
#include "holberton.h"
/**
 * print_array - prints arrays.
 * @a: array to be printed.
 * @n: length of array.
 * Return: none.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != n - 1)
			printf(", ");
		else
			printf("\n");
	}
}
