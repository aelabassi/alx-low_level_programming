#include "main.h"

/**
 * _atoi - converts a string to an integer
 *@s: pointer to a char
 * Return: int
 */
int _atoi(char *s)
{
	int sgn = 1;
	int i = 0;
	unsigned int conv = 0;

	while (!(s[i] >= '0' && s[i] <= '9') && (s[i] != '\0'))
	{
		if (s[i] == '-')
		{
			sgn *= -1;
			i++;
		}
	}
	while ((s[i] >= '0' && s[i] <= '9') && (s[i] != '\0'))
	{
		conv = (conv * 10) + (s[i] - '0');
		i++;
	}
	conv *= sgn;
	return (conv);
}
