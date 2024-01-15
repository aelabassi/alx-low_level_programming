#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memery
 * dest
 * @dest: pointer to char
 * @src: pointer to char
 * @n: int
 * Return: pointer to char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);

}
