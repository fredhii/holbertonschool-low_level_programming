#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Adds positive numbers
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, res = 0, err = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(*argv[i]))
				res += atoi(argv[i]);
			else
				err = 1;
		}
	}
	err == 0 ? printf("%i\n", res) : printf("Error\n");

	return (0);
}
