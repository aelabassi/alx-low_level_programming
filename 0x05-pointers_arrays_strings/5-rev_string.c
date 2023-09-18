#include "main.h"

/**
 * rev_string - reverses a string
 *@s: pointer to a char
 */

void rev_string(char *s)
{
	int i = 0;
	int j = strlen(s) - 1;
	char c1, c2;

	while (j > i)
	{
		c1 = s[i];
		c2 = s[j];
		s[i] = c2;
		s[j] = c1;
		j--;
		i++;

	}

}
