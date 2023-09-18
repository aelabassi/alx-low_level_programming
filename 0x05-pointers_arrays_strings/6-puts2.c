#include "main.h"

/**
 * puts2 - prints every other char of a string
 *@str: pointer to a char
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
