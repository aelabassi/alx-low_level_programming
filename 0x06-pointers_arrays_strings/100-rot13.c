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
			if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
				s[i] += 13;
			else
				s[i] -= 13;
		}
	}
	return (s);
}
