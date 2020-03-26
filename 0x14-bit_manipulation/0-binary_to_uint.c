#include "holberton.h"
/**
 * binary_to_uint - Converts binary to unsigned int
 * @b: Binary number
 * Return: Converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int res;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
		if (b[i] != '1' && b[i] != '0')
			return (0);
	for (i = 0; b[i]; i++)
	{
		res = res << 1;
		if (b[i] == '1')
			res = res + 1;
	}
	return (res);
}
