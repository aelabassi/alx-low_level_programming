#include "main.h"

/**
 * _strchr - finds the first occurrence of the a charachter
 * @s: pointer to char
 * @c: char
 * Return: pointer to char
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}

	return (NULL);

}
