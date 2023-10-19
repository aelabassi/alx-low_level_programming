#include "lists.h"

/**
 * list_len - returns the length of a linked list
 * @h: struct
 * Return: number of element in a linked list
*/

size_t list_len(const list_t *h)
{
	const list_t *tmp;
	size_t len = 0;

	tmp = h;
	while (tmp != NULL)
	{
		len++;
		tmp = tmp->next;
	}

	return (len);
}
