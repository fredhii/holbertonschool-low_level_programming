#include "holberton.h"
/**
 * _strstr - Locates a substring
 * @haystack: String to be scanned
 * @needle: String to match
 * Return: First ocurrence or null
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k, length;
	for (length = 0; haystack[length] != '\0' ; length++)
	{}

	for (i = 0; i <= length ; i++)
	{
		haystack++;
		if (haystack[i] == needle[0])
		{
			for (j = i, k = 0; needle[k] != '\0'; k++, j++)
			{
				if (needle[k] != haystack[j])
					break;
			}
		}
	}

	return (haystack);
}
