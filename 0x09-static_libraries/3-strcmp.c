#include "main.h"

/**
 * _strcmp - compares two strings
 *@s1: pointer to char
 *@s2: pointer to char
 *
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int diff = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	if (s1 != s2)
	{
		diff = *s1 - *s2;
	}
	return (diff);
}

