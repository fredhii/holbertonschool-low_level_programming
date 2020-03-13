#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Prints numbers.
 * @separator: String to be printed
 * @n: Numbers to be printed.
 * Return: none.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i, j;

	va_start(numbers, n);

	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%i", va_arg(numbers, int));
		}
		printf("\n");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("%i", va_arg(numbers, int));
			for (j = 0; separator[j]; j++)
				if (i + 1 != n)
					printf("%c", separator[j]);
		}
		printf("\n");
	}
	va_end(numbers);

}
