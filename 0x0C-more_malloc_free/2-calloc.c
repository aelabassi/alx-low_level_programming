#include "main.h"

/**
 * _calloc - allocates memory for an array of nmemb elements
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: pointer to a type
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)ptr + i) = 0;
	}

	return (ptr);
}
