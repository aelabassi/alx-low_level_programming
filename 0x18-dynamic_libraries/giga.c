#include <stdio.h>
#include <unistd.h>

/**
 * giga - runs a giga game to win a jackpot
 *
 * Return: int
 */
int giga()
{
	static int pick = -1;

	pick++;

	switch(pick)
	{
		case 0:
			return 8;
			break;
		case 1:
			return 8;
			break;
		case 2:
			return 7;
			break;
		case 3:
			return 9;
			break;
		case 4:
			return 23;
			break;
		case 5:
			return 74;
			break;
		default:
			return 0;
			break;
	}
	return pick * pick % 30000;

}

