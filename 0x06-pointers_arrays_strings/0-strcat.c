#include "holberton.h"
/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: Concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int dest_len;
	int i;

	for (dest_len = 0 ; dest[dest_len] != '\0' ; dest_len++)
	{}
	for (i = 0 ; src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
