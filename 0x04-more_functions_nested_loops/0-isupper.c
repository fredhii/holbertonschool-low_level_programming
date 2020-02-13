#include "holberton.h"
/**
 * _isupper - check for uppercase
 * Description: return 1 or 0 if character
 * is uppercase or not
 * @c: Character to check
 * Return: On success 1, 0 on reject.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
