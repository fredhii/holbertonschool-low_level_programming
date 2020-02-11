#include "holberton.h"
/**
 * print_alphabet - prints alphabet.
 * Description: Prints alphabeth trough a function
 * Return: alphabet.
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}
