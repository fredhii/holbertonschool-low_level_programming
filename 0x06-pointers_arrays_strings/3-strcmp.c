#include "holberton.h"
/**
 * _strcmp - Compares two strings
 * @s1: first string
 * @s2: second string
 * Return: comparation.
 */
int _strcmp(char *s1, char *s2)
{
	int size_s1, size_s2;

	for (size_s1 = 0; s1[size_s1] != '\0'; size_s1++)
	{}
	for (size_s2 = 0; s2[size_s2] != '\0'; size_s2++)
	{
		if (s1[size_s1] != s2[size_s2])
			return (s1[size_s1] - s2[size_s2]);
	}

	return (0);
}
