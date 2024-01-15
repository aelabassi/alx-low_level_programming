#include "main.h"

/**
* _memset - fills first n bytes of the memory
* area pointed by the pointer
* @s: pointer to char
* @b: char
* @n: unsigned int
* Return: pointer to char
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
