#include <stdio.h>

/**
 * main - prints the sum of even numbers of a fibonnaci less than 4 million
 * Return: Always 0
 */

int main(void)
{
	unsigned long sum, j, k, n;

	int i;

	for (i = 1; i <= 33; i++)
	{
		if ((j < 4000000) && (j % 2 == 0))
		{
			sum += j;
		}
		n = j + k;
		k = n;
	}

	printf("%lu\n", sum);
	return (0);
}

