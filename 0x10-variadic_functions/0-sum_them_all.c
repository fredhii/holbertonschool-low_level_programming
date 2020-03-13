#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Sum numbers.
 * @n: Numbers to be sum.
 * Return: Sum of all numbers.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(numbers, n);
	for (i = 0; i < n; i++)
		sum += va_arg(numbers, int);
	va_end(numbers);

	return (sum);
}
