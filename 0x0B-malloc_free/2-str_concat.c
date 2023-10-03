#include "main.h"

/**
 * str_concat - retuens a pointer should point to a newly
 * allocated space which contains s1 + s2
 * @s1: pointer to char
 * @s2: pointer to char
 * Return: pointer to char
*/

char *str_concat(char *s1, char *s2)
{
	int i, j, k, len;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			str = (char *)malloc(sizeof(char) * (i + j + 1));
		}
	}
	for (k = 0; k < i; k++)
	{
		str[k] = s1[k];
	}
	len = j;
	for (j = 0; j <= len; k++, j++)
	{
		str[k] = s2[j];
	}

	return (str);

}
