#include "main.h"

/**
 * print_last_digit - prints the last digits
 *@n: int to extract the lasy digit from
 *
 * Return: returns the last digit
*/
int print_last_digit(int n)
{
	if (n < 0)
	{
		n *= -1;
		n %= 10;
		return (0);
	}
	return (n % 10);
}
