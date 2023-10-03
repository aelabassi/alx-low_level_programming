#include "main.h"

/**
 * create_array - allocate  size byte in memory
 * and intialize it with char
 * @size: an unsigned int
 * @c: char
 * Return: ponter to char
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc(sizeof(c) * size);
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return (str);


}
