#include "holberton.h"
/**
 * print_line - Prints even more numbers
 * Description: Prints lines
 * @n: times line is going to be printed
 * Return: None.
 */
void print_line(int n)
{
	int i = n;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
