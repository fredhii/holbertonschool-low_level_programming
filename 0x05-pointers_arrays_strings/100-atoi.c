#include "holberton.h"
/**
 * _atoi - converts string to integer.
 * @s: string to convert.
 * Return: integer.
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int res = 0;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			res = (res * 10) + (*s - '0');

		else if (res > 0)
			break;
	} while (*s++);

	return (res * sign);
}
