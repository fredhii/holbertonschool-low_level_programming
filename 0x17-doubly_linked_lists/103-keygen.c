#include "stdio.h"
#include "stdlib.h"
#include "string.h"

/**
 * main - Keygen for crackme 5.
 * @ac: Number of arguments
 * @av: Arguments pointer
 * Return: 0 Success, -1 Failed.
 */
int main(int ac, char **av)
{
	int i, size;
	char *s = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char *password;
	int f1, f2, f3, f4, f5, f6;

	(void) ac;
	f1 = f2 = f5 = f6 = 0, f3 = 1;
	password = malloc(100);
	if (!password)
		return (-1);
	/* Define Char 1 */
	size = strlen(av[1]);
	f1 = (size ^ 59) & 63;
	password[0] = s[f1];
	/* Define Char 2 */
	for (i = 0; i < size; i++)
		f2 += av[1][i];
	password[1] = s[(f2 ^ 79) & 63];
	/* Define Char 3 */
	for (i = 0; i < size; i++)
		f3 *= av[1][i];
	password[2] = s[(f3 ^ 85) & 63];
	/* Define Char 4 */
	for (i = 0; i < size; i++)
		if (av[1][i] > f4)
			f4 = av[1][i];
	srand(f4 ^ 14);
	f4 = rand(), f4 = f4 & 63;
	password[3] = s[f4];
	/* Define Char 5 */
	for (i = 0; i < size; i++)
		f5 += av[1][i] * av[1][i];
	password[4] = s[(f5 ^ 239) & 63];
	/* Define Char 6 */
	for (i = 0; i < av[1][0]; i++)
		f6 = rand();
	password[5] = s[(f6 ^ 229) & 63];
	password[6] = '\0';
	printf("%s\n", password);
	return (0);
}
