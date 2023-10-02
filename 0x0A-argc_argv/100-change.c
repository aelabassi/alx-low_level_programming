#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns minimum number of coins to make a change
 * @argc: int
 * @argv: chars
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int cents = atoi(argv[1]);
	int  coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		if ((cents - 1) >= 0)
		{
			cents -= 1;
			continue;
		}
		cents--;
	}

	printf("%sd\n", coins);
	return (0);
}
