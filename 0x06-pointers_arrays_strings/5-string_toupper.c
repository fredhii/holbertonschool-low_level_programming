#include "holberton.h"
/**
 * string_toupper - change string to uppercase
 * @n: string to modify.
 * Return: string.
 */
char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] -= 32;
	}
	return (n);
}
