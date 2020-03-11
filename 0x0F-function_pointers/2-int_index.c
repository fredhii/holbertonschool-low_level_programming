#include "function_pointers.h"
/**
 * int_index - Searches for an integer.
 * @array: Pointer to array
 * @size: size array
 * @cmp: pointer to fuction
 * Return: Return index of element.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, element;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		element = (*cmp)(array[i]);
		if (element == 1)
			return (i);
	}
	return (-1);
}
