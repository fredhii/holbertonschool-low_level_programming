#include <stdio.h>
/**
 * main - Prints arguments number
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%i\n", argc - 1);
	return (0);
}
