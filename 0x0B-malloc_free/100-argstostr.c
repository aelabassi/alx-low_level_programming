#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: int
 * @av: double pointer to a char
 * Return: char
*/

char *argstostr(int ac, char **av)
{
	int i, j, k, size;
	char *s;

	if (ac == 0)
	{
		return (NULL);
	}
	else
	{


		for (size = i = 0; i < ac; i++)
		{
			if (av[i] == NULL)
			{
				return (NULL);
			}

			for (j = 0; av[i][j] != '\0'; j++)
			{
				size++;
			}
			size++;
		}
		s = malloc((size + 1) * sizeof(char));
		if (s == NULL)
		{
			free(s);
			return (NULL);
		}
		for (i = j = k = 0; k < size; j++, k++)
		{
			if (av[i][j] == '\0')
			{
				s[k] = '\n';
				i++;
				k++;
				j = 0;
			}
			if (k < size - 1)
			{
				s[k] = av[i][j];
			}
		}
		s[k] = '\0';
	}

	return (s);
}
