#include "main.h"


/**
 * _sqrt - returns a natural square
 * @n: int
 * @k: int
 * Return: int
*/

int _sqrt(int n, int k)
{
	if (n < 0)
	{
		return (-1);
	}
	else if ((k * k) > n)
	{
		return (-1);
	}
	else if ((k * k) == n)
	{
		return (k);
	}

	return (_sqrt(n, k + 1));
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int
 * Return: int
*/

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));

}


