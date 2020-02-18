#include "holberton.h"
/**
 * rev_string - inverse a string.
 * @s: string to reverse.
 * Return: none.
 */
void rev_string(char *s)
{
	int length;
	int init;
	char temp;

	for (length = 0; *(s + length) != '\0'; length++)
	{}
	length--;
	for (init = 0; init < length ; init++)
	{
		temp = *(s + init);
		*(s + init) = *(s + length);
		*(s + length--) = temp;
	}
}
