#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_s
 * @h: dlistint_t type
 * Return: size_t, the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t size;

	for (size = 0; h != NULL; size++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (size);
}
