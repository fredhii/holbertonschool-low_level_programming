#include "holberton.h"
/**
 * clear_bit - Sets bit at a given position
 * @n: Number to modify
 * @index: position to insert bit
 * Return: 1 Success, -1 Failed.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);

	return (1);
}
