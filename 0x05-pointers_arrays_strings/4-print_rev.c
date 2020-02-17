#include "holberton.h"
/**
 * _strlen - measure string length.
 * @s: value to size.
 * Return: string length.
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; *(s + count) != 0; count++)
	{}
	return (count);
}
/**
 * print_rev - prints a string in reverse.
 * @s: string to print.
 * Return: none.
 */
void print_rev(char *s)
{
	int i;

	for (i = _strlen(s); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
