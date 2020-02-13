#include "holberton.h"
/**
 * _isdigit - check for digits
 * Description: return 1 or 0 if character
 * is digit or not
 * @c: Digit to check
 * Return: On success 1, 0 on reject.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
