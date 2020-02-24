#include "holberton.h"
/**
 * _strspn - Gets length of a prefix
 * @s: String to be scanned
 * @accept: String containing the characters to match
 * Return: Number of characters that match
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int match = 0;

	for (i = 0; accept[i] != '\0' ; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				match++;
				break;
			}
		}
	}

	return (match);
}
