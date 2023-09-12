#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * main - prints _putchar
 *
 * Return: return 0
*/
int main(void)
{
	char p[] = "_putchar";

	size_t i;

	for (i = 0; i < strlen(p); i++)
	{
		_putchar(p[i]);
	}
	putchar('\n');

	return (0);
}
