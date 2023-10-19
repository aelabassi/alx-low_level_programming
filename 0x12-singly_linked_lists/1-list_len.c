#include "lists.h"

/**
 * list_len - returns the length of a linked list
 * @h: struct
 * Return: number of element in a linked list
*/

size_t list_len(const list_t *h)
{
	list_t *tmp = h;
	size_t len = 0;

	while (tmp != NULL)
	{
		len++;
		tmp->next;
	}

	return (len);
}
