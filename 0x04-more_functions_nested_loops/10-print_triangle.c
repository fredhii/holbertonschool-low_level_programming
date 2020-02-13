#include "holberton.h"
/**
 * print_triangle - Print a triangle
 * Description: Draws a triangle with a given value
 * @size: Dimention to print
 * Return: None.
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j < size - i - 1)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
