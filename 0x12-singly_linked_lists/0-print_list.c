#include "lists.h"

/**
 * print_list - prints all the elements of list_t
 * @h: pointer to const list_t
 * Return: elements of list_t of size_t type
*/
size_t print_list(const list_t *h)
{
	size_t el = 0;

	while (h == NULL)
	{
		if (h->str == NULL)
			printf("[%d] (nil)", 0);
		else
		    printf("[%u] %s", h->len, h->str);

		h = h->next;
		el++;
	}
	return (el);
}
