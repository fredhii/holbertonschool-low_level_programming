#include "holberton.h"
/**
 * swap_int - Swap two values.
 * Description: Swap the value of two pointer.
 * @a: pointer one.
 * @b: pointer two.
 * Return: none
 */
void swap_int(int *a, int *b)
{
	int temp1 = *a;
	int temp2 = *b;

	*a = temp2;
	*b = temp1;
}
