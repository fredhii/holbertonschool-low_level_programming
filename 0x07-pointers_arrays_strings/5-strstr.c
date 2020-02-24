#include "holberton.h"
/**
 * _strstr - Locates a substring
 * @haystack: String to be scanned
 * @needle: String to match
 * Return: First ocurrence or null
 */
char *_strstr(char *haystack, char *needle)
{
	const char *temp1, *temp2;

	for (; *haystack ; haystack++)
	{
		if (*haystack == *needle)
		{
			temp1 = haystack;
			temp2 = needle;
			for (; *temp1; temp1++, temp2++)
			{
				if (*temp1 != *temp2)
					break;
			}
			if (!*temp2)
				return ((char *)haystack);
		}
	}

	return (0);
}
