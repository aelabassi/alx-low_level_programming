#include "main.h"

/**
 * _strncpy - copies a string
 *@dest: pointer to char
 *@src: pointer to char
 *@n: int
 * Return: pointer to char
 */

char *_strncpy(chr *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (0);
}
