#include "holberton.h"
/**
 * _atoi - converts string to integer.
 * @s: string to convert.
 * Return: integer.
 */
int _atoi(char *s)
{
	int i;
	int n;
	int sign = 1;
	int res;

	for (n = 0; *(s + n) != '\0'; n++)
	{
		if (*(s + n) == '-')
			sign *= -1;
		if (*(s + n) >= '0' && *(s + n) <= '9')
		{
			i = *(s + n) - '0';
			res = (res * 10) + i;

			if (*(s + (n + 1)) < '0' || *(s + (n + 1)) > '9')
				break;
		}
	}
	return (res * sign);
}
