#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * @n: pointer to unint long
 * @index: uint
 * Return: int
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n |= 1 << index;

	return (1);
}
