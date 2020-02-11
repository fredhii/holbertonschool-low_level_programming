#include "holberton.h"
/**
 * main - Prints a string
 * Desctiption: Prints a string with putchar
 * Return: 0
 */
int main(void)
{
	char *prints = "Holberton\n";

	while (*prints)
	{
		_putchar(*prints);
		prints++;
	}
	return (0);
}
