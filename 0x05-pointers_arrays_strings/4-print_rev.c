#include "holberton.h"
/**
 * print_rev - prints a string in reverse.
 * @s: string to print.
 * Return: none.
 */
void print_rev(char *s)
{
	int i, length;

	for (length = 0; *(s + length) != 0; length++)
	{}
	length--;
	for (i = length; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
