#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node at the end of ll
 * @head: pointer to pointer to listint
 * @n: int
 * Return: listint
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp1, *temp2;

	temp1 = malloc(sizeof(listint_t));
	if (temp1 == NULL)
		return (NULL);

	temp1->n = n;
	temp1->next = NULL;

	if (*head == NULL)
	{
		*head = temp1;
		return (temp1);
	}

	temp2 = *head;

	while (temp2->next)
		temp2 = temp2->next;

	temp2->next = temp1;
	return (temp1);
}
