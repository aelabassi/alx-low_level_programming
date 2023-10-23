#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a new node at the beginning of the linked list
 * @head: pointer to pointer to listint_t
 * @n: int
 * Return: listint_t
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = (*head);
	(*head) = node;
	return (*head);

}
