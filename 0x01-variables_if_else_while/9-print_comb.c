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
	{
		putchar(num);
		if (num != '9')
		{
			putchar(', ');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
