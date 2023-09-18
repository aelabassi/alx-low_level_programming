#include "main.h"

/**
 * print_rev - prints a string in reverse order
 *@s: pointer to a char
 */
void print_rev(char *s)
{
	int i;
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}

	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
