#include "main.h"

/**
 * _strlen - retruns the lenght of a string
 *@s: pointer to char, equivalent to an array of chars
 * Return: int, which the length os the string
 */

int _strlen(char *s)
{
	int len = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	return (len);
}
