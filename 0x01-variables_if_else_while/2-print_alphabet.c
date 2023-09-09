#include <stdio.h>
#include <string.h>

/**
 * main - prints all alphabets in lower case
 *
 * Return: retuns 0 if execution goes well
*/
int main(void)
{
	char alphabets[] = "abcdefghijklmnopqrstvwxyz";
	size_t i;

	for (i = 0; i < strlen(alphabets); ++i)
	{
		putchar(alphabets[i]);
	}

	return (0);
}
