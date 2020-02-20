#include "holberton.h"
/**
 * print_number - Prints integer
 * @n: Integer to print.
 * Return: none.
 */
void print_number(int n)
{
	unsigned int n = n;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if ((n / 10) > 0)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}
