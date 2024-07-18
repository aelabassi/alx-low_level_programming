#include "search_algos.h"
#include <math.h>
/**
* jump_list - searches for a value in a sorted list of integers
* using the Jump search algorithm
* @list: pointer to the head of the list to search in
* @size: number of nodes in list
* @value: value to search for
* Return: pointer to the first node where value is located, NULL if not found
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i, jump = sqrt(size);
	listint_t *current = list, *prev = NULL;

	if (list == NULL)
		return (NULL);

	while (current->n < value)
	{
		prev = current;
		for (i = 0; current->next != NULL && i < jump; i++)
			current = current->next;
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->next == NULL)
			break;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
	prev->index, current->index);
	current = prev;
	while (current != NULL)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}
	return (NULL);

}
