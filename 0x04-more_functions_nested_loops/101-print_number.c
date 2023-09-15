#include "main.h"

/**
 * print_number - print a digit number
 *@n: int
 */
void print_number(int n)
{
	unsigned int x = 0;

	if (n < 0)
	{
		x = -n;
		_putchar('-');
	}
	else
	{
		x = n;
	}
	if (x / 10)
	{
		print_number(x / 10);
	}
	_putchar((x % 10) + '0');

}
