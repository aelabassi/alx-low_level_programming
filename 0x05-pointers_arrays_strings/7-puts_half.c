#include "main.h"

/**
 * puts_half - print the last half of a string
 *@str: pointer to a char
 */

void puts_half(char *str)
{
	int i;
	int n = (strlen(str) - 1) / 2;

	for (i = n + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
