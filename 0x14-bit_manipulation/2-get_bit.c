#include "holberton.h"
/**
 * get_bit - Gets bit at a given position
 * @n: Number to take out bit
 * @index: position to take bit
 * Return: Found bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
