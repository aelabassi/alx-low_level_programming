#include "main.h"

/**
 * _strdup - returns a pointer to the allocated memory
 * which is a duplicate of the string in params
 * @str: pointer to char
 * Return: pointer to char
*/
char *_strdup(char *str)
{
	int i, j;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	;
	s = malloc(sizeof(*str) * i + 1);


	if (s == 0)
	{

		return (NULL);
	}

	else
	{
		for (j = 0; j < i; j++)
		{
			s[j] = str[j];
		}
	}


	return (s);

}
