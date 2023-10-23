#include "lists.h"
#include <stdlib.h>

/**
 * print_listint - prints all elments of a listint_t
 * @h: pointer to listint
 * Return: all elements, size_t type
*/

size_t print_listint(const listint_t *h)
{
	size_t elem = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		elem++;
		h = h->next;
	}

	return (elem);
}
