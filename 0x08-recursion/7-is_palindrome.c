#include "holberton.h"
/**
 * _strlen_recursion - Prints string length
 * @s: String
 * Return: String length
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
/**
 * check_pal - Check Palindrome words
 * @forward: String pointer to move
 * @s: String
 * @backward: Length string
 * Return: 1 if it's true, 0 if it's false.
 */
int check_pal(int forward, char *s, int backward)
{
	if (s[forward] == s[backward])
	        check_pal(forward++, s, backward--);
	else
		return (0);
}
/**
 * is_palindrome - Check if string is palindrome
 * @s: String
 * Return: 1 if it's true, 0 if it's false.
 */
int is_palindrome(char *s)
{
	int length;

	length = _strlen_recursion(s);
	if (length > 2)
		return (check_pal(0, s, length--));
	else
		return (0);
}
