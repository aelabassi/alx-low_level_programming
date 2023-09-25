#include "main.h"

/**
 * _strchar - finds the first occurrence of the a charachter
 * @s: pointer to char
 * @c: char
 * Return: pointer to char
*/
char *_strchar(char *s, char c)
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

	return (0);

}
