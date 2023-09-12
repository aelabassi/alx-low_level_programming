#include "main.h"

/**
 * _abs - absolue value of an int
 *@n: int
 *
 * Return: +n if n is negative
*/
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}

