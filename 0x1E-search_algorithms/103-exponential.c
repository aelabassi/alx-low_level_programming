#include "search_algos.h"
/**
* binary_search_ - searches for a value in a sorted array of integers
* using the Binary search algorithm
* @array: pointer to the first element of the array to search in
* @min: starting index
* @max: ending index
* @value: value to search for
* Return: index where value is located or -1 if not found
*/
int binary_search_(int *array, int min, int max, int value)
{
	int mid, i;

	while (min <= max)
	{
		printf("Searching in array: ");
		for (i = min; i < max; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = min + (max - min) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			min = mid + 1;
		else
			max = mid - 1;
	}

	return (-1);
}
/**
* exponential_search - searches for a value in a sorted array of integers
* using the Exponential search algorithm
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
* Return: index where value is located or -1 if not found
*/
int exponential_search(int *array, size_t size, int value)
{
	int bound = 1, min;

	if (array == NULL || size == 0)
		return (-1);

	while (bound < (int)size && array[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	min = bound / 2;
	if (bound < (int)size)
		printf("Value found between indexes [%d] and [%d]\n", min, bound);
	else
		printf("Value found between indexes [%d] and [%ld]\n", min, size - 1);

	return (binary_search_(array, min, bound, value));
}
