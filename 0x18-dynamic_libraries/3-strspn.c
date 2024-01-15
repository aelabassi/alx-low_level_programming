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

	while (*s++)
	{
		while (*accept++)
		{
			if (*(s - 1) == *(accept - 1))
			{
				bytes++;
				break;
			}
		}

		if (!(*--accept))
		{
			break;
		}
		accept = temp;
	}

	return (bytes);

}
