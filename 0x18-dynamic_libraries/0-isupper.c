#include "main.h"

/**
 * _isupper - returns 1 for upper case character
 *@c: int
 * Return: 1 for uppercase character, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
