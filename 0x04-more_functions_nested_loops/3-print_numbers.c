#include "holberton.h"
/**
 * print_numbers - Prints numbers
 * Description: Prints numbers from 0 to 9
 * Return: None.
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);

	_putchar('\n');
}