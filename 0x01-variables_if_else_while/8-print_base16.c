#include <stdio.h>

/**
 * main - prints base 16 numbers
 *
 * Return: retuns 0
*/
int main(void)
{
	int i;
	char alpha;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	for (alpha = 'a'; alpha < 'g'; alpha++)
	{
		putchar(alpha);
	}

	putchar('\n');

	return (0);
}
