#include "lists.h"


/**
 * listint_len - retuns the number of elements in the linked list
 * @h: pointer to const lisrint
 * Return: size_t
*/

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
