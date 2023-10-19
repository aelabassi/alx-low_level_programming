#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a node at the end of linked list
 * @head: pointer to pointer to list_t
 * @str: pointer to const char
 * Return: addresse of the new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp1, *temp2;
	unsigned int len = 0;

	if (!str)
	{
		return (NULL);
	}
	temp1 = malloc(sizeof(list_t));
	if (temp1 == NULL)
		return (NULL);
	temp1->str = strdup(str);
	if (temp1->str == NULL)
	{
		free(temp1);
		return (NULL);
	}
	while (str[len])
		len++;
	temp1->len = len;
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
