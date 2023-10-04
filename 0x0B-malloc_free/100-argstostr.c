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
	int i, j;
	size_t size = strlen(*av);
	char *s;

	if (ac == 0)
	{
		return (NULL);
	}
	else
	{
		s = malloc(size * sizeof(*av) + 1);
		if (s == NULL)
		{
			free(s);
			return (NULL);
		}

		for (i = 0; i < ac; i++)
		{
			if (av[i] == NULL)
			{
				return (NULL);
			}

			for (j = 0; av[i][j]; j++)
			{
				if (av[i][j] == '\0')
				{
					s[j] = '\n';
				}
				s[j] = av[i][j];
			}
		}
	}

	return (s);
}
