#include <stdio.h>
/**
 * main - Prints numbers from 1 to 100
 * Description: Prints numbers but replacing
 * multiples of three with Fizz and multiples
 * of five with Buzz
 * Return: 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i != 1)
			printf(" ");
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if (!(i % 3 == 0 || i % 5 == 0))
			printf("%i", i);
	}
	putchar('\n');
	return (0);
}
