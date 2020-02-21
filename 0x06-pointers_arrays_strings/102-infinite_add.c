#include "holberton.h"
#include <stdio.h>
/**
 * infinite_add - Adds two numbers
 * @n1: first number.
 * @n2: second number.
 * @r: buffer to function.
 * @size_r: Buffer size.
 * Return: Pointer to awnser.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l, m, res, temp;
	int num1 = 0, num2 = 0, remain = 0;

	for (i = 0; n1[i] != '\0'; i++)
	{}
	for (j = 0; n2[j] != '\0'; j++)
	{}
	if (i + 2 > size_r || j + 2 > size_r)
		return (0);
	i--;
	j--;
	for (k = 0; i >= 0 || j >= 0; i--, j--, k++)
	{
		if (i >= 0)
			num1 = n1[i] - '0';
		if (j >= 0)
			num2 = n2[i] - '0';

		res = num1 + num2 + remain;
		if (res > 9)
		{
			remain = 1;
			res -= 10;
		}
		else
			remain = 0;
		r[k] = (res + '0');
	}
	if (remain == 1)
		r[k++] = (1 + '0');
	m = k;
	k -= 1;
	for (l = 0; l < k; l++, k--)
	{
		temp = r[k];
		r[k] = r[l];
		r[l] = temp;
	}
	r[m] = '\0';
	return (r);
}
