#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 for big endian, 1 otherwise
*/

int get_endianness(void)
{
	unsigned int a = 1;
	char *s = (char *) &a;

	return (*s);
}
