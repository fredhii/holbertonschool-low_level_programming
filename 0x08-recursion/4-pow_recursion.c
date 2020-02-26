#include "holberton.h"
/**
 * _pow_recursion - Prints power of a number
 * @x: Number to multiply
 * @y: Times to multiply
 * Return: Power.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (0);
}
