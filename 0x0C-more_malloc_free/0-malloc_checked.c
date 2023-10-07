#include "main.h"

/**
 * malloc_checked - returns a pointer to the allocated memory
 * @b: an unsigned int
 * Return: nothing
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}

}
