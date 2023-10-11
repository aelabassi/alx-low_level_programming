#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: pointer to int
 * @size: size_t, size of the array
 * @action: function pointer
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (action != NULL)
		{
			action(array[i]);
		}
	}
}
