#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a linked list from the heap
 * @head: pointer to listint_t
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

