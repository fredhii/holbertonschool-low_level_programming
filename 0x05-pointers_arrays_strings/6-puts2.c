#include "holberton.h"
/**
 * puts2 - prints only half string.
 * Description: Prints half string but
 * two by two chars
 * @str: string to print.
 * Return: none.
 */
void puts2(char *str)
{
	int i, j;

	for (i = 0; *(str + i) != '\0'; i++)
	{}
	for (j = 0; j < i; j += 2)
		_putchar(*(str + j));
	_putchar('\n');
}
