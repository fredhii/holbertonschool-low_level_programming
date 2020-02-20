#include "holberton.h"
/**
 * _strcmp - Compares two strings
 * @s1: first string
 * @s2: second string
 * Return: comparation.
 */
int _strcmp(char *s1, char *s2)
{
	int size;

	for (size = 0; s1[size] != '\0'; size++)
	{}
	for (size = 0; s2[size] != '\0'; size++)
	{
		if (s1[size] != s2[size])
			return (s1[size] - s2[size]);
	}

	return (0);
}
