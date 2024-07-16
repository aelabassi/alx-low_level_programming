#include "search_algos.h"
#include "math.h"
/**
* jump_search - searches for a value in a sorted array of integers
* using the Jump search algorithm
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
* Return: index where value is located or -1 if not found
*/
int jump_search(int *array, size_t size, int value)
{
	size_t step, prev;

	if (array == NULL || size == 0)
		return (-1);

	step = (int)sqrt((double)size);
	prev = 0;

	while (array[step] < value && step < size)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);
		if (step > size - 1)
			break;
	}
	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	printf("Value found between indexes [%lu] and [%lu]\n", prev, step);

	while (array[prev] < value && prev < size)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev++;
	}

	if (array[prev] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		return (prev);
	}

	return (-1);

}
