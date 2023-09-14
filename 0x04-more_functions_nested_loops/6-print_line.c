#include "main.h"

/**
 * print_line - print n straight line
 *@n: int
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
