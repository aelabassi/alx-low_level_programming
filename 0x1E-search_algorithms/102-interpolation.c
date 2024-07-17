#include "search_algos.h"
/**
* interpolation_search - search an integer value in a sorted array
* using interpolation algorithm
* @array: array of integers
* @size: size of the array
* @value: the value to search for
* Return: index at value, -1 otherwise
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t pos;
	double t;

	if (array == NULL || size == 0)
		return (-1);
	while (size)
	{
		t = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		pos = (size_t)(low + t);

		printf("Value checked array[%d]", (int)pos);

		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[pos]);
		}
		if (array[pos] == value)
			return ((int)pos);

        if (array[pos] < value)
        {
            low = pos + 1;
        }
        else
        {
            high = pos - 1;
        }
        if (low == high)
            break;
        
	}
    return (-1);



}
