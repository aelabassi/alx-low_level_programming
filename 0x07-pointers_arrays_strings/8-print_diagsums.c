#include "main.h"

/**
 * print_diagsums - calculate the sum of the two diagonals
 * @a: pointer to int
 * @size: size of the array
*/
void print_diagsums(int *a, int size)
{
	int i;
	int sumdiag1 = 0;
	int sumdiag2 = 0;

	for (i = 0; i < size; i++)
	{
		sumdiag1 += *(a + (size * i + i));
		sumdiag2 += *(a + (size * i + size - 1 - i));

	}
	printf("%d, ", sumdiag1);
	printf("%d\n", sumdiag2);
}
