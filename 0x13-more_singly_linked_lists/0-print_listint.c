#include "lists.h"
#include <stdlib.h>

/**
 * print_listint - prints all elments of a listint_t
 * @h: pointer to listint
 * Return: all elements, size_t type
*/

size_t print_listint(const listint_t *h)
{
	unsigned int elem = 0;
	const listint_t *tmp;

	tmp = h;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		elem++;
		tmp = tmp->next;
	}

	return (elem);
}
