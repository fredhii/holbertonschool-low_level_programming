#include "holberton.h"
/**
 * _strcmp - Compares two strings
 * @s1: first string
 * @s2: second string
 * Return: comparation.
 */
int _strcmp(char *s1, char *s2)
{
	int size_s1, size_s2, diff, minor_size;

	for (size_s1 = 0; s1[size_s1] != '\0'; size_s1++)
	{}
	for (size_s2 = 0; s2[size_s2] != '\0'; size_s2++)
	{}
	if (size_s1 == size_s2)
		diff = 0;
	else
	{
		diff = size_s1 - size_s2;
		diff *= 10;
		if (size_s1 < size_s2)
			minor_size = size_s1;
		else
			minor_size = size_s2;
		if (diff < 0)
			diff -= minor_size;
		else
			diff += minor_size;
	}

	return (diff);
}
