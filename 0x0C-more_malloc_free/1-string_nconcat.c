#include "main.h"


/**
 * _strlen - returns the length of the string
 * @c: pointer ti char
 * Return: int
*/

int _strlen(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
		;
	return (i);
}



/**
 * string_nconcat - return a pointer to a newly allocated
 * space inmemory, which contains s1, followed by the first
 * n bytes of the string s2
 * @s1: pointer to char
 * @s2: pointer to char
 * @n: unsigned int, first n bytes of a srting
 * Return: pointer to char
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, m, size;
	char *ptr;

	m = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (m >= _strlen(s2))
		m = _strlen(s2);
	size = _strlen(s1) + m + 1;
	ptr = malloc(sizeof(*ptr) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < m; j++)
	{
		ptr[j + i] = s2[j];
	}

	ptr[i + j] = '\0';

	return (ptr);
}
