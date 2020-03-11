#include "function_pointers.h"
/**
 * array_iterator - executes a fuction.
 * @array: Pointer to array
 * @size: size array
 * @action: pointer to fuction
 * Return: none.
 */
void array_iterator(int *array, int size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
