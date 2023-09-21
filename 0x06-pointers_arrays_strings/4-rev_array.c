#include "main.h"

/**
 * reverse_array - reverse an array of ints
 *@a: pointer to an int
 *@n: int
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	while (i  < n)
	{
		n--;
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		i++;
	}
}
