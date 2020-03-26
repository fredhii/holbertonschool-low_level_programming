#include "holberton.h"
/**
 * flip_bits -Find numbers needed to flip number.
 * @n: Number to convert
 * @m: Number to reach
 * Return: Bits that needs n to reach m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, num = 0;

	for (; xor > 0;)
	{
		num += (xor & 1);
		xor = xor >> 1;
	}
	return (num);
}
