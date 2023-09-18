#include "main.h"

/**
 * swap_int - swap the values of two ints
 *@a: pointer to an int
 *@b: poiter to an int
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
