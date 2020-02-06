#include <stdio.h>
/**
 * main - Prints alphabet
 * Description: For loop that prints the alphabet
 * Return: 0
 */
int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
		putchar(az);
	putchar('\n');
	return (0);
}
