#include <stdio.h>
/**
 * main - Prints 3 numbers
 * Description: For loop that prints the numbers from 001 to 998 without repeat
 * Return: 0
 */
int main(void)
{
	int num1;
	int num2;
	int num3;

	for (num1 = '0'; num1 <= '9'; num1++)
	{
		for (num2 = '0'; num2 <= '9'; num2++)
		{
			for (num3 = '0'; num2 <= '9'; num3++)
			{
				if (num1 != num2)
				{
					putchar(num1);
					putchar(num2);
					putchar(num3);
					if (num1 != '9' || num2 != '9' ||
					    num3 != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
