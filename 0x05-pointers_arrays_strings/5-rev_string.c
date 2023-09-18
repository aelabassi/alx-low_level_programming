#include "main.h"

/**
 * rev_string - reverses a string
 *@s: pointer to a char
 */

void rev_string(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}

}
