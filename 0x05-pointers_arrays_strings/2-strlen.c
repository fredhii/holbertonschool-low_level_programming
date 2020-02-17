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
