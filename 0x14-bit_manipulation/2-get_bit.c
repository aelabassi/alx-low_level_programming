#include "main.h"

/**
 * get_bit - value of a bit in a given index
 * @n: unsigned long int
 * @index: unisgned int
 * Return: int
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = n >> index;
	if (index > 32)
		return (-1);
	return (bit & 1);
}
