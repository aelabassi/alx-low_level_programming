#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
*/
int main(void)
{
	int n;

	int sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
		}
	}

	printf("\n", sum);
	return (0);
}
