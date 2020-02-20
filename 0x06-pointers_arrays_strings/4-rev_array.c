#include "holberton.h"
/**
 * reverse_array - Reverse an array
 * @a: string
 * @n: elements to swap
 * Return: none.
 */
void reverse_array(int *a, int n)
{
	int i;
	char temp;

	n--;
	for (i = 0; i <= n; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n--] = temp;
	}
}
