#include "main.h"
#include <string.h>
/**
 * str_concat - retuens a pointer should point to a newly
 * allocated space which contains s1 + s2
 * @s1: pointer to char
 * @s2: pointer to char
 * Return: pointer to char
*/

char *str_concat(char *s1, char *s2)
{
	int i;
	char *str;
	int size1, size2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size1 = strlen(s1);
	size2 = strlen(s2);


	str = malloc(sizeof(char) * (size1 + size2) + 1);

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
		{
			str[i] = s1[i];
		}
		else
		{
			str[i] = s2[i - size1];
		}
	}
	str[i] = '\0';


	return (str);

}
