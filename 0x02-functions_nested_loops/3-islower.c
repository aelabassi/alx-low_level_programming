#include "main.h"

/**
 * is_lower - checks if the alphabet is a lowercase
 * @c: integer
 *
 * Return: 1 if the the alphabet is lowercase, 9 otherwise
*/
int is_lower(int c)
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
