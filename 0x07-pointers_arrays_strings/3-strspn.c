#include "holberton.h"
/**
 * _strspn - Gets length of a prefix
 * @s: String to be scanned
 * @accept: String containing the characters to match
 * Return: Number of characters that match
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				break;
		}
		if (!accept[j])
			break;
	}

	return (i);
}
