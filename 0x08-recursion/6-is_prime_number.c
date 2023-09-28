#include "main.h"

/**
 * divisor - is number a prime
 * @n: int
 * @m: int
 * Return: int
*/

int divisor(int n, int m)
{
	if (m % n == 0)
	{
		return (0);
	}
	else if (m / 2 > n)
	{
		return (divisor(n + 2, m));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - if an int is prime
 * @n: int
 *
 * Return: int
*/

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (divisor(3, n));
	}
}
