#include <stdio.h>

/**
 * main - calculate largest prime of 612852475143
 *
 * Return: Always 0.
 */

int main(void)
{
	long int n = 612852475143;
	long int p;

	for (p = 2; p < n; p++)
	{
		if (n % p == 0)
		{
			n /= p;
		}
	}
	printf("%ld\n", p);
	return (0);
}
