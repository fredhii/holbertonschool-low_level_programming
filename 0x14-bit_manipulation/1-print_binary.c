#include "holberton.h"
/**
 * print_binary - Prints number in binary
 * @n: Number to print
 * Return: None.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
