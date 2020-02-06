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

	for (num1 = '0'; num1 <= '7'; num1++)
	{
		for (num2 = '1'; num2 <= '8'; num2++)
		{
			for (num3 = '1'; num2 <= '9'; num3++)
			{
				if (num1 != num2 && num2 != num3 &&
				    num1 != num3)
				{
					putchar(num1);
					putchar(num2);
					putchar(num3);
					if (num1 != '7' || num2 != '8' ||
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
