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
	int counter = 0;
	int match = 0;

	for (i = 0; s[i] != '\0' ; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				counter++;
				match = 1;
				break;
			}
		}
		if (match == 0)
			return (counter);
	}

	return (counter);
}
