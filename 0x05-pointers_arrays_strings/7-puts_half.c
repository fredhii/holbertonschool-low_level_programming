#include "holberton.h"
/**
 * puts_half - prints half string.
 * @str: string to print.
 * Return: none.
 */
void puts_half(char *str)
{
	int length;
	int n;

	for (length = 0; *(str + length) != '\0'; length++)
	{}
	if (!(length % 2 == 0))
	{
		length= length - 1;
	}
	length = length / 2;
	for (n = length; *(str + n) != '\0'; n++)
	{
		_putchar(*(str + n));
	}
	_putchar('\n');
}
