#include "main.h"
#include <ctype.h>

/**
* rot13 - rotate a letter in text 13 position
*@s: pointer to char
* Return: pointer to char
*/
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (isalpha(s[i]))
		{
			char base = islower(s[i]) ? 'a' : 'A';

			s[i] = (s[i] - base + 13) % 26 + base;
		}
	}
	return (s);
}
