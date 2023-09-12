#include "main.h"

/**
 * print_sign - checks the sign of an integer
 *@n: int
 *
 * Return: 1, 0, -1
*/
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
