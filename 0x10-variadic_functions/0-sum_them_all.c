#include "variadic_functions.h"

/**
 * sum_them_all - sums all the args given to it
 * @n: constante non negative int
 * Return: int
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	unsigned int i;
	int res;

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		res += x;
	}

	return (res);

}
