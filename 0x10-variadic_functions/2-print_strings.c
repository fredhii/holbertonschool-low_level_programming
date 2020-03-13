#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Prints strings.
 * @separator: String to be printed
 * @n: Numbers of strings to be printed.
 * Return: none.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i, j;
	char *str;

	va_start(strings, n);

	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			str = va_arg(strings, char*);
			if (str)
				printf("%s", str);
			else
				printf("(nil)");
		}
		printf("\n");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			str = va_arg(strings, char*);
			if (str)
				printf("%s", str);
			else
				printf("(nil)");
			for (j = 0; separator[j]; j++)
				if (i + 1 != n)
					printf("%c", separator[j]);
		}
		printf("\n");
	}
	va_end(strings);

}
