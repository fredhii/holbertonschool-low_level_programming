#include "holberton.h"
/**
 * _strchr - Locates a character in a string
 * @s: String to be scanned
 * @c: Character to search
 * Return: Occurence of character
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (s[i] == c)
		return (s + i);

	return (0);
}
