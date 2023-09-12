#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in lowercase 10 times
*/
void print_alphabet_x10(void)
{
	int i;


	for (i = 0; i < 10; i++)
	{
		char alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
	}
}

