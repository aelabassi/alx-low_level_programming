#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string s
 * of any bytes in the accept string
 * @s: pointer to char
 * @accept: pointer to char
 * Return: pointer to char
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
