#include "holberton.h"
/**
 * _memset - Fills memory
 * @s: Starting address of memory
 * @b: Value to be filled
 * @n: Number of bytes to be filled starting
 * from s
 * Return: pointer to memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		s[i] = b;
	}

	return (s);
}
