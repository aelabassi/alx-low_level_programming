#include "main.h"

/**
 * print_diagonal - prints n diagaonals
 *@n: int
 */
void print_diagonal(int n)
{
	int i;
	int s;

	for (i = 0; i < n; i++)
	{
		for (s = 0; s < i; s++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}

}
