#include "main.h"

/**
 * string_toupper - convert lowercase chars into uppercase
 *@s: pointer to a char
 *
 * Return: pointer to a char
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
