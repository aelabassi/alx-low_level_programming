#include "main.h"

/**
 * _islower - checks if the alphabet is a lowercase
 * @c: integer
 *
 * Return: 1 if the the alphabet is lowercase, 9 otherwise
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
