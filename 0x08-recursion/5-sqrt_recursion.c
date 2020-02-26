#include "holberton.h"
/**
 * check_sqrt - Finds number for square root
 * Description: Finds number that multiplied itself
 * gives us the inserted number
 * @num: Iterator
 * @inserted_num: Number to find
 * Return: Finded number.
 */
int check_sqrt(int num, int inserted_num)
{
	if (num * num == inserted_num)
		return (num);
	if (num * num > inserted_num)
		return (-1);
	if (num * num != inserted_num)
		return (check_sqrt(num + 1, inserted_num));
	else
		return (0);
}
/**
 * _sqrt_recursion - Prints square root of a number
 * @n: Number
 * Return: Square root.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check_sqrt(1, n));
}
