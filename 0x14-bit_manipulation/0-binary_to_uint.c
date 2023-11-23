#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to const char
 * Return: unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int postive_integer = 0;
	int i;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		postive_integer = 2 * postive_integer + (b[i] - '0');
	}

	return (postive_integer);

}
