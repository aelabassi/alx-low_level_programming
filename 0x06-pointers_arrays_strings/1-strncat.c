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
	int len, j;

	len = strlen(dest);
	j = 0;
	while (j < n && *src)
	{
		dest[len + j] = *src;
		src++;
		j++;
	}
	dest[len + j] = '\0';
	return (dest);
}

