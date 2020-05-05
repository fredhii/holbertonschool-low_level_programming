#include <unistd.h>
#include <string.h>

/**
 * rand - Fake rand to jackpoint Giga Millions
 * Returnr: Winning numbers
 */
int rand()
{
	static int cnt = -1;
	int win[6] = {8, 8, 7, 9, 23, 74};

	cnt++;
	return (win[cnt]);
}
