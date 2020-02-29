#include <stdio.h>
#include <stdlib.h>
/**
 * main - tells you minimun cents to give back
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	int sum = 0, n, change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	while (sum <= n)
	{
		if (sum + 25 <= n)
		{
			change += 1;
			sum += 25;
		}
		else if (sum + 10 <= n)
		{
			change += 1;
			sum += 10;
		}
		else if (sum + 5 <= n)
		{
			change += 1;
			sum += 5;
		}
		else if (sum + 2 <= n)
		{
			change += 1;
			sum += 2;
		}
		else
		{
			change += 1;
			sum += 1;
		}
	}
	n < 0 ? printf("%d\n", 0) : printf("%i\n", change - 1);
	return (0);
}
