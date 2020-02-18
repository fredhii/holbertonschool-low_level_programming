#include "holberton.h"
/**
 * _atoi - converts string to integer.
 * @s: string to convert.
 * Return: integer.
 */
int _atoi(char *s)
{
	int n;
	int sign = 1;
	int res = 0;

	for (n = 0; *(s + n) != '\0'; n++)
	{
		if (*(s + n) == '-')
			sign *= -1;
		if (*(s + n) >= '0' && *(s + n) <= '9')
			res = res * 10 + (*(s + n) - '0');
		else if (num > 0)
			break;
	}
	return (res * sign);
}
