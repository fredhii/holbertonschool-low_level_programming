#include <stdio.h>
/**
 * main - Prints numbers
 * Description: For loop that prints the numbers
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
