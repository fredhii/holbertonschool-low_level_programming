#include "holberton.h"
#include <stdio.h>
#define __FILENAME__ (__FILE__)
/**
 * main - Prints name of the file it was compiled.
 * Return: Always 0.
 */
int main(void)
{
	char *filename = __FILENAME__;

	printf("%s\n", filename);
	return (0);
}
