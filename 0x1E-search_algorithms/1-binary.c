#include "search_algos.h"
/**
* binary_search - searches for a value in a sorted array of integers using the
* Binary search algorithm
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
* Return: the index where value is located
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, j = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (i <= j)
	{
		printf("Searching in array: ");
		for (mid = i; mid < j; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);
		mid = i + (j - i) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			i = mid + 1;
		else
			j = mid - 1;
	}
	return (-1);

}
