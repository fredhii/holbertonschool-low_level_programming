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

	for (i = 0; s[i] != '\0' ; i++)
	{
		s++;
		if (s[i] == c)
			break;
	}

	return (s);
}
