#include "holberton.h"
/**
 * _strcpy - Copy string to pointer.
 * @src: Copy string.
 * @dest: Paste string.
 * Return: 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int n;

	for (n = 0; *(src + n) != '\0'; n++)
	{}
	for (i = 0; i <= n; i++)
		dest[i] = src[i];

	return (dest);
}
