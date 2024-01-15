#include "main.h"

/**
 * _strstr - finds the first occirrence of the substring needle
 * @haystack: pointer to char
 * @needle: pointer to char
 * Return: pointer to the beginning of the located substring
*/
char *_strstr(char *haystack, char *needle)
{
	char *fhaystack = haystack;
	char *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (fhaystack);
		}
		needle = fneedle;
		fhaystack++;
		haystack = fhaystack;

	}

	return (NULL);
}
