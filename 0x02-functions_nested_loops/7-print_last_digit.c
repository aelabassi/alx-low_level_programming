#include "main.h"

/**
 * print_last_digit - prints the last digits
 *@n: int to extract the lasy digit from
 *
 * Return: returns the last digit
*/
int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		n = -n;
		a = n % 10;
	}
	if (a < 0)
	{
		a = a * -1;
		_putchar(a + '0');
		return (a);
	}
}
