#include "holberton.h"
/**
 * puts2 - prints only half string.
 * Description: Prints half strin but
 * two by two chars
 * @str: string to print.
 * Return: none.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i += 2)
		_putchar(*(str + i));
	_putchar('\n');
}
