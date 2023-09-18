#include "main.h"

/**
 * _strcpy - copies a src string to a destination string
 *@dest: pointer to a char
 *@src: pointer to a char
 * Return: pointer to a char
 */
char *_strcpy(char *dest, char *src)
{
	size_t i;

	for (i = 0; i <= strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
