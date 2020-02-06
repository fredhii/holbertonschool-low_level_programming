#include <stdio.h>
/**
 * main - Prints alphabet
 * Description: For loop that prints the alphabet avoiding 'q' 'e'
 * Return: 0
 */
int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		if (az != 'e' && az != 'q')
			putchar(az);
	}
	putchar('\n');
	return (0);
}
