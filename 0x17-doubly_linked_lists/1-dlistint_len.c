#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: dlistint_t
 * Return: size_t, the number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t size;

	for (size = 0; h != NULL; size++)
		h->next;
	return (size);
}
