#include "holberton.h"
/**
 * _memcpy - Copies memory area
 * @dest: Destination array
 * @src: Source of data to be copied
 * @n: Number of bytes to be copied
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
