#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * followed by a new line
 * Return: Always 0
 */

int main(void)
{
	long int i, j, k, n;

	j = 1;
	k = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		}
		else
		{
			printf("%ld\n", j);
		}
		n = j + k;
		j = k;
		k = n;
	}

	return (0);
}
