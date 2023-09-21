#include "main.h"

/**
 * leet - encodes a string into 1337
 *@s: pointer to char
 * Return: Always 0.
 */

char *leet(char *s)
{
	int i = 0;
	int j, k;
	char reps[] = "4433110077";
	char revs[] = "aAeElLoOtT";

	while (s[i] != '\0')
	{
		j = 0;
		k = 0;

		while (revs[j] != '\0')
		{
			if (s[i] == revs[j])
			{
				k = j;
				s[i] = reps[k];
			}
			j++;
		}
		i++;
	}
	return (s);
}

