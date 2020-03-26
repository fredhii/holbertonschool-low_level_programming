#include "holberton.h"
/**
 * get_endianness - Checks endianness
 * Return: 0 Big endian, 1 Little endian
 */
int get_endianness(void)
{
	int i = 1;
	char *endian;

	endian = (char *)&i;

	return (*endian);
}
