#include "main.h"

/**
 * array_range - returns an array of integers
 * allocated from the heap
 * @min: int
 * @max: int
 * Return: int
*/

int *array_range(int min, int max)
{
	int *ptr;
	int i, range;

	if (min > max)
		return (NULL);
	range = (max + 1) - min;
	ptr = malloc(sizeof(int) * range);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < range; i++)
	{
		*(ptr + i) = min + i;
	}

	return (ptr);


}
