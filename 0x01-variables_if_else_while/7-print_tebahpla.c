#include <stdio.h>
/**
 * main - Prints alphabet in reverse
 * Description: For loop that prints the alphabet
 * Return: 0
 */
int main(void)
{
	char za;

	for (za = 'z'; za >= 'a'; za--)
		putchar(za);
	putchar('\n');
	return (0);
}
