#include <stdio.h>
#include <unistd.h>

/**
* giga - runs a giga game to win a jackpot
*
* Return: int
*/
int giga(void)
{
	static int pick = -1;

	pick++;

	if (pick == 0)
		return (8);
	if (pick == 1)
		return (8);
	if (pick == 2)
		return (7);
	if (pick == 3)
		return (9);
	if (pick == 4)
		return (23);
	if (pick == 5)
		return (74);

	return (pick * pick % 30000);

}

