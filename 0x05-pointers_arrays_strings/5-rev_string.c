#include "holberton.h"
/**
 * rev_string - inverse a string.
 * @s: string to reverse.
 * Return: none.
 */
void rev_string(char *s)
{
	int count;
	int init;
	char temp;

	for (count = 0; *(s + count) != 0; count++)
	{}
	count--;
	for (init = 0; init != count; init++, count--)
	{
		temp = *(s + init);
		*(s + init) = *(s + count);
		*(s + count) = temp;
	}
}
