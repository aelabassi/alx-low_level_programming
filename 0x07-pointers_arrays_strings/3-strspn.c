#include "main.h"

/**
 * _strspn - returns the number of bytes in the initial segment
 * which consisit only of bytes of second char
 * @s: pointer to char
 * @accept: pointer to char
 * Return: int
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	char *temp = accept;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				bytes++;
				break;
			}
			accept++;
		}

		if (!(*--accept))
		{
			break;
		}
		accept = temp;

		s++;
	}

	return (bytes);

}
