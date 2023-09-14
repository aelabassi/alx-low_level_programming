#include "main.h"

/**
 * print_line - print n straight line
 *@n: int
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('-');
		}
	}
}
