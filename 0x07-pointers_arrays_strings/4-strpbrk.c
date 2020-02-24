#include "holberton.h"
/**
 * _strpbrk - Search a string
 * @s: String to be scanned
 * @accept: Character to match
 * Return: Character that matched
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	int found = 0;

	for (i = 0; s[i] != '\0' ; i++)
	{
		s++;
		for (j = 0; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (found == 1)
			break;
	}

	return (s);
}
