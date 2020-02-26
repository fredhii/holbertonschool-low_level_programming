#include "holberton.h"
/**
 * factorial - Prints factorial
 * @n: Number
 * Return: Factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
