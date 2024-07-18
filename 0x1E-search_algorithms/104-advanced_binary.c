#include "search_algos.h"
/**
* advanced_binary - searches for a value in a sorted array of integers
* using binary search algorithm recursively
* @array: pointer to the first element of the array
* @size: size of the array
* @value: value to search for
* Return: index where value is located, -1 if not found
*/
int advanced_binary(int *array, size_t size, int value)
{
	size_t i, mid;
	int res;

	if (array == NULL)
		return (-1);

	printf("Searching in array");
	for (i = 0; i < size; i++)
		printf("%s %d", i == 0 ? ":" : ", ", array[i]);
	/*printf("%d\n", array[i]);*/
	printf("\n");
	if (size == 1 && array[0] != value)
		return (-1);

	mid = size / 2;
	if (array[mid] == value)
	{
		if (array[mid - 1] < value)
			return (mid);
	}

	if (array[mid] < value)
	{
		res = advanced_binary(array + mid + 1, size - mid - 1, value);
		if (res == -1)
			return (-1);
		return (res + mid + 1);
	}
	return (advanced_binary(array, mid, value));

}
