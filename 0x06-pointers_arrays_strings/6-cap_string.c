#include "main.h"

/**
 * cap_string - capitalizes a string
 *@s: pointer to char
 * Return: pointer to char
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n'
		|| s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.'
		|| s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"'
		|| s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{'
		|| s[i - 1] == '}') && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] = s[i] - 32;
		}
		else if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		else
		{
			s[i] = s[i];
		}
		i++;
	}
	return (s);
}

