#include <stdio.h>
/**
 * main - Prints bigger prime factor
 * Description: Lok for biggest prime factor of a number
 * Return: 0.
 */
int main(void)
{
	long i;
	long num = 612852475143;

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
			num /= i;
	}
	printf("%ld\n", num);
	return (0);
}
