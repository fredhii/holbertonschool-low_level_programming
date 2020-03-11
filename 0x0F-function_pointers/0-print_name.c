#include "function_pointers.h"
/**
 * print_name - Prints name, through a fuction.
 * @name: Name to be printed
 * @f: pointer to fuction
 * Return: none.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
