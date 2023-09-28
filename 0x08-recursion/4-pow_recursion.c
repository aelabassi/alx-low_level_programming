#include "main.h"

/**
 * _pow_recursion - returns the power of an int recursively
 * @x: int
 * @y: int
 * Return: int, power x**y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
