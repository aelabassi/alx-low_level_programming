#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: unisgned long int
 *
*/

void print_binary(unsigned long int n)
{
	int i = 63;
	int count = 0;
	unsigned long int m;

	while (i >= 0)
	{
		m = n >> i;
		if (m & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
		i--;
	}
	if (!count)
		_putchar('0');
}
