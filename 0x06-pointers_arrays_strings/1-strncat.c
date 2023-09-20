#include "main.h"

/**
 * _strncat - concatenates tw string with n bytes
 *@dest: pointer to char
 *@src: pointer to char
 *@n: int
 * Return: pointer to char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (0);
}

