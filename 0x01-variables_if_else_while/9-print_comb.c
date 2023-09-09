#include <stdio.h>

/**
 * main - prints every possible comnination of single-digit number
 *
 * Return: returns 0
*/
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}

	}

	return (0);
}
