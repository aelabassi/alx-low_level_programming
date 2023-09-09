#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * main - prints the alphabets in lower and upper case
 *
 * Return: retuns 0 if the execution is successful
*/
int main(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";

	size_t i;

	for (i = 0; i < strlen(alphabets); ++i)
	{
		putchar(alphabets[i]);
	}
	for (i = 0; i < strlen(alphabets); ++i)
	{
		putchar(toupper(alphabets[i]));
	}

	putchar('\n');

	return (0);
}
